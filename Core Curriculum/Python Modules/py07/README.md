*This project has been created as part of the 42 curriculum by **cabboud**.*

# DataDeck

## Description

DataDeck is a Python project focused on object-oriented programming and design patterns.

The project uses a creature card system to practice:

* Abstract classes
* Inheritance
* Polymorphism
* Abstract Factory Pattern
* Capabilities
* Strategy Pattern
* Exception handling
* Python packages and imports

The project is divided into three exercises.

## Exercises

### Exercise 0 - Creature Factory

Exercise 0 introduces the **Abstract Factory Pattern**.

It contains an abstract `Creature` class, concrete Creature classes, an abstract `CreatureFactory`, and concrete factories for different Creature families.

The factories are responsible for creating the base and evolved Creatures.

### Exercise 1 - Capabilities

Exercise 1 builds on Exercise 0 by adding **capabilities** to Creatures.

Two capabilities are introduced:

* `HealCapability`
* `TransformCapability`

Creatures can inherit from both `Creature` and a capability class.

Factories are also used to create the different Creature families.

### Exercise 2 - Abstract Strategy

Exercise 2 introduces the **Strategy Pattern**.

Different battle behaviors are separated into different strategies:

* `NormalStrategy`
* `AggressiveStrategy`
* `DefensiveStrategy`

Each strategy defines how a Creature behaves during a battle.

The tournament uses a Creature factory together with a battle strategy to organize the fights.

## Requirements

* Python 3.10 or later
* `flake8`
* `mypy`

No external libraries are required.

## Usage

Each exercise contains a test file at the root of the repository.

Run the exercises with:

```bash
python3 battle.py
python3 capacitor.py
python3 tournament.py
```

## Project Structure

```text
DataDeck/
├── ex0/
│   ├── __init__.py
│   └── ...
├── ex1/
│   ├── __init__.py
│   └── ...
├── ex2/
│   ├── __init__.py
│   └── ...
├── battle.py
├── capacitor.py
├── tournament.py
└── README.md
```

## Learning Objectives

Through this project, the goal is to understand how abstract classes, factories, capabilities, and strategies can be combined to create a modular and maintainable Python program.
