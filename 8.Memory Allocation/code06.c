/*Write a function that takes as parameters two matrices, A and B, and
their sizes. The function must return the pointer to a C matrix, in
that C is the product of multiplying matrix A by matrix B. If
Matrix multiplication is not possible, return a null pointer.*/

#include <stdio.h>
#include <stdlib.h>

int **matrix(int x, int y);
int **mult_matrix(int lines_a, int columns_a, int lines_b, int columns_b, int **matrix_A, int **matrix_B);

int main(){
    int lines_a, columns_a, lines_b, columns_b;
    printf("Enter the quantity of lines of matrix A: ");
    scanf("%d", &lines_a);
    printf("Enter the quantity of columns of matrix A: ");
    scanf("%d", &columns_a);
    printf("Enter the quantity of lines of matrix B: ");
    scanf("%d", &lines_b);
    printf("Enter the quantity of columns of matrix B: ");
    scanf("%d", &columns_b);

    int **matrix_A = matrix(lines_a, columns_a);
    int **matrix_B = matrix(lines_b, columns_b);

    printf("\n-----------Filling Matrix A-----------\n");
    for(int i = 0; i < lines_a; i++){
        for(int j = 0; j < columns_a; j++){
            printf("Enter a value for the position %d %d: ", i,j);
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("\n-----------Filling Matrix B-----------\n");
    for(int i = 0; i < lines_b; i++){
        for(int j = 0; j < columns_b; j++){
            printf("Enter a value for the position %d %d: ", i,j);
            scanf("%d", &matrix_B[i][j]);
        }
    }
    
    int **matrix_C = mult_matrix(lines_a, columns_a, lines_b, columns_a, matrix_A, matrix_B);

    for(int i = 0; i < lines_a; i++){
        printf("\n");
        for(int j = 0; j < columns_b; j++){
            printf("%d  ", matrix_C[i][j]);
        }
    }
    free(matrix_A); 
    free(matrix_B); 
    free(matrix_C);
    return 0;
}

int **matrix(int x, int y){
    int **p = (int **) malloc(x * sizeof(int *));
    if(p == NULL){
        printf("Error: insuficient memory");
        exit(1);
    }
    for(int i = 0; i < x; i++){
        p[i] = (int *) malloc(y * sizeof(int));
    }
    return p;
}

int **mult_matrix(int lines_a, int columns_a, int lines_b, int columns_b, int **matrix_A, int **matrix_B){
    int **p, aux = 0;
    if(columns_a != lines_b){
        return NULL;
    }
    p = matrix(lines_a, columns_b);
    for(int i = 0; i < lines_a; i++){
        for(int j = 0; j < columns_b; j++){
            p[i][j] = 0;
            for(int x = 0; x < lines_b; x++){
                aux  += matrix_A[i][x] * matrix_B[x][j];
            }
            p[i][j] = aux;
            aux = 0;
        }
    } 
    return p;
}