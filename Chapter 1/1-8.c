//
// Created by chris on 2025-01-04.
//

/* count characters in input; 1st version */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
    system("pause");  // This keeps the window open
    return 0;
}
