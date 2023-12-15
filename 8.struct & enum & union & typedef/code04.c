/*Create an enumeration representing the days of the week. Now write
a program that reads an integer value from the keyboard and displays the day of the week
corresponding.*/

#include <stdio.h>

enum semana {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){
    const char *dayofweek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    enum semana day;
    int n;
    printf("Enter a number between 0 and 6, each number respresents a week day: ");
    scanf("%d", &n);
    day = (enum semana)n;
    printf("Chosen day: %s", dayofweek[day]);
    return 0;
}