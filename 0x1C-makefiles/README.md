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

```sh

root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make -f 0-Makefile 
gcc main.c school.c -o school
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# ./school
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


```
File: `0-Makefile`

1. make -f 1-Makefile
Requirements:

- name of the executable: `school`
- rules: `all`
    - The `all` rule builds your executable
- variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the .c files

```sh

julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school

```

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

```sh

root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make -f 2-Makefile
gcc -c main.c -o main.o
gcc -c school.c -o school.o
gcc -o school main.o school.o
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make -f 2-Makefile
make: Nothing to be done for 'all'.
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# echo "/* School */" >> main.c
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make -f 2-Makefile
gcc -c main.c -o main.o
gcc -o school main.o school.o

```

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

```sh

root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# ls -1
0-Makefile
100-Makefile
1-Makefile
2-Makefile
3-Makefile
4-Makefile
5-island_perimeter.py
5-main.py
main.c
main.h
main.o
m.h
README.md
school
school.c
school.o
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make -f 3-Makefile
make: Nothing to be done for 'all'.
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make all -f 3-Makefile
make: Nothing to be done for 'all'.
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# ls -1
0-Makefile
100-Makefile
1-Makefile
2-Makefile
3-Makefile
4-Makefile
5-island_perimeter.py
5-main.py
main.c
main.h
main.o
m.h
README.md
school
school.c
school.o
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make clean -f 3-Makefile
rm -f main.o school.o school *~ \#*\# *.swp *.swo
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make oclean -f 3-Makefile
rm -f main.o school.o
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make fclean -f 3-Makefile
rm -f main.o school.o school *~ \#*\# *.swp *.swo
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make all -f 3-Makefile
gcc -c main.c -o main.o
gcc -c school.c -o school.o
gcc main.o school.o -o school
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make all -f 3-Makefile
make: Nothing to be done for 'all'.
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# make re -f 3-Makefile
rm -f main.o school.o school *~ \#*\# *.swp *.swo
gcc -c main.c -o main.o
gcc -c school.c -o school.o
gcc main.o school.o -o school

```

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

```sh

julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school

```

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

```sh

root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# cat 5-main.py
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
root@a33dae7af5c3:/alx-low_level_programming/0x1C-makefiles# ./5-main.py
12

```

File: `5-island_perimeter.py`