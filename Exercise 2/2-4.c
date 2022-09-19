#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void squeeze_char(char s[], int c) { // for removing all occurrences of a char from a string
  int i, j;

  for(i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

void squeeze(char s[], char c[]) { // scaling the above function from char to string
  int i;
  for (i = 0; i < (int)strlen(c); i++) {
    squeeze_char(s,c[i]);
  }
}

int main() {
  char s[300] = "hello this is Shuwais Soudager and I like to eat bubble gum ice cream";
  char c[10] = "osi";

  squeeze(s, c);
  puts(s);
  return 0;
}
