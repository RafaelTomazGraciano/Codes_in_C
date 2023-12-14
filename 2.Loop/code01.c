/*Program where the user types two numbers and the program counts, the user
can also choose the increment value between the numbers*/

#include <stdio.h>

int main()
{
  float initial_value, final_value, increment, i;
  printf("Enter the initial value: ");
  scanf("%f", &initial_value);
  printf("Enter the final value: ");
  scanf("%f", &final_value);
  printf("Enter the increment: ");
  scanf("%f", &increment);
  i = initial_value;
  if(initial_value < final_value){
    printf("The initial value is less than the final value. So the count will be increasing!\n");
   
  }  
  while(i <= final_value && increment > 0){
    printf("%.2f \n", i);
    i += increment;
    }
  if(final_value < initial_value){
    printf("The final value is less than the final value. Therefore the countdown will be decreasing!\n");
  }
  while(i >= final_value && increment > 0){
    printf("%.2f \n", i);
    i -= increment;
  }
  return 0;
}