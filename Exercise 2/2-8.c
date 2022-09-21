#include <stdio.h>
#include <math.h>

unsigned shift_pos(unsigned x, int n, int new_n) {
    unsigned p = pow(2,n);
    return (~(p & x) << (new_n - n)) & x;
}

unsigned rightrot(unsigned x, int n) {
    unsigned mask = (~0 << n);
    unsigned part = x & ~mask;

    return 0;
}

int main() {

    unsigned x = 16;
    printf("%u\n",shift_pos(x,5,6));

    return 0;
}
