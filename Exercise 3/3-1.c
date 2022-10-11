#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low = 0;
    int high = n - 1;
    int mid;
    while(low < high) {
        mid = (low+high)/2;
        printf("%d\n",mid);
        if(x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("%d\n", low);
    mid = (low+high)/2;
    if(x == v[mid])
        return mid;
    else
        return -1;
}

int main() {
    int v[] = {20,30,40,50,100,200,400,800,1000};
    int x = 20;

    int n = sizeof(v)/sizeof(v[0]);

    printf("%d", binsearch(x,v,n));
    return 0;
}

