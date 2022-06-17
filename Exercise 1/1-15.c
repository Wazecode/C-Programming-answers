#include <stdio.h>

void Fahr2Cel(int a){
  printf("%4d %6.2f\n", a, 5.0*(a-32.0)/9.0);
}

int main(){
  int i;
  for(i=0; i<300; i+=20){
    Fahr2Cel(i);
  }
  return 0;
}
