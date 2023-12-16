/*Write a function to check whether a number is a
perfect square. A perfect square is a whole number
non-negative that can be expressed as the square of another
whole number. Examples: 1, 4, 9.*/

#include <stdio.h>

int perfect_square(int n);

int main(){
    int n;
    do{
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if(n < 0)
            printf("\nIt must be a positive number\n");
    }while(n < 0);
    
    if(perfect_square(n))
        printf("The number IS a perfect square!");
    else
        printf("The number IS NOT a perfect square!");
    return 0;
}

int perfect_square(int n){
    int square;
    for(int i = 1; i < n; i++){
        square = n % i;
        if(square * square == n)
            return 1;
    }
    return 0;
}