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