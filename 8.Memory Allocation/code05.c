/*Write a function that takes as a parameter an matrix A containing
N rows and N columns, and a vector B of size N. The function must return
the pointer to a dynamically allocated C vector of size N, where
C is the product of matrix A and vector B.*/

#include <stdio.h>
#include <stdlib.h>

int *vectorc(int **a, int *b, int n){
    int *C = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[i][j];
        }
        C[i] = sum * b[i];
    }
    return C;
}

int main(){
    int N;
    printf("Enter the value of the dimension of matrix and the vector: ");
    scanf("%d", &N);
    setbuf(stdin, NULL);
    int **A = (int **) malloc(N * sizeof(int *));
    int *B = (int *) malloc(N * sizeof(int));
    for(int i = 0 ; i < N; i++){
        A[i] = (int *) malloc(N * sizeof(int));
    }
    printf("\nFilling in matrix A\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Enter the value for matrix A in position %d %d: ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nFilling in vector B\n");
    for(int i = 0; i < N; i++){
        printf("Enter the value for vector B in position %d: ",i);
        scanf("%d", &B[i]);
        }
    int *C = vectorc(A, B, N);
    for(int i = 0; i < N; i++){
        printf("%d\n", C[i]);
    }
    free(A);
    free(B);
    free(C);
    return 0;
}