/*Write a program to print a histogram of the frequencies of different characters in its input*/
#include <stdio.h>
int main(){
  int n[24];
  int c,i,j;

  printf("Only small letters \nPress \\ and then enter to quit\n");
  for(i=0; i<24; i++){
    n[i]=0;
  }

  while((c=getchar()) != EOF){
    if(c>='a' && c<='z')
      n[c-'a']++;
    else if(c == '\\')
      break;
  }

  for (i = 0; i < 24; i++) {
    printf("%3c-> ",'a'+i);
    for(j=0; j<n[i]; j++){
      printf("#");
    }
    printf("\n");
  }
}
