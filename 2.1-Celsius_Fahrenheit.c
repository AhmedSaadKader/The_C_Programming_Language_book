#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300 */

int main ()
{
  float celsius, fahr;
  float lower, upper, step;

  lower = 0; /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  printf("Fahrenheit to Celsius Table\n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0 * celsius) + 32;
    printf("%3.0f\t%6.2f\n", celsius, fahr);
    celsius += step;
  }
}
