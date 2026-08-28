/* YouTube: CodeVault
 * www.youtube.com/watch?v=d9s_d28yJq0&list=PLfqABt5AS4FmuQf70psXrsMLEDQXNkLq2&index=1
 * https://code-vault.net/lesson/18ec1942c2da46840693efe9b51d86a8
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
     -fsanitize=address,undefined \
     -g threads03.c && ./a.out ; echo "exit status =" $?

int pthread_create(
    pthread_t *restrict thread,
    const pthread_attr_t *restrict attr,
    void *(*start_routine)(void *),
    void *restrict arg
);
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// routine is a function taking one void * arg
// and returning a void *
void *routine(void *arg) {
    (void)arg;  // suppress the unused parameter arg
    printf("Test from routine\n" );
    sleep(4);
    printf("Ending thread\n" );
    return NULL;
}

int main(void) {
    // objects used to store the thread identifiers:
    pthread_t t1, t2;
    int th_status1 = pthread_create( 
        &t1,        // address of t1, a pointer to pthread_t
        NULL,       // no special attributes,    
        &routine,   // address of routine, a pointer to a function
        NULL        // no arguments to routine.
    );
    printf("thread status 1 = %i\n", th_status1 );
    if (th_status1) {
        printf(" *** Couldn't create thread1\n");
        exit(EXIT_FAILURE);
    }

    sleep(2);

    int th_status2 = pthread_create( 
        &t2,        // address of t2, another pointer to pthread_t
        NULL,       // no special attributes,    
        routine,    // address of routine, a pointer to a function
        NULL        // no arguments to routine.
    );
    printf("thread status 2 = %i\n", th_status2 );
    if (!th_status2) {
        printf(" *** Couldn't create thread2\n");
        exit(EXIT_FAILURE);
    }

    int j1 = pthread_join(t1, NULL); // wait for thread t1 to finish
    printf("join1 = %i\n", j1 );
    int j2 = pthread_join(t2, NULL); // wait for thread t2 to finish
    printf("join2 = %i\n", j2 );

    return EXIT_SUCCESS;
}
