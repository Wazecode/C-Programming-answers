#include<stdio.h>

void itoa(int n, char a[], int w);

int main() {
    
    int n = 2343;
    char a[20];
    
    itoa(n, a, 6);
    itoa(n, a, 3);


}

void itoa(int n, char a[], int w) {
    a[w--] = '\0';

    do{
        a[w--] = n%10 + '0';
    }while((n /= 10) > 0 && w >= 0);

    while(w >= 0) {
        a[w--] = ' ';
    }
    
    printf("%s\n", a);
}
