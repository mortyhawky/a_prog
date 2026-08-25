/* Bro Code
 * Enums
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g ver02.c && ./a.out
*/

#include <stdio.h>
#include <stdlib.h>
 
enum Status{
    SUCCESS,    // 0
    FAILURE,    // 1
    PENDING     // 2
};

void connectStatus(enum Status stat);

int main(void) {

    enum Status status = PENDING;

    connectStatus(-1);
    connectStatus(status++);
    connectStatus(status);

    return EXIT_SUCCESS;
}

void connectStatus(enum Status s){

    switch(s){
        case SUCCESS:
            printf("Connected!\n");
            break;
        case FAILURE:
            printf("Couldn't connect\n");
            break;
        case PENDING:
            printf("Waiting for connection...\n");
            break;
        default:
            printf("Unknown error!  s = %i\n" , s );
    }  

    //return status;
}
