/*Write a program that reads three strings and prints them in order
alphabetically, the order in which they would appear in a dictionary.*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[3][255], aux[255];
    for(int i = 0; i < 3; i++){
    printf("Enter the string %d: ", i);
    fgets(string[i], 255, stdin);
    setbuf(stdin, NULL);
    }
    for(int i = 1; i < 3; i++){
        for(int j = 1; j < 3; j++){
            if(strcmp(string[j-1], string[j]) > 0){
                strcpy(aux, string[j-1]);
                strcpy(string[j-1], string[j]);
                strcpy(string[j], aux);
            }
        }
    }
    for(int i = 0; i < 3; i++)
        printf("%s", string[i]);
    return 0;
}