/*  page 15     2026-07-07
 *  /a/prog/c/c-primer/01GettingReady/01.01example.c
 *  pm -S gcc gdb --needed
 *  gcc -g 01.01example.c -o 01.01example
 *  ./01.01example
*/
#include <stdio.h>
int main(void)
{
    // integer to store number of dogs
    int dogs;

    // printf=Print Formated
    printf("Ok! How many dogs do you have?\n");
    // read in an int to the adress in memory where the
    // variable dogs live.
    scanf("%d", &dogs);
    printf("So you have %d dogs(s)!\n", dogs);

    // Why do we need &dogs in scanf and not in printf?
    // One could think that printf also would use the
    // address in memory where dogs live to get the value
    // Ask a LLM for explaination.

    return 0;
}

/*  DEBUGGING
 *  gdb ./01.01example
 *  break main
 *  run
 *  n for next
 *  print dogs
 */
