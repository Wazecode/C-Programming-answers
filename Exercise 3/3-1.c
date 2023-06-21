#include <stdio.h>
#include <unistd.h>

int binsearch(int x, int v[], int n) {
    int low = 0;
    int high = n - 1; int mid;
    do{
        mid = (low+high)/2;
        if(x > v[mid])
            low = mid;
        else
            high = mid;
        
        sleep(1);
        printf("%d %d\n", low, high);

    } while(x != v[mid]);
    return mid;
}

int main() {
    int v[] = {20,30,40,50,100,200,400,800,1000};
    int x = 21;

    int n = sizeof(v)/sizeof(v[0]);

    printf("%d", binsearch(x,v,n));
    return 0;
}
