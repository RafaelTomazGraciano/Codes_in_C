/*Considering the athlete structure from the previous exercise, write a
program that reads a binary file containing the data of five athletes.
Calculate and display the name of the tallest and oldest athlete.*/

#include <stdio.h>
#include <string.h>

struct athletes
{
    char name[50];
    char sport[50];
    int age;
    float height;
};

struct athletet
{
    char name[50];
    char sport[50];
    int age;
    float height;
};

struct athleteo
{
    char name[50];
    char sport[50];
    int age;
    float height;
};

int main(){
    struct athletes athlete;
    struct athletet tallest = {"", "", 0, 0.0};
    struct athleteo oldest = {"", "", 0, 0.0};
    FILE *arc;
    arc = fopen("Archive9(athlete).bin", "rb");
    if (arc == NULL) {
        printf("Error opening file");
        return 1;
    }
    while(fscanf(arc, "%s | %s | %d | %f", athlete.name, athlete.sport, &athlete.age, &athlete.height) == 4){
        if(athlete.height > tallest.height){
            strcpy(tallest.name, athlete.name);
            strcpy(tallest.sport, athlete.sport);
            tallest.age = athlete.age;
            tallest.height = athlete.height;
        }
        if(athlete.age > tallest.age){
            strcpy(oldest.name, athlete.name);
            strcpy(oldest.sport, athlete.sport);
            oldest.age = athlete.age;
            oldest.height = athlete.height;
        }
    }
    printf("Tallest athlete\n");
    printf("Name: %s\n", tallest.name);
    printf("Sport: %s\n", tallest.sport);
    printf("Age: %d\n", tallest.age);
    printf("Height: %.2f\n", tallest.height);
    printf("\nOldest athlete\n");
    printf("Name: %s\n", oldest.name);
    printf("Sport: %s\n", oldest.sport);
    printf("Age: %d\n", oldest.age);
    printf("Height: %.2f\n", oldest.height);
    fclose(arc);
    return 0;
}