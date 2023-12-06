/*Create a code that read an integer positive number N, then print N lines of the triangle of Floyd:
1
2 3
4 5 6
8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>

int main(){
    int N, count = 1, j = 2;
    printf("Enter the number: ");
    scanf("%d", &N);
    if(N < 0){
        printf("Invalid number, must be a positive number\n");
    }
    for(int i = 1; i <= N; i++){
        while (count < j){
            printf("%d  ", count);
            count++;
        }
        printf("\n");
        j = j + 1 + i;
    }
    return 0;
}