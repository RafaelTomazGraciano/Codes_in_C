/*Create an enumeration representing the months of the year. 
Now write a program that reads an integer value from the keyboard 
and displays the name of the corresponding month and how many days it has.*/

#include <stdio.h>

enum month {January, February, March, April, May, June, July, August, September, October, November, December};

int main(){
    enum month m;
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;
    do{
       printf("Enter a number between 0 and 11, each number respresents a month: ");
        scanf("%d", &n); 
        if(n < 0 || n > 11)
            printf("\nIncorrect number\n");
    }while(n < 0 || n > 11);
    m = (enum month)n;
    printf("Chosen month: %s", months[m]);
    if(m == 0 || m == 2 || m == 4 || m == 6 || m == 7 || m == 9 || m == 11)
        printf("\nQuantity of days: 31");
    else if(m == 1)
        printf("\nQuantity of days: 28");
    else
        printf("\nQuantity of days: 30");
    return 0;
}