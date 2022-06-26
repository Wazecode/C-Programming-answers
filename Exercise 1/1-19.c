/*reverse the given string */
#include <stdio.h>
#define ARRAY_SIZE 1000

void revprint(char l[], int n);

int main(){
  int c;
  int len = 0;
  char line[ARRAY_SIZE];

  while ((c = getchar()) != EOF) {
    if (len > ARRAY_SIZE-2) {
      printf("ERROR characters exceded 1000 letters");
    }

    line[len++] = c;

    if (line[len-1] == '\n') {
      if (len == 1) {
        break;
      }
      line[len] = '\0';
      revprint(line,len);
      len = 0;
    }
  }
}

void revprint(char l[], int n){
  int i;
  for (i = n-2; i >= 0; i--) {
    putchar(l[i]);
  }
  putchar('\n');
}
