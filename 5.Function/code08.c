/*Create a recursive function that returns the average of the elements
of a vector of integers.*/

#include <stdio.h>

float average(int array[], int n);

int main(){
    int n;
    printf("Enter a number for the array: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++){
        printf("Enter a value to the position %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("Average: %.2f", average(array, n));
    return 0;
}

float average(int array[], int n){
    if(n == 0) {
        return 0;
    }
    return (array[n - 1] + average(array, n - 1) * (n - 1)) / n;
}