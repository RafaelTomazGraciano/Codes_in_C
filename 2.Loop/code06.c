/*Develop a program that reads the salary and gender of several employees.
At the end, show the total wages paid to men and the total wages paid to women.
The program will ask the user if he wants to continue or not
whenever you read an employee's data.*/

#include <stdio.h>

int main()
{
  float wage, totalmen, totalwomen;
  char gender, answer = 'Y';
  while(answer == 'Y' || answer == 'y'){
    printf("Enter the wage's value of the employee: ");
    scanf("%f", &wage);

    fflush(stdin); // clear the buffer of keyboard input
    printf("Enter the employee's gender[W/M]\n");
    scanf("%c", &gender);

    if(gender == 'W' || gender == 'w'){
      totalwomen += wage;
    }  
    else if(gender == 'M' || gender == 'm'){
      totalmen += wage;
    }

    printf("Do you want to enter another value?[Y/N] \n");
    fflush(stdin); // clear the buffer of keyboard input
    scanf("%c", &answer);
  }
  printf("The total wage paid to men is: %.2f\n", totalmen);
  printf("The total wage paid to women is: %.2f\n", totalwomen);
  return 0;
}