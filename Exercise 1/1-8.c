/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/
#include<stdio.h>

int main(){

        int nc,c;

        nc=0;

        while((c=getchar()) != EOF){
                if(c == '\\')
                        break;
                if(c==' ' || c=='\t' || c=='\n')
                        ++nc;

        }
        printf("%d\n", nc);
        

        return 0;
}
