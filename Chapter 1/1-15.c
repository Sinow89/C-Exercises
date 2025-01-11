//
// Created by Christoffer Rozenbachs on 2025-01-11.
//

#include <stdio.h>
#include <stdlib.h>

/* test power function */
int power(int m, int n);

int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}