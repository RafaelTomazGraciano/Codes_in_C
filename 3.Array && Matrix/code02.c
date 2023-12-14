/*Write a program that calculates the standard deviation of an array containing
n numbers
d = sqrt(∑(A[i]-m)^2/n)
where m is the average of this array. 
Consider n = 10. The array v must be read from the keyboard.*/

#include <stdio.h>
#include <math.h>

int main(){
    float A[10], m, sum = 0, d, intermediate_value = 0;
    for(int i = 0; i < 10; i++){
        printf("Enter the value of the array at the position %d: ", i);
        scanf("%f", &A[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += A[i];
    }
    m = sum/10;
    for(int i = 0; i < 10; i++){
        intermediate_value += pow(A[i]-m, 2);
    }
    d = sqrt(intermediate_value/10);
    printf("The standard deviation of the array is %f\n", d);
    return 0;
}