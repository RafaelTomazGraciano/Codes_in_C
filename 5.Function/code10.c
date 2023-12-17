/*Write a recursive function from the sequence
of Fibonacci.*/

#include <stdio.h>

int Fibonacci(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d number of Fibonacci Sequece: %d", n, Fibonacci(n));
    return 0;
}

int Fibonacci(int n){
    if(n == 0 || n == 1)
        return n;
    return Fibonacci(n-1) + Fibonacci(n-2);
}