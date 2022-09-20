#include <stdio.h>

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 <<n);
}

int main() {
    int x = 7592;
    printf("%d\n",getbits(x,5,3));
    return 0;
}
