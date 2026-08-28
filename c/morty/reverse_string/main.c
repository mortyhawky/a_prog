/*
/a/prog/c/morty/reverse_string/main.c

gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    main.c -o a.out && ./a.out ; echo "Exit Code = "$?

clang -std=c23 -Wall -Wextra -Werror -Wpedantic \
      -fsanitize=address,undefined -g3 \
      main.c -o a.out && ./a.out ; echo "Exit Code = "$?

*/

// len = 0:  i < 0 / 2 = 0
//           no iterations
//           Don't need any swaps to reverse 0 characters
//
// len = 1:  i < 1 / 2 = 0
//           no iterations
//           Don't need any swaps to reverse 1 character
//
// len = 2:  i < 2 / 2 = 1
//           one iteration
//           With 2 characters, we need only one swap.
//
// len = 3:  i < 3 / 2 = 1
//           one iteration
//           With 3 characters, we need only one swap.
//           The middle character doesn't need to move.
//
// len = 4:  i < 4 / 2 = 2
//           two iterations
//           With 4 characters, we need two swaps.
//
// len = 5:  i < 5 / 2 = 2
//           two iterations
//           With 5 characters, we need two swaps.
//           The middle character doesn't need to move.
//
//    length       swaps
//      0           0
//      1           0
//      2           1
//      3           1
//      4           2
//      5           2
//      6           3
//      7           3
//      8           4

#include <stdio.h>    // for printf
#include <stdlib.h>   // for EXIT_SUCCESS
#include <string.h>   // for strlen

int main(void) {
    printf("Reverse a string, in place:\n");

    char string[] = "1234567";
    printf("String to reverse..: '%s'\n", string);
    size_t len = strlen(string);
    printf("Length of string...: %02zu\n", len);

    size_t i = 0;
    for(i = 0; i < len / 2; i++) {
        char tmp = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 - i] = tmp;
    }

    printf("Reversed string....: '%s'\n", string);
    printf("Iterations.........: %02zu \n", i);

    return EXIT_SUCCESS;
}
