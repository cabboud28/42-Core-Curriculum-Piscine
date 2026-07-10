def helper_print(x):
    if x < 1:
        return
    helper_print(x - 1)
    print(f"Day {x}")

def ft_count_harvest_recursive():
    x = int(input("Days until harvest: "))
    helper_print(x)
    print("Harvest time!")
