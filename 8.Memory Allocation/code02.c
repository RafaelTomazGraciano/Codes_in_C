/*Write a program that dynamically allocates an array of integers.
The dimensions of the matrix must be read from the user. Then write
a function that receives a value and returns 1, if the value is in the array,
or return 0 otherwise.*/

#include <stdio.h>
#include <stdlib.h>

int search(int **p, int number, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(number == p[i][j])
                return 1;
        }
    }
    return 0;
}

 int main(){
    int n, number;
    printf("Enter the value of the dimension of the matrix: ");
    scanf("%d", &n);
    int **p = (int **) malloc(n * sizeof(int *));
    if(p == NULL){
        printf("Error: insuficient memory");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        p[i] = (int *) malloc(n * sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter the value at position %d %d: ",i,j);
            scanf("%d", &p[i][j]);
        }
    }
    printf("Enter a value: ");
    scanf("%d", &number);
    if(search(p, number, n))
        printf("The number is present on the matrix!");
    else
        printf("The number isn't present on the matrix");
    free(p);
    return 0;
 }