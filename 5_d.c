#include<stdio.h>

int main(){
    // section i
    int x, y, z;
    x=10;
    for(y=10; y!=x; ++y){
        printf("%d", y);
    }
    // no output will be printed.

    // section ii
    x=7, y=20, z=20;
    x=y=z;
    printf("%d", x);
    // Output will be 20.

    return 0;
}