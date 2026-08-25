/* YouTube: CodeVault
 * www.youtube.com/watch?v=d9s_d28yJq0&list=PLfqABt5AS4FmuQf70psXrsMLEDQXNkLq2&index=1
 *
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
     -fsanitize=address,undefined \
     -g -pthread threads02.c && ./a.out
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* routine() {
    printf("Test from threads\n");
}

int main() {
    pthread_t t1;   // t1 is a struct
    pthread_create(&t1, NULL, &routine, NULL);

    pthread_join(t1, NULL);

    return EXIT_SUCCESS;
}
