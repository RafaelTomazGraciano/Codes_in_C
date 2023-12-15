/*Create a structure to represent the coordinates of a point on the plane
(X and Y positions). Then declare and read two points from the keyboard 
and display the distance between them.*/

#include <stdio.h>
#include <math.h>

struct coordinates
{
    int x;
    int y;
};

typedef struct coordinates coord;

int main(){
    coord c[1];
    float distance;
    for(int i = 0; i <= 1; i++){
        printf("Enter the value of X at position %d: ",i);
        scanf("%d", &c[i].x);
        printf("Enter the value of Y at position %d: ",i);
        scanf("%d", &c[i].y);
    }
    distance = sqrt(pow((c[1].x - c[0].x),2) + pow((c[1].y - c[0].y), 2));
    printf("The distance between the two points is: %.2f", distance);
    return 0;
}
