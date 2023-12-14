/*Program to calculate factorial*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number, count, result = 1;
  printf("Enter the number:  ");
  scanf("%d", &number);
  for(count = 1; count <= number; count++){
    result *= count;
  }
  printf("The result is %d\n", result);
  return 0;
}