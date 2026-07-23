//  Introduction to pointers | C Programming Tutorial
//  Portfolio Courses
//  pm -S --needed gcc gdb
//  /a/prog/c/porfolio/pointers/03swap.c
//  gcc -g 03swap.c -o 03swap
//  gdb 03swap

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x, y;
    x =  5;
    y = 10;

    printf("x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    // tmp_a gets the value of x=5, via the pointer a, *a=5
    int tmp_a = *a; // tmp_a = value of x 5
    // *a gets the value (*b) of y=10
    *a = *b;
    // *b gets the value 5 from tmp_a
    *b = tmp_a;
}
