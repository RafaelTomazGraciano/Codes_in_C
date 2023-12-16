/*Create a program that contains a float matrix with three rows and three
columns. Print the address of each position in this array.*/

#include <stdio.h>


int main(){
    float matrix[3][3];
    float *p = matrix;
    for(int i = 0; i < 9; i++){
        printf("Enter the value of the matrix: ");
        scanf("%f", &p[i]);
    }
    printf("\nMATRIX\n");
    for(int i = 0; i < 9; i++){
        printf("%.2f  ", *(p+i));
    }
    return 0;
}