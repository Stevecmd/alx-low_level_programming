# 0x18. C - Dynamic libraries 

Difference between Static Linking and Dynamic Linking. <br />
Static Linking leads to large programs because resourced are not re-used. <br />
Everytime a library is updated, the program must be re-compiled. <br />

In Dynamic linking, new libraries are loaded into the memory at time of execution.
The linker will use the address of the dynamic function and use it to load the program being run
by appending it to the code. <br />
[Youtube video](https://www.youtube.com/watch?v=eW5he5uFBNM&ab_channel=HowTo) or 
[Geeks 4 Geeks](https://www.geeksforgeeks.org/static-and-dynamic-linking-in-operating-systems/)

Advantages:
1. Smaller file sizes, <br />
2. No need to recompile entire program.

Workflow:
Create the `*.c` files. <br />
Declare the prototypes in `main.h`.
Make the object files by running: `gcc -fPIC -c *.c` <br />
`f` is a flag, `PIC` is Position independent code, used to create shared libraries. <be />
Create a Dynamic (shared) library from the object code created: `gcc -shared -o libdynamic.so *.o`.
Move all `.c` and `.o` files to a central location: `my_functions`.
<br />
Order of commands `2. Let's call C functions from Python `:
`gcc -c mathematical_operations.c -fpic` <br />
`gcc -shared -o 100-operations.so mathematical_operations.o` <br />
`python3 100-tests.py`