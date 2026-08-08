*This project has been created as part of the 42 curriculum by cabboud.*

# Python Module 03: Data Quest

## Data Structures

| Type    | Ordered | Mutable | Duplicates |
| ------- | ------- | ------- | ---------- |
| `list`  | Yes     | Yes     | Yes        |
| `tuple` | Yes     | No      | Yes        |
| `set`   | No      | Yes     | No         |
| `dict`  | Yes*    | Yes     | Keys: No   |

*Insertion order is preserved since Python 3.7.

## Exercises

| Ex | File                        | Concept               |
| -- | --------------------------- | --------------------- |
| 0  | `ft_command_quest.py`       | `sys.argv`, lists     |
| 1  | `ft_score_analytics.py`     | Lists, error handling |
| 2  | `ft_coordinate_system.py`   | Tuples, coordinates   |
| 3  | `ft_achievement_tracker.py` | Sets, set operations  |
| 4  | `ft_inventory_system.py`    | Dictionaries          |
| 5  | `ft_data_stream.py`         | Generators, `yield`   |
| 6  | `ft_data_alchemist.py`      | Comprehensions        |

## Key Concepts

**Ex0 — Command Quest**
`sys.argv[0]` is the script name and `sys.argv[1:]` contains the arguments. Use `len(sys.argv)` to count them.

**Ex1 — Score Cruncher**
Use `try/except` around `int()` to handle invalid input. Keep valid scores and use `sum()`, `max()`, and `min()` for statistics.

**Ex2 — Position Tracker**
Tuples are useful for fixed coordinates. Parse `x,y,z` with `split(',')`, convert to `float`, and handle `ValueError`. Calculate 3D distance using the Euclidean distance formula.

**Ex3 — Achievement Hunter**
Sets store unique achievements. Use `union()` for all achievements, `intersection()` for common ones, and `difference()` for unique/missing achievements. `set()` represents an empty set.

**Ex4 — Inventory Master**
Parse `name:quantity` from `sys.argv`. Validate the format, quantity, and duplicate keys. Use dictionaries for inventory and calculate percentages with `quantity / total * 100`.

**Ex5 — Stream Wizard**
Generators use `yield` to produce values lazily. `next()` advances a generator, while `for` automatically iterates through it. Use `while True` for an endless stream.

**Ex6 — Data Alchemist**
List comprehensions transform or filter lists concisely. Dict comprehensions create key-value pairs. Use them when they remain readable.

## Resources

* Python command-line arguments — GeeksforGeeks
* Python tuples — W3Schools
* Set `difference()` — W3Schools
* Python dictionaries — W3Schools

## AI Usage

AI (Claude) was used to help structure and write README notes based on my understanding during development.

All code was written and understood by me. AI was not used to generate the final solutions directly.
