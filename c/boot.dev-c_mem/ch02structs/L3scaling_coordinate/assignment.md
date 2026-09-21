# Assignment
```
1. Open coord.h and add a declaration for the scale_coordinate 
   function as defined in the coord.c file.

2. Complete the scale_coordinate function in coord.c. 
   It should return a new Coordinate where each field is 
   scaled up (multiplied) by the factor parameter.
```

# Forward declaration / declaration / prototype
```c
int add(int a, int b);  // prototype == declaration == forward declaration
```

```Explanation
This line has no body, so it's a pure declaration. 
Since it appears before the definition (which has the body), 
it is inherently a forward declaration.
That's basically the whole point of prototypes in C. 
You declare the function's signature early (often in a header) 
so the callers can use it before the compiler has seen the actual 
definition later in the file
(or in another translation unit entirely).
So yes — every function prototype is a forward declaration, 
they're just two names for the same concept. 
Emphasizing different things: "prototype" emphasizes what it 
specifies (return type + parameter types), "declaration" 
emphasizes what it does (tells the compiler this identifier exists).
```
