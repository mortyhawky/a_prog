/* YouTube: CodeVault
 * www.youtube.com/watch?v=d9s_d28yJq0&list=PLfqABt5AS4FmuQf70psXrsMLEDQXNkLq2&index=1
 * https://code-vault.net/lesson/18ec1942c2da46840693efe9b51d86a8
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
     -fsanitize=address,undefined \
     -g threads02.c && ./a.out
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// routine is a function taking one void * argument
// and returning a void *
void *routine(void *arg) {
    (void)arg;  // suppress unused parameter arg
    printf("Test from routine\n");
    return NULL;
}

void *routine2(void *arg) {
    (void)arg;  // suppress unused parameter arg
    printf("Test from routine2\n");
    return NULL;
}

/* int pthread_create(
    pthread_t *restrict thread,
    const pthread_attr_t *restrict attr,
    void *(*start_routine)(void *),
    void *restrict arg
);
*/

int main(void) {
    pthread_t t1;   // object used to store the thread identifier
    pthread_create( &t1,        // address of t1, a pointer to pthread_t
                    NULL,       // no special attributes,    
                    &routine,   // address of routine, a pointer to a function
                    NULL        // no arguments to routine.
                  );
    pthread_join(t1, NULL);

    pthread_t t2;   // object used to store the thread identifier
    pthread_create( &t2,        // address of t2, a pointer to pthread_t
                    NULL,       // no special attributes,    
                    routine2,   // function name converts to a pointer to the function
                    NULL        // no arguments to routine2.
                  );
    pthread_join(t2, NULL);

    return EXIT_SUCCESS;
}
