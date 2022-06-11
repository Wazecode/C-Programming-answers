#include <stdio.h>

int main(){
  printf("Helooo World!! \c");
  return 0;
}
/*
  Returns Error
  \c is not valid
1-2.c: In function ‘main’:
1-2.c:4:29: warning: unknown escape sequence: '\c'
    4 |   printf("Helooo World!! \c");
      |                             ^
*/
