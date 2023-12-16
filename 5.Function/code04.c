/*Write a function that takes an array of 10 elements and
return your sum.*/

#include <stdio.h>

int sum(int *array);

int main(){
    int array[10];
    for(int i = 0; i < 10; i++){
        printf("Enter the value of the position %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("Sum: %d", sum(&array));
    return 0;
}

int sum(int *array){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += array[i];
    }    
    return sum;
}