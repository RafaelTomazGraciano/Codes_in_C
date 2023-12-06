/*Calculate and print on the screen a matrix of size 10 × 10, in which your
elements are of the form:

          | 2i+7j-2 if i<j
A[i][j] = | 3i²-1 if i=j
          | 4i³+5j²+1 if i>j
*/

#include <stdio.h>
#include <math.h>

int main(){
    int matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i < j){
                matrix[i][j] = 2*i+7*j-2;
            }
            if(i == j){
                matrix[i][j] = 3*pow(i,2)-1;
            }
            if(i > j){
                matrix[i][j] = 4*pow(i,3)+5*pow(j,2)+1;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}