/*Create a union containing two different base types. Now write a
program that initializes one of the types of this union and displays the value on the screen
of the other type.*/

#include <stdio.h>

union type{
    int x;
    char y;
};

int main(){
    union type t;
    printf("Enter a number for X: ");
    scanf("%d", &t.x);
    printf("X: %d\n", t.x);
    printf("Y: %d\n", t.y); 
    //This happens because the memory space is shared.
    return 0;
}