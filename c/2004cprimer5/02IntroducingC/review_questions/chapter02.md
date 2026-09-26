# Review Questions
## C Primer Plus, Fifth Edition
### By Stephen Prata
#### 2004-11-23
##### Chapter 02

```Q1:
What are the basic modules of a C program called?
```
```A1:
The basic modules of a C program are called functions.
A C program consists of one or more functions.
```

```Q2:
What is a syntax error?
Give an example of one in English and one in C
```

```A
A syntax error occurs when we don't follow the rules of a language's 
grammar. In C, this can happen when valid C tokens or symbols are 
used in an invalid arrangement.
For example:
int n1, int n2;
is a syntax error. After the comma, the declaration cannot contain 
another int specifier. We could instead write:
int n1;
int n2;
or:
int n1 = 0;
int n2 = 0;

An English example could be:
*The boy knows how to swim.* 
This follows normal English syntax, whereas:
*The boy how to swim knows*
Does not. It contains valid English words, but they are arranged in
an invalid grammatical structure.

English:    words/tokens    -> grammar  -> sentence
C:          tokens          -> grammar  -> valid program
```

```Q3:
What is a semantic error? 
Give an example of one in English and one in C.
```
```A3:
Semantic errors are errors in meaning. 
For example:
"The girl was swimming in the skies, as she rode her bike."
The sentence is syntactically correct, but its meaning is
nonsensical or at least highly implausible. 

An example in C:
int n = 5;
n2 = n * n;
n3 = n2 * n2;
The code is syntactically valid and the operations are meaningful
to the compiler. However, I intended to calculate n cubed:
Instead, I calculated n^2 x x^2 = n^4
For n = 5, this gives:
5^4 = 625
rather than:
5^3 = 125
The error is therefore in the intended meaning of the program,
not in its syntax.

Funny mnemonic:
n^2 = n squared
n^3 = n cubed
n^4 = n "time-spaced"
n^5 = n "that's enough, stop"
```

```Q4:
Indiana Sloth has prepared the following program and brought it to 
you for approval. Please help him out.
```
```psudo c
include studio.h
int main{void} /* this prints the number of weeks in a year /*
(
int s
s := 56;
print(There are s weeks in a year.);
return 0;
```
```A4:
My translation into C:
```
```C
#include <stdio.h>
int main(void) { // this prints the number of weeks in a year
    int sloth_weeks_in_year = 52;
    printf("There are %d weeks in a year.\n", sloth_weeks_in_year);

    return 0;
}
```

```Q5:
Assuming that each of the following examples is part of a complete
program, what will each one print?
a.
b. printf("Baa Baa Black Sheep.");
c. printf("Have you any wool?\n");
d.
e.
f. printf("Begone!\nO creature of lard!");
g.
h.
i. printf("What?\nNo/nBonzo?\n");
j.
k.
l. int num;
m.
n. num = 2;
o. printf("%d + %d = %d", num, num, num + num);
p.
```
```A5:
Baa Baa Black Sheep.Have you any wool?
Begone!
O creature of lard!What?
No/nBonzo?
2 + 2 = 4
```

```Q6:
Which of the following are C keywords?
main, int function, char, =
```
```A6:
*main* is not a C keyword. In a hosted C program, main is the
designated program entry point.

In the C language *int* and *char* is keywords.

*function* is not a keyword in C. Thus, it can be used as an 
identifier, or a label.

*=* is the assignment operator.
```

```Q7:
How would you print the values of words and lines in the form 
"There were 3020 words and 350 lines.? Here, 3020 and 350 represent
values for the two variables.
```
```A7:
printf("There were %d words and %d lines.\n", words, lines);
```

```Q8:
Consider the following program:

#include <stdio.h>
int main(void)
{
    int a, b;
    a = 5;
    b = 2;      /* line 7 */
    b = a;      /* line 8 */
    a = b;      /* line 9 */
    printf("%d %d\n", b, a);
    return 0;
}

What is the program state after line 7? Line 8? Line 9?
```A8:
after line    a         b
7             a = 5     b = 2 
8             a = 5     b = 5
9             a = 5     b = 5

10          It will print: '5 5'
```
