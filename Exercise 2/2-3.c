//Convert hexadecimal to int
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_LEN 50


int htoi_char(int a);
int htoi(char s[MAX_LEN]);


int main() {

  char str[MAX_LEN];

  // Take input as String
  fgets(str, MAX_LEN, stdin);

  printf("the string is %s \n and the string lenght is %d\n ", str, strlen(str));
  printf("%d\n",str[0]);
  printf("print the transalatio %d\n",htoi(str));

  printf("%d",isxdigit('h'));
  return 0;
}

int htoi(char s[MAX_LEN]) {
  int i,p = 0, ans = 0;
  for(i = strlen(s)-2; i >= 0; i--) {
    if(isxdigit(s[i])) {
      ans += htoi_char(s[i])*(int)pow((double)10, (double)p);
    } else if((s[i] == 'x' || s[i] == 'X') && i == 1 && s[i-1] == '0') {
      return ans;
    } else {
      printf("Error: Invalid Input");
      return -1;
    }
    p++;
  }
  return ans;
}

int htoi_char(int a) {
  switch(a){
    case '0': return 0; break;
    case '1': return 1; break;
    case '2': return 2; break;
    case '3': return 3; break;
    case '4': return 4; break;
    case '5': return 5; break;
    case '6': return 6; break;
    case '7': return 7; break;
    case '8': return 8; break;
    case '9': return 9; break;
    case 'a': return 10; break;
    case 'b': return 11; break;
    case 'c': return 12; break;
    case 'd': return 13; break;
    case 'e': return 14; break;
    case 'f': return 15; break;
    case 'A': return 10; break;
    case 'B': return 11; break;
    case 'C': return 12; break;
    case 'D': return 13; break;
    case 'E': return 14; break;
    case 'F': return 15; break;
    default: printf("Not a hexadecimal number\n");return 0;
  }
}
