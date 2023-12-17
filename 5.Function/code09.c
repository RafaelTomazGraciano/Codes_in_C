/*Write a recursive function that takes an integer
positive n. Calculate and return your factorial n!:*/

#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial: %d", factorial(n));
    return 0;
}

int factorial(int n){
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}