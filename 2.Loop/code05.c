/*Fibonacci Sequence Program*/

#include <stdio.h>

int main()
{
int limit, prior = 0, actual = 1, next;
printf("Enter the limit of the Fibonacci Sequence:");
scanf("%d", &limit);
printf("%d \n", prior);
while(actual <= limit){
  printf("%d \n", actual);
  next = prior + actual;
  prior = actual;
  actual = next;
}
printf("Fibonacci Sequence up to %d\n", limit);
return 0;
}