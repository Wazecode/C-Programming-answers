#include <stdio.h>
#include <math.h>

unsigned shift_pos(unsigned x, int n, int new_n) {
    unsigned p = pow(2,n-1);
    if(n < new_n)
        return ((p & x) << (new_n - n));
    else
        return ((p & x) >> (n - new_n));
        
}

unsigned rot(unsigned x, int l) {
        int i = 0;
        unsigned rot_x = 0;
        for(i = 0; i <= l; i++) 
                rot_x = rot_x | shift_pos(x, i, l-i+1);
        return rot_x;
}

unsigned rightrot(unsigned x, int n) {
    unsigned mask = (~0 << n);
    unsigned part = x & ~mask;

    unsigned rot_part = rot(part, n);

    return (x&mask)|rot_part;
}

int main() {

    unsigned x = 13;
    int n;
    scanf("%u%d",&x,&n);
    printf("%u\n",x >> n);
    printf("%u\n",shift_pos(x, 4, n));
    printf("%u\n",rot(x,n));
    printf("%u\n",rightrot(x, n));

    return 0;
}
