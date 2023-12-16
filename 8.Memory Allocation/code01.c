/*Write a program that shows the size in bytes that each type of
data occupies in memory: char, int, float, double.*/

#include <stdio.h>

int main(){
    printf("Char: %ld\n", sizeof(char));
    printf("Int: %ld\n", sizeof(int));
    printf("Float: %ld\n", sizeof(float));
    printf("Double: %ld\n", sizeof(double));
    return 0;
}