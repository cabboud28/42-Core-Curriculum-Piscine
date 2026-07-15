class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        if age < 0:
            self._age = 0
        else:
            self._age = age

        if height < 0.0:
            self.height = 0.0
        else:
            self.height = height

        self.name = name

    def set_height(self, updated_height: float) -> None:
        if (updated_height < 0):
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self.height = updated_height
            print(f"Height updated: {self.height}cm")

    def set_age(self, updated_age: int) -> None:
        if (updated_age < 0):
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")
        else:
            self._age = updated_age
            print(f"Age updated: {self._age} days")

    def get_height(self) -> float:
        return self.height

    def get_age(self) -> int:
        return self._age

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self._age} days old")


def main() -> None:
    print("=== Garden Security System ===")
    rose = Plant("Rose", 15.0, 10)
    print("Plant created:", end=" ")
    rose.show()
    print()
    rose.set_height(25.0)
    rose.set_age(30)
    print()
    rose.set_height(-25)
    rose.set_age(-30)
    print()
    print("Current state:", end=" ")
    rose.show()


if __name__ == "__main__":
    main()
