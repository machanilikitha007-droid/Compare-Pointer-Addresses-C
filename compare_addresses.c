#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int *p1 = &a;
    int *p2 = &b;

    if (p1 == p2)
        printf("Both pointers have the same address.\n");
    else
        printf("The pointers have different addresses.\n");

    return 0;
}
