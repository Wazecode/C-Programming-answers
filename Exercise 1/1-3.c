/*Modify the temperature conversion program to print a heading above the table*/
#include <stdio.h>

int main(){

  float fahr, cel;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("FAHRENHEIT TO CELCIUS TABLE\n");

  while(fahr <= upper){
    cel = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, cel);
    fahr = fahr + step;
  }

  return 0;
}
