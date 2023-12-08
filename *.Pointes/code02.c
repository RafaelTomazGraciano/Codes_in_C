/*Consider the following declaration: int a,*b,**c,***d. Write a program
that reads the variable a and calculates and displays the double, triple and quadruple of that
value using only the pointers b, c and d. Pointer b must be used
to calculate double, c, triple, and d, quadruple*/

#include <stdio.h>

int main(){
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Double: %d\n", 2* *b);
    printf("Triple: %d\n", 3* **c);
    printf("Quadruple: %d", 4* ***d);
    return 0;
}