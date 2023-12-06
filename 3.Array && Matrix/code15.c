/*Read an array with 10 float numbers. Then, sort the array in ascending order*/

#include <stdio.h>

int main(){
    float array[10];
    int aux;
    for(int i = 0; i < 10; i++){
        printf("Enter the value of the array element on the position %d: ", i);
        scanf("%f", &array[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(array[i] > array[j]){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    printf("The number arranged is ascending order are given below.\n");
    for(int i = 0; i < 10; i++){
        printf("%.2f\n", array[i]);
    }
    return 0;
}