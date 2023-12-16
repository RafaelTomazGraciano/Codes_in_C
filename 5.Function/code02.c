/*Write a function to calculate the volume of a sphere
    V = 4/3 * π * r³
where π = 3.1414592 value of radius r must be
passed by parameter.*/

#include <stdio.h>

#define pi 3.1414592

float volume(float r);

int main(){
    float r;
    printf("Enter the radius value: ");
    scanf("%f", &r);
    printf("Volume: %.2f", volume(r));
    return 0;
}

float volume(float r){
    return 4/3 * pi * r*r*r;
}