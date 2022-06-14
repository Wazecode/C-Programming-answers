/*Write a program to replcae \t and \b with \\*/
#include<stdio.h>

int main(){

        printf("Ctrl + c to exit the program\n");

        int c;

        while((c=getchar()) != EOF){
                if(c=='\t' || c=='\b'){
                        printf("\\");
                }else{
                        printf("%c",c);
                }
        }
        

        return 0;
}

/* This program dosen't work properly while counting backspaces
 Maybe this is problem with the terminal emulator being used*/
