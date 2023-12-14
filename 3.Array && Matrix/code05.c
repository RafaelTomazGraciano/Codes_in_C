/*Write a program that allows the user to enter a matrix of
3×3 size of integers. Then calculate a vector containing
three positions, where each position must store the sum of the numbers
of each column of the matrix. Display this array on the screen.*/

#include <stdio.h>

int main(){
    int matrix[3][3], vector[3] = {0,0,0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the value of the matrix in the position %d %d: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vector[i] += matrix[j][i];
        }
    }
    printf("Vector\n");
    for(int i =0; i < 3; i++){
        printf("%d  ", vector[i]);
    }
    return 0;
}