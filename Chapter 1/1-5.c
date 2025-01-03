//
// Created by chris on 2024-12-27.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr+STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/*This is fo the oppsite order, from 300 to 0.*/
// int main()
// {
//     int fahr;
//
//     for (fahr = UPPER; fahr > LOWER; fahr = fahr-STEP)
//         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
// }