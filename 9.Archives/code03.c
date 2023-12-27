/*Write a program that reads positive numbers and converts them to binary.
Each binary number must be saved in a line of a text file.
The program ends when the user enters a negative number.*/

#include <stdio.h>

int main(){
    FILE *arc;
    int n, binary[255], i;
    do{
        printf("Enter a positive number (or a non-positive number to exit): ");
        scanf("%d", &n);
        if(n < 0){
            break;
        }
        arc = fopen("Archive4(binary).txt", "a");
        if(arc == NULL){
            printf("Error opening file");
            return 1;
        }
        for(i = 0; n > 0; i++){
        binary[i] = n % 2;
        n /= 2;
        }
        for(int j = i-1; j >= 0; j--){
            fputc(binary[j] + '0', arc);
        }
        fputs("\n", arc);
        fclose(arc);
        // Reseting n
        n = 1;
    }while(n > 0);
    return 0;
}