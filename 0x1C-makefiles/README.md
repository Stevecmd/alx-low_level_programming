# 0x1C. C - Makefiles

### General

- What are make, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Requirements
### General

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## Tasks

Cofirm Make is installed:
```sh

alx-low_level_programming$ make -version
GNU Make 4.3
Built for x86_64-pc-linux-gnu
Copyright (C) 1988-2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

```

0. make -f 0-Makefile

Create your first Makefile.

Requirements:

- name of the executable: `school`
- rules: `all`
        - The `all` rule builds your executable
- variables: none







File: `0-Makefile`

1. make -f 1-Makefile
Requirements:

- name of the executable: `school`
- rules: `all`
    - The `all` rule builds your executable
- variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the .c files








File: `1-Makefile`

2. make -f 2-Makefile
Create your first useful Makefile.

Requirements:

- name of the executable: `school`
- rules: `all`
    - The `all` rule builds your executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source files
- You are not allowed to have a list of all the `.o` files





File: `2-Makefile`

3. make -f 3-Makefile
Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files




File: `3-Makefile`

4. A complete Makefile

Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
        `CC`: the compiler to be used
        `SRC`: the `.c` files
        `OBJ`: the `.o` files
        `NAME`: the name of the executable
        `RM`: the program to delete files
        `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files

- The `clean`, `oclean`, `fclean`, `re` rules should never fail

- You are not allowed to have a list of all the .o files






File: `4-Makefile`


5. Island Perimeter
<bold>Technical interview preparation:</bold>

    You are not allowed to google anything
    Whiteboard first

Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:

- `grid` is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

- First line contains `#!/usr/bin/python3`
- You are not allowed to import any module
- Module and function must be documented






File: `5-island_perimeter.py`