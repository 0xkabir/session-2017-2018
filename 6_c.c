#include<stdio.h>
#include<math.h>

int main(){
    int sq, cube;
    for(int i=1; i<=20; i++) {
        sq = pow(i,2);
        cube = pow(i, 3);
        printf("%d\t%d\t%d\n", i, sq, cube);
    }

    return 0;
}