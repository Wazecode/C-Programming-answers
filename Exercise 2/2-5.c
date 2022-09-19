#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check_char_in_str(char s[], int c, int n) {
    if(s[n] == '\0')
        return 0;
    return s[n] == c || check_char_in_str(s,c,n+1);
}

int first_location(char s[], char c[]) { // for removing all occurrences of a char from a string
  int i;

  for(i = 0; s[i] != '\0'; i++)
    if (check_char_in_str(c,s[i],0))
        return i;
  return 0;
}


int main() {
  char s[300] = "hello this is Shuwais Soudager and I like to eat bubble gum ice cream";
  char c[10] = "osi";

  int i = first_location(s, c);
  printf("%d\n",i);
  return 0;
}
