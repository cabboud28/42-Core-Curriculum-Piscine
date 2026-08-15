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
#to be continued


if __name__ == "__main__":
    main()
