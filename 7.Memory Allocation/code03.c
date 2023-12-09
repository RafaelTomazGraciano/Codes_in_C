/*Write a function that returns the pointer to a vector of N elements
dynamically allocated integers. The array must be filled with values
from 0 to N − 1.*/

#include <stdio.h>
#include <stdlib.h>

int *vector(int n){
    int *p = (int *) malloc(n * sizeof(int));
    if(p == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        p[i] = i;
    }
    return p;
}

int main(){
    int n;
    printf("Enter the value of the dimension of the vector: ");
    scanf("%d", &n);
    int *v = vector(n);
    for(int i = 0; i < n; i++)
        printf("%d\n", v[i]);
    return 0;
}