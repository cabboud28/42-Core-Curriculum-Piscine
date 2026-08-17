import sys
import typing


def main() -> None:
    if len(sys.argv) != 2:
        print("Usage: ft_ancient_text.py <file>")
        return

    print("=== Cyber Archives Recovery ===")
    print(f"Accessing file: '{sys.argv[1]}'")
    try:
        filename: typing.IO = open(sys.argv[1], "r")
    except Exception as e:
        print(f"Error opening file '{sys.argv[1]}': {e}")
        return
    
    try:
        content = filename.read()
        print("---\n")
        print(content)
        print("\n---")
    finally:
        filename.close()
        print(f"File '{sys.argv[1]}' closed")

    print("Transform data:")
    lines = content.splitlines()
    new_content = ""
    for line in lines:
        new_content += line + "#\n"

    print("---\n")
    print(new_content)
    print("---")

    new_filename = input("Enter new filename (or empty): ")

    if new_filename == "":
        print("Not saving data.")
        return

    print(f"Saving data to '{new_filename}'")

    try:
        out_file: typing.IO = open(new_filename, "w")
    except Exception as e:
        print(f"Error opening file '{new_filename}': {e}")
        return

    try:
        out_file.write(new_content)
    finally:
        out_file.close()

    print(f"Data saved in file '{new_filename}'")


if __name__ == "__main__":
    main()
