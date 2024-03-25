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

