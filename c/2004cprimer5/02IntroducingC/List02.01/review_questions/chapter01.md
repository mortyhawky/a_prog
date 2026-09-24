# Review Questions
## C Primer Plus, Fifth Edition
### By Stephen Prata
#### 2004-11-23
##### Chapter 01

```Q1:


```Q2:
Explain the difference between a source code file, 
object code file, and executable
```
```A2:
Source code file:
When writing a program in the C language, we store what we write in 
a plain text file called a *source code file*. The de facto naming 
convention is filename.c. The part of the filename before the 
period is called the *basename*, and the part after the period is 
called the *extension*.

Object code file:
Our source code gets translated into *object code*, which is stored
in an *object file*.  This *object file* contains machine-language 
code, but it can not normally be run as a program by itself. 
It may contain unresolved references to functions or objects 
defined elsewhere. The object file contains the translation of our 
source code, but it is not yet a complete executable program.

Executable file:
An executable file contains the code and information required by the
operating system to load and run the program.

The GCC tool chain first preprocesses and compiles our source code
into an object file. The linker then combines the required object
files, resolves references, and links in the necessary libraries
and startup code to create the final executable file.

Before compilation, the preprocessor processes directives such as
#include and #define. For example, #include causes the content of
the referenced header file to be included in the preprocessing
result. While #define establishes macros that the preprocessor
expands.

main.c             source code
  │
  │ preprocessing
  ▼
main.i             preprocessed source / translation unit
  │
  │ compilation
  ▼
main.o             object code
  │
  │ linking
  ▼
program            executable



main.c       ──► main.o
myfunc.c     ──► myfunc.o
                  │
                  ▼
               linker
                  │
                  ▼
                myfunc

The executable is the result of linking potentially many object
files and libraries together, resolving their relationships into
one loadable program.
```
