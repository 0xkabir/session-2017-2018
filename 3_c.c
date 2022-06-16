#include<stdio.h>

int main() {
    int number, flag=0;
    printf("Enter a number to check prime or not: ");
    scanf("%d", &number);
    for(int i=2; i<number; i++) {
        if(number%i==0){
            printf("The number is not a prime number.");
            flag=1;
            break;
        }
    }
    if(flag==0) {
        printf("The number is a prime number.");
    }
    return 0;
}