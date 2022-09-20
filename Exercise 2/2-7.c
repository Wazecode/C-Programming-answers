#include <stdio.h>

// For help in debugging
//
/* void convertToBinary(unsigned a) */
/* { */
/*     /\* step 1 *\/ */
/*     if (a > 1) */
/*         convertToBinary(a / 2); */

/*     /\* step 2 *\/ */
/*     printf("%d", a % 2); */
/* } */

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = (~0 << p) | ~(~0 << (p - n));
    unsigned inv_x = ~x & ~mask;
    x = x & mask;

    return x | inv_x;
}

int main() {
    unsigned x;
    x = 27;
    printf("%u\n",invert(x,4,3));

    return 0;
}
