_This project has been created as part of the 42 curriculum by cabboud._

# Python Module 01: Code Cultivation - Object-Oriented Garden Systems

## Description

This project introduces Object-Oriented Programming (OOP) in Python by building a digital garden ecosystem.

The project covers:
- Classes and objects
- Constructors
- Encapsulation
- Inheritance
- Static methods
- Class methods
- Nested classes
- Type hints

## Coding Conventions

- Classes use PascalCase:
  - `Plant`
  - `Flower`
  - `Seed`

- Functions and variables use snake_case:
  - `set_height`
  - `trunk_diameter`

- All functions and methods include type hints.
- Code is checked using:
  - `mypy` for type checking
  - `flake8` for code style

---

## Python Concepts

### if __name__ == "__main__"

When Python runs a file directly, it sets `__name__` to `"__main__"`.

Using:

```python
if __name__ == "__main__":
```

ensures that specific code only runs when the file is executed directly and not when it is imported by another file.

This prevents unwanted execution when modules are reused.

---

### Shebang Line

A shebang defines the interpreter used to run a script.

Example:

```python
#!/usr/bin/env python3
```

With executable permissions:

```bash
chmod +x script.py
```

The script can be executed directly:

```bash
./script.py
```

---

# Exercise Evolution

## Exercise 0: Program Structure

File:
```
ft_garden_intro.py
```

Introduces:
- Python module structure
- `if __name__ == "__main__"` usage

---

## Exercise 1: First Plant Class

File:
```
ft_garden_data.py
```

Introduces:
- Creating classes
- Object attributes
- Instance methods

The `Plant` class is created with attributes assigned manually.

Class-level type annotations are used so `mypy` can recognize attributes.

---

## Exercise 2: Plant Growth

File:
```
ft_plant_growth.py
```

Introduces:
- Methods
- Object state modification

New behaviors:
- `grow()` increases plant height
- `age()` increases plant age

---

## Exercise 3: Plant Factory

File:
```
ft_plant_factory.py
```

Introduces constructors using `__init__()`.

Plants can now be created directly:

```python
Plant("Rose", 25.0, 30)
```

Benefits:
- Objects are created with complete data
- Less repetitive code
- Better consistency

---

## Exercise 4: Garden Security

File:
```
ft_garden_security.py
```

Introduces encapsulation.

Attributes become protected:

```python
_height
_age
```

Access is controlled through:
- Getters
- Setters
- Validation methods

This prevents invalid data from being stored.

---

## Exercise 5: Plant Types

File:
```
ft_plant_types.py
```

Introduces inheritance.

New classes:
- `Flower`
- `Tree`
- `Vegetable`

They extend the `Plant` class and reuse common functionality using:

```python
super()
```

This avoids duplicated code.

---

## Exercise 6: Garden Analytics

File:
```
ft_garden_analytics.py
```

Introduces advanced OOP concepts.

### Static Methods

Used for functionality related to plants but not requiring an object instance.

Example:

```python
Plant.is_older_than_year()
```

### Class Methods

Used to create objects using class-level logic.

Example:

```python
Plant.create_anonymous()
```

### Nested Classes

The `Plant` class contains an internal `Stats` class.

`Stats` tracks:
- Number of `grow()` calls
- Number of `age()` calls
- Number of `show()` calls

The statistics are accessed only through `Plant` methods to maintain encapsulation.

Additional features:
- `Tree` extends `Plant` and tracks shade calls.
- `Seed` extends `Flower` and adds seed counting after blooming.

A standalone function:

```python
display_stats()
```

displays statistics for any `Plant` subclass using public methods instead of accessing protected attributes directly.

---

# Important Python Mechanics

## Rounding Floating Numbers

Floating-point calculations can create precision issues.

Example:

```python
25.0 + 0.8
```

may produce:

```
25.799999999
```

Using:

```python
round(value, 1)
```

keeps the desired precision:

```
25.8
```

---

## range()

Example:

```python
range(1, 8)
```

Generates:

```
1 2 3 4 5 6 7
```

The ending value is excluded.

---

## print() Without New Line

By default, `print()` adds a newline.

Using:

```python
print("text", end="")
```

keeps the output on the same line.

---

# Future Improvement

A more scalable approach is storing plants in a list instead of creating separate variables.

Example:

```python
plants = [
    Plant("Rose", 25, 30),
    Plant("Oak", 200, 365)
]

for plant in plants:
    plant.show()
```

This makes managing multiple plants easier.

---

# Exercises Summary

| Exercise | File | Main Concept |
|----------|------|--------------|
| 0 | ft_garden_intro.py | Program structure |
| 1 | ft_garden_data.py | Classes and attributes |
| 2 | ft_plant_growth.py | Methods and state changes |
| 3 | ft_plant_factory.py | Constructors |
| 4 | ft_garden_security.py | Encapsulation |
| 5 | ft_plant_types.py | Inheritance |
| 6 | ft_garden_analytics.py | Static/class methods and nested classes |

---

# AI Usage

AI (Claude) was used for:
- Understanding `mypy` and `flake8` errors
- Fixing typing-related issues
- Structuring README documentation

All final code was written and understood by the student. AI was not used to generate final solutions.
