#include <stdio.h>

int temp_converter(int lower, int upper, int step);

int main() {
  float lower, upper, step;

  lower = 0;  /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  printf("Celsius to Fahrenheit Table\n");
  temp_converter(lower, upper, step);
}

int temp_converter(int lower, int upper, int step) {
  float fahr, celsius;

  fahr = lower;
  while(fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3.0f\t%6.2f\n", fahr, celsius);
    fahr += step;
  }
}
