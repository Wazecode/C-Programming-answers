/*remove extra tabs and blanks */
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
    if (c == '\t')
      line[len-1] = ' ';

    if (line[len - 2] == ' ' && line[len - 1] == ' ') {
      len--;
    }

    if (line[len-1] == '\n') {
      if (len == 1) {
        break;
      }
      line[len] = '\0';
      printf("%s",line);
      len = 0;
    }
  }
}
