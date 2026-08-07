import math


def get_player_pos() -> tuple:
    while True:
        x = input("Enter new coordinates as floats in format 'x,y,z': ")
        parts = x.split(',')
        count = 0
        valid = True
        for _ in parts:
            count += 1
        if count == 3:
            xyz: tuple[float, ...] = ()
            for part in parts:
                try:
                    part = part.strip()
                    xyz = xyz + (float(part),)
                except ValueError as e:
                    print(f"Error on parameter '{part}': {e}")
                    valid = False
                    # break: if i want it to stop it on the first error
            if valid:
                return xyz
        else:
            print("Invalid syntax")


def main() -> None:
    print("=== Game Coordinate System ===\n")
    print("Get a first set of coordinates")
    a = get_player_pos()
    print(f"Got a first tuple: {a}")
    print(f"It includes: X={a[0]}, Y={a[1]}, Z={a[2]}")
    dist_cen = round(
        math.sqrt((a[0])**2 + (a[1])**2 + (a[2])**2), 4
        )
    print(f"Distance to center: {dist_cen}\n")
    print("Get a second set of coordinates")
    b = get_player_pos()
    dist_a_b = round(
        math.sqrt(
            (b[0]-a[0])**2 + (b[1]-a[1])**2 + (b[2]-a[2])**2
        ), 4)
    print(f"Distance between the 2 sets of coordinates: {dist_a_b}")


if __name__ == "__main__":
    main()
