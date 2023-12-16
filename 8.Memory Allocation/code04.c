/*Write a program that reads an integer N and creates an allocated array
dynamically containing N rows and N columns. This matrix must contain the
value 1 on the main diagonal, value 2 on elements above the diagonal
main and the value 0 in the elements below the main diagonal.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the value of the dimension of the matrix: ");
    scanf("%d", &n);
    int **matrix = (int **) malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++)
        matrix[i] = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                matrix[i][j] = 1;
            }
            if(j > i){
                matrix[i][j] = 2;
            }
            if(j < i){
                matrix[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j = 0; j < n; j++){
            printf("%d  ", matrix[i][j]);
        }
    }
    return 0;
}