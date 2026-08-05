import sys


def main() -> None:
    x = len(sys.argv)

    print("=== Command Quest ===")
    print(f"Program name: {sys.argv[0]}")
    if x == 1:
        print("No arguments provided!")
    elif x > 1:
        print(f"Arguments received: {x - 1}")
        for i in range(1, x):
            print(f"Argument {i}: {sys.argv[i]}")
    print(f"Total arguments: {x}")


if __name__ == "__main__":
    main()
