# Cpp-Learning

A project to learn cpp language following the book, _C++ Primer Plus_.

I will retype all program file in this book.

You can `cd` to a sub-project, and use command `make` to build the program file.

> NOTE:warning:: Need `GNU Make` .
>
> NOTE:warning:: The project is built for linux.

## Structure

Cpp-Learning
├─ n.m-example.cpp
│   ├── main.cpp
│   └── Makefile
├─ Demo
│   └── Makefile
├─ prj.sh
└─ README.md

## Usage

Use `git` to pull the project.

Use `cd` command to a certain sub-project.

Use `GNU Make` to build the sub-project.

- `make` : Compile the code.
- `make clean` : Clean all files built by `make`.
- `make clean.d` : Clean all `.d` files.
- `make clean.o` : Clean all `.o` files.

- `make clean.out` : Clean all `.out` files.
- `make run` : Run `main.out` without arguments.
