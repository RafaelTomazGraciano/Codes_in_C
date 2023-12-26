/*Write a program that reads the name of a text file from the user. 
Then show on the screen how many lines this file has.*/

#include <stdio.h>

int main(){
    FILE *arc;
    int lines = 1;
    char name_archive[255];
    printf("Enter the name of the archive: ");
    scanf("%254s", name_archive);
    arc = fopen(name_archive, "r");
    if(arc == NULL){
        printf("Error opening file");
        return 1;
    }
    while(!feof(arc)){
        if(getc(arc) == '\n')
            lines++;
    }
    printf("Archive has %d lines!", lines);
    fclose(arc);
    return 0;
}