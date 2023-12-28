/*Make a program that reads n numbers. This program should
store these numbers in a binary file.*/

#include <stdio.h>

int main(){
    FILE *arc;
    int n, number;
    printf("Enter how many number you'll register: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        arc = fopen("Archive8(binary_file).bin", "ab");
        if(arc == NULL){
            printf("Error opening file");
            return 1;
        }
        printf("Enter the number: ");
        scanf("%d", &number);
        fprintf(arc, "%d", number);
        fprintf(arc, "%s", "\n");
        fclose(arc);
    }
    return 0;
}