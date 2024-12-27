#include <stdio.h>

/* print Fahrenheit to celsius */

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    printf("This is a table of Fahrenheit to Celsius.\n");
    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f\t%7.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

