import sys


def main() -> None:
    x = len(sys.argv)
    print("=== Player Score Analytics ===")

    if x == 1:
        print("No scores provided. "
              "Usage: python3 ft_score_analytics.py <score1> <score2> ...")
    elif x > 1:
        invalid = False
        for i in range(1, x):
            try:
                int(sys.argv[i])
            except ValueError:
                print(f"Invalid parameter: '{sys.argv[i]}'")
                invalid = True
        if invalid:
            print("No scores provided. Usage: python3 ft_score_analytics.py <score1> <score2> ...")
        else:
            print("Scores processed: [", end="")
            for j in range(1, x-1):
                print(f"{sys.argv[j]},", end=" ")
            print(f"{sys.argv[x-1]}", end="")
            print("]")
            y = sum(int(sys.argv[k]) for k in range(1, x))
            max_score = max(int(sys.argv[i]) for i in range(1, x))
            min_score = min(int(sys.argv[i]) for i in range(1, x))
            print(f"Total players: {x-1}")
            print(f"Total score: {y}")
            print(f"Average score: {float(y / (x-1))}")
            print(f"High score: {max_score}")
            print(f"Low score: {min_score}")
            print(f"Score range: {max_score - min_score}")


if __name__ == "__main__":
    main()
