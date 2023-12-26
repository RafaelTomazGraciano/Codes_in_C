/*Write a program that reads the names of two text files from the user.
Create a third text file with the contents of the first two together (the
content of the first followed by the content of the second).*/

#include <stdio.h>

void concatenate( FILE *base, FILE *copy);


int main(){
    FILE *arc1, *arc2, *arc3;
    char archive1[255], archive2[255];
    printf("Enter the name of the first file: ");
    scanf("%254s", archive1);
    setbuf(stdin, NULL);
    printf("Enter the name of the second file: ");
    scanf("%254s", archive2);
    arc1 = fopen(archive1, "r");
    arc2 = fopen(archive2, "r");
    arc3 = fopen("Archive3.txt", "w");
    if(arc1 == NULL || arc2 == NULL || arc3 == NULL){
        printf("Error opening file");
        return 1;
    }
    concatenate(arc3, arc1);
    concatenate(arc3, arc2);
    printf("Process Complete!");
    fclose(arc1);
    fclose(arc2);
    fclose(arc3);
    return 0;
}

void concatenate( FILE *base, FILE *copy)
{
    char aux[1000];

    while (fgets (aux, sizeof aux, copy) != NULL)
    {
        fputs (aux, base);
    }
}