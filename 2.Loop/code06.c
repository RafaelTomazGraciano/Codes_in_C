/*Develop a program that draws 10 numbers between 0 and 100 and
show on screen:
a) What were the numbers drawn?
b) How many numbers are above 50
c) How many numbers are divisible by 3*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  int i = 0, number, above50 = 0, divisible3 = 0;
  srand(time(NULL));
  while(i < 10){
    number = rand()%101;
    printf("%d\n", number);
    if(number > 50){
      above50++; 
    }
    if(number % 3 == 0){
      divisible3++;
    }
    i++;
  }
  printf("These were the numbers drawn! \n");
  printf("Quantity of numbers above 50: %d\n", above50);
  printf("Quantity of number divisible by 3: %d", divisible3);
  return 0;
}
