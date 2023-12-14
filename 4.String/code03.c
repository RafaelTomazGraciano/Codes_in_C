/*Caesar's cipher is one of the simplest and most
known. It is a type of substitution in which each letter in the text is
replaced by another, which appears n positions after it in the alphabet. Per
For example, with a three-position swap, the letter A would be replaced by D,
B would become E and so on. Write a program that makes use of
of this code of Caesar for three positions. Enter a string and print
the encoded string.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char string[255], alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int n;
    printf("Enter a sentence: ");
    fgets(string, 255, stdin);
    setbuf(stdin, NULL);
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 0; string[i] != '\0'; i++){
        string[i] = tolower(string[i]);
        if(string[i] == ' ')
            printf(" ");
        for(int j = 0; alphabet[j] != '\0'; j++){
            if(alphabet[j] == string[i])
                printf("%c", alphabet[j+n]);
        }
    }
    return 0;
}