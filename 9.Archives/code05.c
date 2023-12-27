/*Write a function that takes the name of a file as a parameter
text and return how many vowels this file has.*/

#include <stdio.h>

int vowels(FILE *arc);

int main(){
    FILE *arc;
    arc = fopen("Archive6(text).txt", "r");
    if(arc == NULL){
        printf("Error opening file");
        return 1;
    }
    printf("Number of vowels: %d", vowels(arc));
    fclose(arc);
    return 0;
}

int vowels(FILE *arc){
    char vow[] = "aeiouAeiou";
    int cont = 0, c;
    while ((c = getc(arc)) != EOF) {
        for (int i = 0; vow[i] != '\0'; i++) {
            if (c == vow[i]) {
                cont++;
                break;
            }
        }
    }
    return cont;
}
