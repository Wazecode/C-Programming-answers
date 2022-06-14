/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/
#include<stdio.h>

int main(){

        printf("Ctrl + c to exit the program\n");

        int nc,c;
        nc=1;

        while((c=getchar()) != EOF){
                if(!(c==' ' && nc==0)){
                        nc =1;
                        printf("%c", c);
                }

                if(c==' ')
                        nc = 0;

        }
        

        return 0;
}
