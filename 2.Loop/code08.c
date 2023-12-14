/*Create a program using the "do-while" structure that reads multiple numbers.
Each loop ask if the user wants to continue or not. At the end, show on the screen:
a) The sum of all values
b) What was the lowest value entered
c) What was the highest value entered
d) The average of all values
e) How many values ​​are evens*/

#include <stdio.h>
#include <limits.h>

int main()
{
  float average;
  int number, sum = 0, lowest = INT_MAX, highest = 0, even = 0, i = 0;
  char answer; 
  do{
    printf("Enter the number: ");
    scanf("%d", &number);
    setbuf(stdin, NULL);
    printf("Do you want to enter more number? [Y/N]\n");
    answer = getchar();
    setbuf(stdin, NULL);
    sum += number;
    i++;
    average = sum/i;
    if(number > highest){
      highest = number;
    }
    if(number < lowest){
      lowest = number;
    }
    if(number % 2 == 0){
      even++;
    }
  }while(answer == 'Y' || answer == 'y');
  printf("\nThe sum of the values is: %d", sum);
  printf("\nThe lowest value entered is: %d", lowest);
  printf("\nThe highest value entered is: %d", highest);
  printf("\nThe average of the values is: %.2f", average);
  printf("\nThe quantity of even values are: %d", even);
  return 0;
}