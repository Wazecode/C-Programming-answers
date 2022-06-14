/*Write a program to count blanks, tabs and newlines*/
#include<stdio.h>

int main(){

        printf("Press \\ and then Enter to quit\n");

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
