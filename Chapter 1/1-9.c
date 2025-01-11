    //
// Created by chris on 2025-01-04.
//

#include <stdio.h>
#include <stdlib.h>

/* count lines in input */
int main()
{
    int c, last;
    last = 0;  // Keeps track of the last character

    while ((c = getchar()) != EOF)
    {
        // If the current character is not a blank or if the last character was not a blank, print it
        if (c != ' ' || last != ' ')
        {
            putchar(c);
        }
        last = c;  // Update the last character
    }
}