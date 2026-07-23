//  Introduction to pointers | C Programming Tutorial
//  Portfolio Courses
//  pm -S --needed gcc gdb
//  /a/prog/c/porfolio/pointers/01intro.c
//  gcc -g 01intro.c -o 01intro
//  gdb 01intro

#include <stdio.h>

int main(void)
{
    // an integer variable
    int  b;
    b       =  42;
    // a pointer to an integer variable
    int *a;
    a       = NULL;
    a       =  &b;


    printf("value of  b: %d\n",  b);
    printf("addr  of &b: %p\n", &b);
    printf("value of  a: %p\n",  a);

    *a = 50;

    printf("value of  b: %d\n",  b);
    printf("addr  of &b: %p\n", &b);
    printf("value of  a: %p\n",  a);

    return 0;
}
