/*Create an algorithm that reads the ages of 10 people, showing at the end:
a) What is the average age of the group
b) How many people are over 18 years old
c) How many people are under 5 years old
d) What was the oldest age read?*/

#include <stdio.h>

int main()
{
  int age_people = 0, age, age_above_18 = 0, age_under_5 = 0, oldest = 0;
  float  average_age = 0, sum_age = 0;
  while(age_people < 10){
    printf("Enter the age: ");
    scanf("%d", &age);
    sum_age += age;
    if(age >= 18){
      age_above_18++;
    }
    if(age < 5){
      age_under_5++;
    }
    if(age > oldest){
      oldest = age;
    }
    age_people++;
  }
  average_age = sum_age/10;
  printf("\nThe average age of the group is %.2f", average_age);
  printf("\nQuantity of people that are above 18 years old 18: %d", age_above_18);
  printf("\nQuantity of people that are under 5 years old: %d", age_under_5);
  printf("\nThe oldest person is %d years old", oldest);
  return 0;
}