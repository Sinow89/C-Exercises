//
// Created by Christoffer Rozenbachs on 2025-01-11.
//

#include <stdio.h>

/* test power function */
int fahr();

int main()
{
    fahr();
    return 0;
}

int fahr()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr+20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}