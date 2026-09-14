# Programming Exercise
## C Primer Plus, fifth Edition 
### By Stephen Prata 
#### Page 19    (pdf page27)

```meta
Publisher : Sams
Pub Date : November 23, 2004
ISBN : 0-672-32696-5
Pages: 792
```

We don't expect you to write C code yet, so this exercise 
concentrates on the earlier stages of the programming process.

1:
You have just been employed by MacroMuscle, Inc. 
(Software for Hard Bodies). The company is entering the European 
market and wants a program that converts inches to centimeters 
(1 inch = 2.54 cm). The company wants the program set up so that 
it prompts the user to enter an inch value. Your assignment is to 
define the program objectives and to design the program 
(steps 1 and 2 of the programming process).


# 1.Program objective
    The program will provide employees with a quick and simple way
    to convert measurements from inches to centimeters.

    Who will the target user be?
    The target users are employees who need to perform this
    conversion while working with the European market.

    The conversion is based on:
    1 inch = 2.54 centimeters
    
    The program will accept an inch value from the user and
    display corresponding centimeter value to two decimal places.


# 2.Program design
    The program will be a command-line program that can run on
    Linux or Windows
    
    The user starts the program by entering:
    conv-inch-cm
    
    What should the user interface be like?
    The program then:

```psudo code
1.Displays a short heading.
2.Prompts the user to enter a value in inches.
3.Reads the value.
4.Converts the value to centimeters.
5.Displays the result to two decimal places
6 Repeat from step 2
```
    
    The conversion will be performed by a separate function:
    We use a function that takes a float inch value as a parameter 
    and returns a float cm value.

```code
   float inch_to_cm(float inch) {
       
       return inch * CM_PER_INCH;
   }
```
   
The conversion constant will be:
```source code
#define CM_PER_INCH 2.54f
    // the post fix 'f' makes it a float
    // if we simply say 2.54
    // we get a double constant value.
```
   
    
    main() will handle the user interface and input/output, while
    inch_to_cm() will perform the actual conversion.
    
# 3.Program structure
```Flow
main()
|
+-- 1 display heading
|
+-- 2 prompt for inch value <--+
|     (enter 0  to quit)       |
|                              |
+-- 3 read inch value          |
|                              |
+-- 4 call inch_to_cm()        |
|                              |
+-- 5 display result           |
|                              |
+-- 6 repeat             ------+
```
    
    
# 4. Schedule
    The program is scheduled to be completed and rolled out on 
    Friday this week.
