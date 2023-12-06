/*Program to find a prime number*/

#include <stdio.h>

int main()
{
  int number, count, prime = 1;
  printf("Enter the number: ");
  scanf("%d", &number);
  if(number <= 1){
    prime = 0;
  }
  else{
    for(count = 2; count <= number/2; count++){
      if(number % count == 0){
        prime = 0;
      }
    }
  }
  if(prime == 0){
    printf("The %d is not a prime number.", number);
  }
  else{
    printf("The %d is a prime number.", number);
  }
  return 0;
}