/* Revise the main ... */
/* Didnt understand the question properly
  this code dosen't work */
#include <stdio.h>
#define ARRAY_SIZE 1000

void reset();

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
      line[len] = '\0';
      if (len > 79) printf("%s",line);
      len = 0;
    }
  }
}
