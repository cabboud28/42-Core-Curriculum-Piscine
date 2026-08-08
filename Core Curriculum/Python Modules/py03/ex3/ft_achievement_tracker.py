import random


ACHIEVEMENTS_LIST = [
    'Crafting Genius', 'World Savior', 'Master Explorer',
    'Collector Supreme', 'Untouchable', 'Boss Slayer',
    'Strategist', 'Unstoppable', 'Speed Runner', 'Survivor',
    'Treasure Hunter', 'First Steps', 'Sharp Mind', 'Hidden Path Finder'
]


class Player:
    def __init__(self, name: str, ach_set: set) -> None:
        self.name = name
        self.ach_set = ach_set


def gen_player_achievements() -> set:
    x = random.randint(4, len(ACHIEVEMENTS_LIST))
    return set(random.sample(ACHIEVEMENTS_LIST, x))


def main() -> None:
    print("=== Achievement Tracker System ===\n")

    p1 = Player("Alice", gen_player_achievements())
    p2 = Player("Bob", gen_player_achievements())
    p3 = Player("Charlie", gen_player_achievements())
    p4 = Player("Dylan", gen_player_achievements())

    for p in [p1, p2, p3, p4]:
        print(f"Player {p.name}: {p.ach_set}")

    union = p1.ach_set.union(p2.ach_set,  p3.ach_set,  p4.ach_set)
    print(f"\nAll distinct achievements: {union}")

    common = p1.ach_set.intersection(p2.ach_set,  p3.ach_set,  p4.ach_set)
    print(f"\nCommon achievements: {common}")

    only1 = p1.ach_set.difference(p2.ach_set, p3.ach_set, p4.ach_set)
    only2 = p2.ach_set.difference(p1.ach_set, p3.ach_set, p4.ach_set)
    only3 = p3.ach_set.difference(p1.ach_set, p2.ach_set, p4.ach_set)
    only4 = p4.ach_set.difference(p1.ach_set, p2.ach_set, p3.ach_set)

    print(f"\nOnly {p1.name} has: {only1}")
    print(f"Only {p2.name} has: {only2}")
    print(f"Only {p3.name} has: {only3}")
    print(f"Only {p4.name} has: {only4}")

    all_achievements = set(ACHIEVEMENTS_LIST)

    print(f"\n{p1.name} is missing: {all_achievements.difference(p1.ach_set)}")
    print(f"{p2.name} is missing: {all_achievements.difference(p2.ach_set)}")
    print(f"{p3.name} is missing: {all_achievements.difference(p3.ach_set)}")
    print(f"{p4.name} is missing: {all_achievements.difference(p4.ach_set)}")


if __name__ == "__main__":
    main()
