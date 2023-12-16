/*Write a function that takes two values ​​as parameters
integers x and y and calculate and return the result of x^y to the
main program. Do not use any ready-to-use functions
that.*/

#include <stdio.h>

int calculate(int x, int y);

int main(){
    int x, y;
    printf("Enter the X value: ");
    scanf("%d", &x);
    printf("Enter the Y value: ");
    scanf("%d", &y);
    printf("Result: %d", calculate(x,y));
    return 0;
}

int calculate(int x, int y){
    int result = 1;
    if(y == 0){
        return 1;
    }
    if(y == 1){
        return x;
    }
    for(int i = y; i > 0; i--){
        result *= x;
    }
    return result;
}