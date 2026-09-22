/*---------------------------------------------------------------
 * c /a/prog/c/codevault/threads
 * v threads01.c
 *
gcc -std=c23 \
    -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g threads01.c \
    -pthread \
    -o threads01

 gdb ./threads01
 b main   r   n
 **---------------------------------------------------------------*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *thrd_func(void *arg);

int main(void)
{
    // t1 and t2 are thread handles (thread identifiers).
    // A handle is an opaque identifier used by the API to refer to a resource.
    // In this case, it is a value stored in a pthread_t object.
    // On this system pthread_t is typically:
    //     typedef unsigned long pthread_t;
    pthread_t t2, t2;

    if (pthread_create(&t1, NULL, thrd_func, NULL) != 0) {
        perror("pthread_create");
        return EXIT_FAILURE;
    }
    if (pthread_create(&t2, NULL, thrd_func, NULL) != 0) {
        perror("pthread_create");
        return EXIT_FAILURE;
    }

    if (pthread_join(t1, NULL) != 0) {
        perror("pthread_join");
        return EXIT_FAILURE;
    }

    if (pthread_join(t2, NULL) != 0) {
        perror("pthread_join");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void *thrd_func(void *arg)
{
    (void)arg;  // suppress unused parameter warning
    printf("Start of thread!\n");
    sleep(2);
    printf("End of thread!\n");

    return NULL;
}
