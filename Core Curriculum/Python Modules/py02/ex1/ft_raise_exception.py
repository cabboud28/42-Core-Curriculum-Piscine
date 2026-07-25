def input_temperature(temp_str: str) -> int:
    try:
        temp_nbr = int(temp_str)
    except ValueError:
        raise ValueError(
            f"invalid literal for int() with base 10: '{temp_str}'"
        )
    if temp_nbr < 0:
        raise ValueError(f"{temp_nbr}°C is too cold for plants (min 0°C)")
    if temp_nbr > 40:
        raise ValueError(f"{temp_nbr}°C is too hot for plants (max 40°C)")
    print(f"Temperature is now {temp_nbr}°C")
    return temp_nbr


def test_temperature() -> None:
    print("=== Garden Temperature Checker ===")
    for x in ["25", "abc", "100", "-50"]:
        print(f"\nInput data is '{x}'")
        try:
            input_temperature(x)
        except ValueError as e:
            print(f"Caught input_temperature error: {e}")
    print("\nAll tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
