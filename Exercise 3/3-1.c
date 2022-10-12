#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low = 0;
    int high = n - 1; int mid;
    while(low != high) {
        mid = (low+high)/2;
        if(x > v[mid])
            low = mid + 1;
        else
            high = mid;

    }
    mid = (low+high)/2;
    if(x == v[low])
        return low;
    return -1;
}

int main() {
    int v[] = {20,30,40,50,100,200,400,800,1000};
    int x = 100;

    int n = sizeof(v)/sizeof(v[0]);

    printf("%d", binsearch(x,v,n));
    return 0;
}
