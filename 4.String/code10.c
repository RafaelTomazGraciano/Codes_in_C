/*Develop an algorithm that reads multiple people's names, ages, and genders.
The program will ask the user if he wants to continue or not. At the end, show:
a) The name of the oldest person
b) The name of the youngest person
c) The average age of the group
d) How many men are over 30 years old
e) How many women are under 18 years old*/

#include <stdio.h>
#include <string.h>

int main()
{
  float average = 0, sum = 0, i = 1;
  int age, oldest = 0, youngest = 100, men_above_30 = 0, women_under_18 = 0;
  char name[50], oldest_name[50], youngest_name[50], gender, answer = 'Y';
  while(answer == 'Y' || answer == 'y'){
    printf("Enter the name of the person: ");
    fgets(name, 50, stdin);
    setbuf(stdin, NULL);
    printf("Enter the person's age: ");
    scanf("%d", &age);
    setbuf(stdin, NULL);
    printf("Enter the person's gender [M/W]: ");
    gender = getchar();
    setbuf(stdin, NULL);
    printf("Do you want to register one more person? [Y/N]\n");
    answer = getchar();
    setbuf(stdin, NULL);
    if(age > oldest){
      oldest = age;
      strcpy(oldest_name, name);
    }
    if(age < youngest){
      youngest = age;
      strcpy(youngest_name, name);
    }
    sum += age;
    average = sum/i;
    i++;
    if((gender == 'M' || gender == 'm') && age >=30){
      men_above_30++;
    }
    if((gender == 'W' || gender == 'w') && age < 18){
      women_under_18++;
    }
  }
  printf("\nThe oldest person with %d years old is %s", oldest, oldest_name);
  printf("The youngest person with %d years old is %s", youngest, youngest_name);
  printf("The average age of this group is %.2f\n", average);
  printf("There are %d men over 30 years old in this group\n", men_above_30);
  printf("There are %d women under 18 years old in this group", women_under_18);
  return 0;
}