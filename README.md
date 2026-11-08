# CPP04

A C++ project implementing the exercises of the 42 school module on Abstract Classes and Deep Copy.

This repository focuses on object-oriented programming concepts such as inheritance, polymorphism, virtual methods, and copy semantics.

## Overview

The project is split into three exercises:

- ex00: basic animal hierarchy with polymorphic behavior
- ex01: added Brain class and deep-copy logic for Dog/Cat
- ex02: abstract class design and proper virtual destructor handling

## Project Structure

```text
CPP04/
├── en.subject.pdf
├── ex00/
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Main.cpp
│   └── makefile
├── ex01/
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Brain.hpp
│   ├── Brain.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Main.cpp
│   └── makefile
├── ex02/
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Brain.hpp
│   ├── Brain.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Main.cpp
│   └── makefile
└── README.md
```

## Exercise Details

### ex00 - Basic Polymorphism

Create an abstract base class `Animal` and derived classes `Dog` and `Cat`.

- `Animal` has a `type` attribute
- `makeSound()` is a virtual method
- `Dog` and `Cat` override the sound behavior
- `Main.cpp` demonstrates polymorphism through base class pointers

### ex01 - Deep Copy and Brain

Extend the hierarchy with a `Brain` class storing ideas.

- The `Brain` object must be copied correctly
- Dog and Cat must manage independent brain instances
- Prevent shallow-copy bugs when objects are copied or assigned

### ex02 - Abstract Class Design

Refine the structure with a pure virtual method and proper abstract class behavior.

- `Animal` becomes abstract
- derived classes still implement the required behavior
- destructor logic follows proper C++ inheritance rules

## Build Instructions

Each exercise contains its own `makefile`.

### Build one exercise

```bash
cd ex00
make
./Animal
```

```bash
cd ex01
make
./Animal
```

```bash
cd ex02
make
./Animal
```

### Clean build artifacts

```bash
make clean
make fclean
make re
```

## Requirements

- C++98
- `-Wall -Wextra -Werror`
- `c++` compiler

## Notes

This project follows the 42 coding standard, including strict compilation rules and clean class design.

## License

This project is part of an academic exercise and is intended for learning and personal use.
