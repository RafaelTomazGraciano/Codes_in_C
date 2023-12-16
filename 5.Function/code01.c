/*Write a function that takes as parameters the height and radius of a circular cylinder and 
returns the volume of that cylinder. The volume of a circular cylinder is calculated using
following formula:
    V = π * r² * height
where π = 3.1414592*/

#include <stdio.h>
#define pi 3.1414592

float volume(float r, float height);

int main(){
    float r, height;
    printf("Enter the radius value: ");
    scanf("%f", &r);
    printf("Enter the height value: ");
    scanf("%f", &height);
    printf("Volume: %.2f", volume(r,height));
    return 0;
}

float volume(float r, float height){
    return pi * r * r * height;
}