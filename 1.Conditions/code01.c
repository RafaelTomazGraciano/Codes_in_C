/*Program to convert Celsius, Fahrenheit and Kelvin*/

#include <stdio.h>

int main()
{
  int code;
  float celsius, fahrenheit, kelvin;
  printf("    Code                         Converting     \n");
  printf("     1                    Celsius to Fahrenheit \n");
  printf("     2                    Celsius to Kelvin     \n");
  printf("     3                    Fahrenheit to Celsius \n");
  printf("     4                    Fahrenheit to Kelvin  \n");
  printf("     5                    Kelvin to Celsius     \n");
  printf("     6                    Kelvin to Fahrenheit  \n");
  printf("Enter the code for the operation you want to perform: ");
  scanf("%d", &code);
  switch (code)
  {
  case 1:
    printf("\nEnter the value of the degree in Celsius: ");
    scanf("%f", &celsius);
    printf("Converting from Celsius to Fahrenheit will result in %.2f Fahrenheit", 1.8*celsius+32);
    break;
  case 2:
    printf("\nEnter the value of the degree in Celsius: ");
    scanf("%f", &celsius);
    printf("Converting from Celsius to Kelvin will result in %.2f Kelvin", celsius+273);
    break;
  case 3:
    printf("\nEnter the value of the degree in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Converting from Farenheit to Celsius will result in %.2f Celsius: ", (fahrenheit-32)/1.8);
    break;
    case 4:
    printf("\nEnter the value of the degree in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Coverting from Fahrenheit to Kelvin will result in %2.f Kelvin", (fahrenheit-32)*5/9+273.15);
    break;
    case 5:
    printf("\nEnter the value of the degree in Kelvin: ");
    scanf("%f", &kelvin);
    printf("Converting from Kelvin to Celsius will result in %2.f Celsius", kelvin-273.15);
    break;
    case 6:
    printf("\nEnter the value of the degree in Kelvin: ");
    scanf("%f", &kelvin);
    printf("Converting from Kelvin to Fahrenheit will result in %2.f Fahrenheit", (kelvin-273.15)*1.8+32);
    break;
  default:
  printf("\nUnknown code");
    break;
  }
  return 0;
}