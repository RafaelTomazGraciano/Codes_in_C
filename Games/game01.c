/*Create a program in which the computer will draw a number between 1 and 10 and the player will have 3
attempts to try to get it right.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int number_draw, attempts = 0, user_attempts;
  srand(time(NULL));
  number_draw = rand()%11;
  printf("This is a game to try to guess the number between 0 and 10");
  printf("\nYou have 3 attemps");
  while(attempts < 3){
    printf("\nEnter a number: ");
    scanf("%d", &user_attempts);
    if(number_draw == user_attempts){
      printf("\nCongratulations! You're right!!!");
      printf("\nTry again whenever you want");
      return 0;
    }
    if(number_draw!= user_attempts && attempts < 2){
      printf("\nYou missed! This was not the correct number.");
    }
     if(number_draw != user_attempts && attempts == 1){
      printf("\nThis is your last chance!");
    }
    if(number_draw != user_attempts && attempts == 2){
      printf("\nWhat a pity, you didn't make it.");
      printf("\nTry again whenever you want!");
    }
    if(number_draw > user_attempts && attempts != 2){
        printf("\nThe number drawn is greater than the one you entered.");
    }
    if(number_draw < user_attempts && attempts != 2){
        printf("\nThe number drawn is smaller than the one you entered.");
    }
    attempts++;
  }
  return 0;
}