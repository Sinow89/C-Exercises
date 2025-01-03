//
// Created by chris on 2025-01-03.
//

#include <stdio.h>
/* copy input to output; 2nd version */
int main()
{
    int d = EOF;
    printf("%d", d);
    {
        int c;
        while ((c = getchar()) != EOF)
            putchar(c);
        return printf("%d", c);

        if (EOF == 2) {
            printf(0);
        }
    }
}