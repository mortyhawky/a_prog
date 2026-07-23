//  Introduction to pointers | C Programming Tutorial
//  Portfolio Courses
//  pm -S --needed gcc gdb
//  /a/prog/c/porfolio/pointers/02prog2
//  gcc -g 02prog2.c -o 02prog2
//  gdb 02prog2

#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = b = c = 0;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Sum = %d\n", a + b + c);

    return 0;
}
