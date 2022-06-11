#include <stdio.h>

int main(){
  float cel , fahr;
  int lower, upper, step;

  lower = -100;
  upper = 200;
  step = 20;

  cel = lower;

  printf("CELCIUS TO FAHRENHEIT\n");
  while (cel<upper) {
    fahr = (9.0/5.0 * cel) + 32;
    printf("%6.0f %4.2f\n", cel, fahr);
    cel = cel + step;
  }

  return 0;
}
