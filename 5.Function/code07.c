/*Write a recursive function that calculates the sum of the
first n cubes:
    S = 1³ + 2³ + ... + n³*/

#include <stdio.h>

int sum(int n);

int main(){
    int n;
    do{
        printf("Enter the a positive number: ");
        scanf("%d", &n);
        if(n < 0)
            printf("It must be a positive number!\n");
    }while(n < 0);
    printf("Sum: %d", sum(n));
    return 0;
}

int sum(int n){
    if(n == 1)
        return n;
    return (n*n*n) + sum(n-1);
}