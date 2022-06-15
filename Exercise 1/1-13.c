#include <stdio.h>

int main(){
  int n[50];
  int c,i=0,j;

  for(j=0; j<50; j++){
    n[j] = -1;
  }

  while ((c=getchar()) != EOF) {
    n[i]++;
    if (c == ' ' || c == '\n') {
      printf("%d-> ",i+1);
      for(j=0;j<n[i];j++){
        printf("#");
      }
      printf("\n");
      i++;
    }
  }
}
