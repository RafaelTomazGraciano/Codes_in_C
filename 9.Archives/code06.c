/*A text file has an array of integer values ​​inside it. You
first two numbers are the dimensions of the matrix (rows and columns),
while the rest of the numbers are the values ​​of each element of the
headquarters. Write a function that takes the file name and returns the
pointer to a dynamically allocated array containing the values
read from the file.*/

#include <stdio.h>
#include <stdlib.h>

int **matrix(int *lines, int *columns);

int main(){
    int lines, columns;
    int **mat = matrix(&lines, &columns);
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    free(mat);
    return 0;
}

int **matrix(int *lines, int *columns){
    FILE *arc;
    int **p;
    arc = fopen("Archive7(matrix).txt", "r");
    if(arc == NULL){
        printf("Error opening file");
        exit(1);
    }
    fscanf(arc, "%d", lines);
    fscanf(arc, "%d", columns);
    p = (int**) malloc(*lines * sizeof(int *));
    if(p == NULL){
        printf("Error of memory allocation");
        exit(1);
    }
    for(int i = 0; i < *lines; i++){
        p[i] = (int *) malloc(*columns * sizeof(int));
        if(p[i] == NULL){
            printf("Error of memory allocation");
            exit(1);
        }
    }
    for(int i = 0; i < *lines; i++){
            for(int j = 0; j < *columns; j++){
                fscanf(arc, "%d", &p[i][j]);
            }
        }
    fclose(arc);
    return p;
}