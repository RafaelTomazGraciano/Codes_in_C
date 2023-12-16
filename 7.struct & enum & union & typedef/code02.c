/*Create a structure representing an athlete. This structure must contain the
athlete's name, sport, age and height. Now write a program
to read the data of five athletes. Calculate and display the names of the
tallest, from the oldest, and in addition to placing the athletes in order, 
from youngest to oldest.*/

#include <stdio.h>

struct athlete
{
    char name[50];
    char sport[30];
    int age;
    float height;
};

typedef struct athlete ath;

int main(){
    ath athletes[5];
    int oldest = 0, age[5], aux;
    float tallest = 0; 
    for(int i = 0; i < 5; i++){
        printf("Enter the name of the athlete: ");
        fgets(athletes[i].name, 50, stdin);
        setbuf(stdin, NULL);
        printf("Enter the sport of the athlete: ");
        fgets(athletes[i].sport, 30, stdin);
        setbuf(stdin, NULL);
        printf("Enter the age of the athlete: ");
        scanf("%d", &athletes[i].age);
        printf("Enter the height of the athlete: ");
        scanf("%f", &athletes[i].height);
        setbuf(stdin, NULL);
        if(oldest < athletes[i].age)
            oldest = athletes[i].age;
        if(tallest < athletes[i].height)
            tallest = athletes[i].height;
    }
    for(int i = 0;i < 5; i++){
        for(int j = i; j < 5; j++){
            if(athletes[i].age > athletes[j].age){
                aux = athletes[i].age;
                athletes[i].age = athletes[j].age;
                athletes[j].age = aux;
            }
        }
    }
    printf("\nOldest: %d", oldest);
    printf("\nTallest: %.2f", tallest);
    printf("\nAthlestes from youngest to oldest");
    for(int i = 0; i < 5; i++)
        printf("\n%d", athletes[i].age);
    return 0;
}