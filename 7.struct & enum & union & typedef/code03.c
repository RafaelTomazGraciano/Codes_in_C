/*Write a program that contains a structure representing a
valid date. This structure must contain the fields day, month and year.
Then read two dates and store in that structure. Calculate and display the
number of days that passed between the two dates.*/

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

typedef struct date d;

int main(){
    d dates[2];
    int cont = 0, n;
    for(int i = 0; i < 2; i++){
        do{
            printf("Enter the day: ");
            scanf("%d", &dates[i].day);
            if(dates[i].day < 0 || dates[i].day > 31)
                printf("\nInvalid date, type again\n");
        }while(dates[i].day < 0 || dates[i].day > 31);
        do{
            printf("Enter the month: ");
            scanf("%d", &dates[i].month);
            if(dates[i].month < 0 || dates[i].month > 12)
                printf("\nInvalid date, type again\n");
        }while(dates[i].month < 0 || dates[i].month > 12);
        printf("Enter the year: ");
        scanf("%d", &dates[i].year);
    }
    if(dates[1].year > dates[0].year){
        n = dates[1].year - dates[0].year;
        cont += 365 * n;
    }
    if(dates[1].month > dates[0].month){
        n = dates[1].month - dates[0].month;
        cont += 30 * n;
    }
    if(dates[1].day > dates[0].day){
        n = dates[1].day - dates[0].day;
        cont += n;
    }
    printf("\nThe difference between the dates in days is: %d", cont);
    return 0;
}
