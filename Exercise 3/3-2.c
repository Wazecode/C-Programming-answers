#include<stdio.h>

void escape( char s[], char t[]);
void escape_rev( char s[], char t[]);

int main() {
        char t[100] = "hello this is shuwais\n I am coding in vim \n\t\t It's the best text editor\n\n\t\t\t ><";
        char s[100];
        escape(s,t);
        escape_rev(s,t);
        return 0;
}

void escape( char s[], char t[]) {
        int i, gap = 0;
        for(i = 0;i < strlen(t); i++) {
                switch(t[i]) {
                        case '\t': s[i + gap] = '\\';
                                   gap++;
                                   s[i + gap] = 't';
                                   break;

                        case '\n': s[i + gap] = '\\';
                                   gap++;
                                   s[i + gap] = 'n';
                                   break;

                        default: s[i + gap] = t[i];
                }
        }

        printf("%s\n", s);
}
void escape_rev( char s[], char t[]) {
        int i, gap = 0;
        for(i = 0;i < strlen(t); i++) {
                switch(t[i]) {
                        case '\\': if(t[i - gap + 1] == 't') 
                                           s[i - gap] = '\t';
                                   else if(t[i - gap + 1] == 'n')
                                           s[i - gap + 1] = '\n';

                                   gap++;
                                   break;

                        default: s[i - gap] = t[i];
                }
        }

        printf("%s\n", s);
}

