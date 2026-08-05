class Plant:
    name: str
    height: float
    age_in_days: int
    grow_per_day: float

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age_in_days} days old")

    def grow(self) -> None:
        self.height = round(self.height + self.grow_per_day, 1)

    def age(self) -> None:
        self.age_in_days += 1


def main() -> None:
    rose = Plant()
    rose.name = "Rose"
    rose.height = 25
    rose.age_in_days = 30
    rose.grow_per_day = 0.8
    original_height = rose.height

    print("=== Garden Plant Growth ===")
    rose.show()
    for i in range(1, 8):
        print(f"=== Day {i} ===")
        rose.grow()
        rose.age()
        rose.show()
    print(f"Growth this week: {round(rose.height - original_height, 1)}cm")


if __name__ == "__main__":
    main()
