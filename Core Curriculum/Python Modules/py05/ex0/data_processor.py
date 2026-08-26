from abc import ABC, abstractmethod
from typing import Any


class DataProcessor(ABC):
    def __init__(self) -> None:
        self._storage: list[str] = []
        self._rank: int = 0

    @abstractmethod
    def validate(self, data: Any) -> bool:
        pass

    @abstractmethod
    def ingest(self, data: Any) -> None:
        pass

    def output(self) -> tuple[int, str]:
        rank = self._rank
        value = self._storage[0]
        new_storage = []
        for i in range(1, len(self._storage)):
            new_storage.append(self._storage[i])
            # this loop creates a new list called new_storage that contains all the elements of the original storage list except for the first element. It starts from index 1 and appends each subsequent element to new_storage.
        self._storage = new_storage
        # this line updates the original storage list to be equal to the new_storage list, effectively removing the first element from the original storage.
        self._rank += 1
        return (rank, value)
    # this function is used to output the next value in the storage list, along with its rank. It retrieves the first value from the storage, updates the storage to remove that value, increments the rank, and returns a tuple containing the rank and the value.

class NumericProcessor(DataProcessor):
    def validate(self, data: Any) -> bool:
        if isinstance(data, (int, float)):
            return True
        # isinstance() is a built-in Python function that checks if an object is an instance of a specified class or a subclass thereof. In this case, it checks if the data is either an integer (int) or a floating-point number (float). If the data is of either type, the function returns True, indicating that the data is valid for numeric processing.
        if isinstance(data, list):
            for item in data:
                if isinstance(item, (int, float)) is False:
                    return False
            return True
        return False

    def ingest(self, data: int | float | list[int | float]) -> None:
        if self.validate(data) is False:
            raise ValueError("Improper numeric data")
        # This function is used to ingest numeric data into the storage list. It first validates the data, and if it's valid, it appends the data to the storage list.
        if isinstance(data, list):
            for item in data:
                self._storage.append(str(item))
                # The for loop iterates through each item in the list and appends its string representation to the storage list. This ensures that all numeric values are stored as strings in the storage.
        else:
            self._storage += [str(data)]
            # If the data is a single numeric value (not a list), it converts the value to a string and appends it to the storage list. The use of += with a list containing the string representation of the data ensures that the storage list is updated correctly.


class TextProcessor(DataProcessor):
    def validate(self, data: Any) -> bool:
        if isinstance(data, str):
            return True
        if isinstance(data, list):
            for item in data:
                if isinstance(item, str) is False:
                    return False
            return True
        return False

    def ingest(self, data: str | list[str]) -> None:
        if self.validate(data) is False:
            raise ValueError("Improper text data")
        if isinstance(data, list):
            self._storage += data
        else:
            self._storage += [data]


class LogProcessor(DataProcessor):
    def validate(self, data: Any) -> bool:
        if isinstance(data, dict):
            for k, v in data.items():
                if (isinstance(k, str) and isinstance(v, str)) is False:
                    return False
            return True
        if isinstance(data, list):
            for item in data:
                if self.validate(item) is False:
                    return False
            return True
        return False

    def ingest(self, data: dict[str, str] | list[dict[str, str]]) -> None:
        if self.validate(data) is False:
            raise ValueError("Improper log data")
        if isinstance(data, list):
            entries = data
        else:
            entries = [data]
        for entry in entries:
            log = entry['log_level'].strip() + ": " + entry['log_message']
            self._storage.append(log)


def main() -> None:
    print("=== Code Nexus - Data Processor ===\n")

    print("Testing Numeric Processor...")
    numeric = NumericProcessor()
    print(f" Trying to validate input '42': {numeric.validate(42)}")
    print(f" Trying to validate input 'Hello': {numeric.validate('Hello')}")
    print(" Test invalid ingestion of string 'foo' without prior validation:")
    try:
        numeric.ingest('foo')
    except ValueError as e:
        print(f" Got exception: {e}")
    print(" Processing data: [1, 2, 3, 4, 5]")
    numeric.ingest([1, 2, 3, 4, 5])
    print(" Extracting 3 values...")
    for _ in range(3):
        rank, value = numeric.output()
        print(f" Numeric value {rank}: {value}")
    print()
    print("Testing Text Processor...")
    text = TextProcessor()
    print(f" Trying to validate input '42': {text.validate(42)}")
    print(" Processing data: ['Hello', 'Nexus', 'World']")
    text.ingest(['Hello', 'Nexus', 'World'])
    print(" Extracting 1 value...")
    rank, value = text.output()
    print(f" Text value {rank}: {value}")
    print()
    print("Testing Log Processor...")
    log = LogProcessor()
    print(f" Trying to validate input 'Hello': {log.validate('Hello')}")
    log_data = [
        {'log_level': 'NOTICE', 'log_message': 'Connection to server'},
        {'log_level': 'ERROR ', 'log_message': 'Unauthorized access!!'},
    ]
    print(f" Processing data: {log_data}")
    log.ingest(log_data)
    print(" Extracting 2 values...")
    for _ in range(2):
        rank, value = log.output()
        print(f"Log entry {rank}: {value}")


if __name__ == "__main__":
    main()
