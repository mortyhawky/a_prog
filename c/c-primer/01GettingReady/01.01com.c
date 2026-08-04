/*  page 15  2026-07-07  2026-08-04
 *  /a/prog/c/c-primer/01GettingReady/01.01example.c
 *  pm -S gcc gdb --needed
 *
 * Compile:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 01.01com.c
 *
 * Run:
./a.out

* Debug:
gdb ./a.out
* b(reak) main
* r(un)
* n(ext)
* print dogs
* display dogs
* display &dogs
*/

#include <stdio.h>

int main(void)
{
    // integer to store number of dogs (stack).
    int dogs = 0;
    /*
     * dogs is an automatic local variable, 
     * which resides on the call stack inside main()'s stack frame.
     */

    // Print Formated.
    printf("How many dogs do you have? ");
    // Scan Formated; read an int as decimal from stdin,
    // into memory at the address of the variable dogs.
    // I.e., where the variable dogs live in memory (stack)
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);

    // Why do we need &dogs in scanf and not in printf?
    // One could think that printf also would use the
    // address in memory where dogs live to get the value?
    // All function calls in C are done by value.
    // For the function scanf to modify the dogs variable's value,
    // this has to be done through it's address (pointer)
    // &dogs IS a pointer to dogs. By evaluating the variable 
    // dogs gives us its value ,2).
    // Evaluating the expression &dogs gives its address
    // , 0x7b7ff7af0020, and that address-value is a pointer.

    //Memory Address:   0x7b7ff7af0020  (stack)
    //Variable Name:    dogs
    //Stored Value:     2

    //---> Send the value 2:
    printf("printf %%d sends the value: %d\n", dogs);

    printf("For scanf we provide a pointer to dogs; &dogs\n"
           "&dogs is: %p\n", (void*)&dogs);

    // Clearing the input buffer
    //char c = '\0';
    //while ( ( c = getchar() ) != '\n' && c != EOF ) {
    //    // Do nothing - just consuming characters
    //}
    
    printf("give me another number: ");   
    scanf("%d", &dogs);   
    // Sends , 0x7b7ff7af0020 (so scanf knows WHERE to write)

    printf("Now &dogs at %p has the value %d\n", (void*)&dogs, dogs);

    return 0;
}
