#include <stdio.h>

/* print Fahrenheit to celsius */

int main()
{
    const int lower = 0;
    const int upper = 300;

    int fahr = lower;
    while (fahr <= upper) {
        const int step = 20;
        int celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
