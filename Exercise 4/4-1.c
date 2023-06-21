#include<stdio.h>

int strrindex(char s[], char t[]);

int main() {
    
    char s[] = "Ah Love! could you and I with Fate conspire";
    char t[] = "ou";

    int pos = strrindex(s, t);

    printf("%d", pos);

    return 0;
}

int strrindex(char s[], char t[]) {
    int i, j, k, pos = -1;

    for(i = 0; s[i] != '\0'; i++) {

        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);

        if(k > 0 && t[k] == '\0')
            pos = i;
    }
    
    return pos;
}