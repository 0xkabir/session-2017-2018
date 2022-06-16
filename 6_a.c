#include<stdio.h>
int main() {
    int j, m=1, n=2;
    for(j=1; j<=2; j=j+1) {
        m = m+1;
        n = n*j;
        printf("%d\t%d\t", m, n);
    }
    return 0;
}

// Output will be 2    2    3    4