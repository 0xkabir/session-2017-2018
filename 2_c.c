#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the values of a, b and c:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b && a<c){
        printf("The smallest number is %d", a);
    }

    else if(b<a && c<a){
        printf("The smallest number is %d", c);
    }

    else{
        printf("The smallest number is %d", c);
    }

    return 0;

}