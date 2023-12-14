/*Simple registration program on a website. The user created the username and password, and then
Both must have 5 letters and 3 numbers.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  /*The user will register*/

  int count_letters, count_numbers;
  char user[8], password[8], user_name[8], user_password[8];
  printf("\nTo create an account your username and password must have 5 letters and 3 numbers.\n");
  do{
    count_letters = 0;
    count_numbers = 0;
    printf("\nCreate your username that must have 5 letters and 3 numbers: ");
    fgets(user, 8, stdin);
    for(int i = 0; user[i] != '\0'; i++){
      if(isalpha(user[i])){
        count_letters++;
      }
      else if(isdigit(user[i])){
        count_numbers++;
      }
    }
    if(count_letters != 5 || count_numbers != 3){
      printf("\nYour username is invalid! Try again!\n");
    }    
  }while(count_letters != 5 || count_numbers != 3);
  do{
    count_letters = 0; 
    count_numbers = 0; 
    printf("\nCreate your password that must have 5 letters and 3 numbers: ");
    scanf("%8s", password);
    for(int i = 0; password[i] != '\0'; i++){
      if(isalpha(password[i])){
        count_letters++;
      }
      else if(isdigit(password[i])){
        count_numbers++;
    }
  }
      if(count_letters != 5 || count_numbers != 3){
        printf("\nInvalid pssword! Try again!\n");
      }
  }while(count_letters != 5 || count_numbers != 3);
  printf("\nRegistration completed successfully!\n");
  
  /*The user will login*/

  do{
    printf("\nEnter your username: ");
    scanf("%8s", user_name); 
    if(strcmp(user_name, user) != 0){
      printf("\nThe username is incorrect!\n");
    }
  }while(strcmp(user_name, user) != 0);
  do{
    printf("\nEnetr your password: ");
    scanf("%8s", user_password);
    if(strcmp(user_password, password) != 0){
      printf("\nThe password is incorrect\n");
    }
  }while(strcmp(user_password, password) != 0);
  printf("\nLogin completed successfully!");
  return 0;
}

