#include <stdio.h>
#include <math.h>

unsigned setbits(unsigned x,unsigned p,unsigned n,unsigned y) {
    unsigned maskx = (~0 << p) | ~(~0 << (p - n));
    unsigned masky = ~0 << n;

    x = x & maskx;
    printf("%u\n",x);
    y = (y & ~masky) << (p - n);

    return x | y;
}

int main() {
    unsigned x,y;
    x = 32;
    y = 3;
    printf("%u",setbits(x,3,2,y));
    return 0;
}
