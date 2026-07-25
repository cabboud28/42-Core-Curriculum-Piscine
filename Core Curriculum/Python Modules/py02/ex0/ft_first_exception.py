def input_temperature(temp_str: str) -> int:
    try:
        temp_nbr = int(temp_str)
    except ValueError as e:
        print(f"Caught input_temperature error: {e}")
    else:
        print(f"Temperature is now {temp_nbr}°C")
        return temp_nbr
    return 0


def test_temperature() -> None:
    print("=== Garden Temperature ===\n")
    print("Input data is '25'")
    input_temperature("25")
    print()
    print("Input data is 'abc'")
    input_temperature("abc")
    print()
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
