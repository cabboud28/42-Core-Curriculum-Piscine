import sys


def main() -> None:
    x = len(sys.argv)
    print("=== Player Score Analytics ===")

    if x == 1:
        print("No scores provided. Usage: python3 ft_score_analytics.py <score1> <score2> ...")
    elif x > 1:
        for i in range(1, x):
            try:
                argv_num = int(sys.argv[i])
            except ValueError:
                print(f"Invalid parameter: {sys.argv[i]}")
            else:
                print("Scores processed: [", end = "")
                for j in range(1, x):
                    print(f"{sys.argv[j]},", end = " ")
                    y = sum(sys.argv[j])
                print("]")
                print(f"Total players: {x}")
                print(f"Total score: {y}")
                print(f"Average score: {float(y / x)}")


if __name__ == "__main__":
    main()