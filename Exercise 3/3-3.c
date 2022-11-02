// Write a function expand(s1, s2) that expands shorthand notation like a-z to abc...xyz

#include <stdio.h>
#include <string.h>

const int MAX_ARRAY_SIZE = 100;

int checkIfSameType(char a, char b) {
    return (('a' <= a ) && ( a <= 'z') && ('a' <= b) && ( b <= 'z')) ||
        (('A' <= a ) && ( a <= 'Z') && ('A' <= b) && ( b <= 'Z')) ||
        (('0' <= a ) && ( a <= '9') && ('0' <= b) && ( b <= '9'));
}

void expand(char *s1, char *s2) {
    int i, j, k;
    char temp[MAX_ARRAY_SIZE];

    // Removing the '-'
    for(i = 0,j = 0; i < (int)strlen(s1); i++) {
        if(s1[i] != '-'){
            temp[j] = s1[i];
            j++;
        }
    }
    strcpy(s1,temp);
    puts(s1);

    // Main logic
    j = 0;
    for (i = 0; i < (int)strlen(s1); i++) {
        if(!checkIfSameType(s1[i], s1[i + 1]))
            continue;

        for(k = s1[i]; k <= s1[i + 1]; k++) {
            s2[j++] = k;
        }
    }
    s2[j] = '\0';

    puts(s2);
}

int main() {
    char a[MAX_ARRAY_SIZE];
    char b[MAX_ARRAY_SIZE];

    printf("Enter the input to expand: ");
    scanf("%s", a);
    expand(a,b);


    return 0;
}
