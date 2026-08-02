/*  page 15     2026-07-07
 *  /a/prog/c/c-primer/01GettingReady/01.01example.c
 *  pm -S gcc gdb --needed
 *
 * Compile:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 03-hello-c23.c
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
*/

#include <stdio.h>

int main(void)
{
    // integer to store number of dogs (stack).
    int dogs;

    // Print Formated
    printf("Ok! How many dogs do you have?\n");
    // scan formated, read an int as decimal from stdin,
    // into memory at the address of dogs.
    // I.e. where the variable dogs live in memory (stack)
    scanf("%d", &dogs);
    printf("So you have %d dogs(s)!\n", dogs);

    // Why do we need &dogs in scanf and not in printf?
    // One could think that printf also would use the
    // address in memory where dogs live to get the value?
    // All function calls in C are done by value.
    // For the function scanf to modify the dogs variable's value,
    // this has to be done through it's address (pointer)
    // &dogs IS a pointer to dogs. By evaluating the variable 
    // dogs gives us its value e.g.,5).
    // Evaluating the expression &dogs gives its address
    // e.g., 0x7ffd50, and that address value is a pointer.

    //Memory Address:   0x7ffd50
    //Variable Name:    dogs
    //Stored Value:     5

    printf("%d", dogs);   //---> Sends 5
    scanf("%d", &dogs);   //---> Sends 0x7ffd50 (so scanf knows WHERE to write)

    return 0;
}
