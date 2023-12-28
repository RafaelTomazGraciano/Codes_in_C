/*Create a structure representing an athlete. This structure must contain the
athlete's name, sport, age and height. Now write a program
that reads data from five athletes and stores it in a binary file.*/

#include <stdio.h>

struct athletes
{
    char name[50];
    char sport[50];
    int age;
    float height;
};


int main(){
    struct athletes athlete;
    FILE *arc;
    for(int i = 0; i < 5; i++){
        arc = fopen("Archive9(athlete).bin", "ab");
        printf("Enter the name of the athlete: ");
        scanf("%49s", athlete.name);
        setbuf(stdin, NULL);
        printf("Enter the name of the sport: ");
        scanf("%49s", athlete.sport);
        setbuf(stdin, NULL);
        printf("Enter the age of the athlete: ");
        scanf("%d", &athlete.age);
        printf("Enter the height of the athlete: ");
        scanf("%f", &athlete.height);
        setbuf(stdin,NULL);
        fputs(athlete.name, arc);
        fprintf(arc, "%s", "   |   ");
        fputs(athlete.sport, arc);
        fprintf(arc, "%s", "   |   ");
        fprintf(arc, "%d", athlete.age);
        fprintf(arc, "%s", "   |   ");
        fprintf(arc, "%.2f", athlete.height);
        fprintf(arc, "%s", "\n");
        fclose(arc);
    }
    return 0;
}