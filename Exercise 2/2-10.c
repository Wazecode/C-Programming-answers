#include <stdio.h>
#include <string.h>

void lower(char str[]);

int main() {
    char str[] = "HeLLo WoRlD";

    lower(str);


}

void lower(char str[]) {
    int i;
    for(i = 0; i < (int)strlen(str); i++ ) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    printf("%s", str);
}
