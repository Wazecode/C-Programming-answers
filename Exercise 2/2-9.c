// bit counter
#include <stdio.h>
#include <math.h>

void decToBinary(int n);
int bitcount(unsigned x);

int main() {
    unsigned x = 9777;
    decToBinary(x);
    printf("%u",bitcount(x));

    return 0;
}


int bitcount(unsigned x) {
    int b;
    for(b = 0; x != 0; x &= (x-1)) {
        b++;
        decToBinary(x);
    }
    return b;
}

void decToBinary(int n)
{
	while (n > 0) {
		printf("%d",n % 2);
		n = n / 2;
	}
    printf("\n");
}
