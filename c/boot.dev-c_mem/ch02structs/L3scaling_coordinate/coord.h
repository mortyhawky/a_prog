#pragma once

// definition of the structure; Coordinate
struct Coordinate {
    int x_coo;  // ends with semicolon (;)
    int y_coo;  // declaring members of structure, ends with ;
    int z_coo;  // all ends with ;
};

// prototype == declaration == forward declaration
struct Coordinate new_coord(int new_x, int new_y, int new_z);

// prototype == declaration == forward declaration
struct Coordinate scale_coordinate(struct Coordinate s_coor, int scale);

void display_coordinate(struct Coordinate c);
/*
For functions, "prototype" and "declaration" really are (almost) 
the same thing:

```c
int add(int a, int b);  // prototype == declaration == forward declaration
```

This line has no body, so it's a pure declaration. Since it appears 
before the definition (which has the body), it is inherently a 
forward declaration — that's basically the whole point of prototypes 
in C. You declare the function's signature early (often in a header) 
so callers can use it before the compiler has seen the actual 
definition later in the file 
(or in another translation unit entirely). 
So yes — every function prototype is a forward declaration, 
they're not "almost" the same, they're just two names for the same 
concept, emphasizing different things: "prototype" emphasizes what 
it specifies (return type + parameter types), "declaration" 
emphasizes what it does (tells the compiler this identifier exists).
*/
