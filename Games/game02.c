/*Tic tac toe*/

#include <stdio.h>
#include <stdlib.h>

void clear_terminal();

void player1(char matrix[3][3]);

void player2(char matrix[3][3]);

void verification(char matrix[3][3], int aux);

int main(){
    int aux = 0;

    char matrix[3][3];
    //clear matrix
    for(int i = 0; i < 3; i++){
        for(int  j = 0; j < 3; j++){
            matrix[i][j] = ' ';
        }
    }

    printf("_00_|_01_|_02_\n");
    printf("_10_|_11_|_12_\n");
    printf(" 20 | 21 | 22 \n");
    
    player1(matrix);
    player2(matrix);
    player1(matrix);
    player2(matrix);
    player1(matrix);
    verification(matrix, aux);
    player2(matrix);
    verification(matrix, aux);
    player1(matrix);
    verification(matrix, aux);
    player2(matrix);
    verification(matrix, aux);
    player1(matrix);
    aux = 1;
    verification(matrix, aux);

    return 0;
}

void player1(char matrix[3][3]){
    int line, column, go_on = 0;
    do{
        printf("\nPlayer One's turn [X]\n");
        printf("Choose the postion on the matrix [LINE]: ");
        scanf("%d", &line);
        printf("Choose the postion on the matrix [COLUMN]: ");
        scanf("%d", &column);
        clear_terminal();

        if(matrix[line][column] == 'X' || matrix[line][column] == 'O'){
            printf("This position is already occupied!\n");
            go_on = 1;
        }   

        else if(line < 0 || line > 2 || column < 0 || column > 2) {
            printf("This position doesn't exist\n");
        }  

        else{
            matrix[line][column] = 'X';
            go_on = 0;
        }

    }while(go_on == 1 || line < 0 || line > 2 || column < 0 || column > 2);

    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int  j = 0; j < 3; j++){

            if(j == 2)
                printf("%c ", matrix[i][j]);
            else
                printf("%c | ", matrix[i][j]);

        }
    }

}

void player2(char matrix[3][3]){
        int line, column, go_on = 0;
    do{
        printf("\nPlayer Two's turn [O]\n");
        printf("Choose the postion on the matrix [LINE]: ");
        scanf("%d", &line);
        printf("Choose the postion on the matrix [COLUMN]: ");
        scanf("%d", &column);
        clear_terminal();

        if(matrix[line][column] == 'X' || matrix[line][column] == 'O'){
            printf("This position is already occupied!\n");
            go_on = 1;
        }   

        else if(line < 0 || line > 2 || column < 0 || column > 2) {
            printf("This position doesn't exist\n");
        }

        else{
            matrix[line][column] = 'O';
            go_on = 0;
        }

    }while(go_on == 1 || line < 0 || line > 2 || column < 0 || column > 2);

    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int  j = 0; j < 3; j++){

            if(j == 2)
                printf("%c ", matrix[i][j]);
            else
                printf("%c | ", matrix[i][j]);

        }
    }
}

void verification(char matrix[3][3], int aux){
    // Checking for LINES for X or O victory. 
    for (int i = 0; i < 3; i++) { 
        
        if (matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]){ 

            if (matrix[i][0] == 'X'){
                printf("\nPlayer One won!");
                exit(0);
            }

            else if (matrix[i][0] == 'O'){
                printf("\nPlayer Two won!");
                exit(0);
            }
        } 
    } 
  
    // Checking for Columns for X or O victory. 
    for (int j = 0; j < 3; j++) { 
        
        if (matrix[0][j] == matrix[1][j] && matrix[1][j] == matrix[2][j]){ 
            
            if (matrix[0][j] == 'X'){
                printf("\nPlayer One won!");
                exit(0); 
            }

            else if(matrix[0][j] == 'O'){
                printf("\nPlayer Two won!");
                exit(0); 
            }
        } 
    } 
  
    // Checking for Diagonals for X or O victory. 
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]){ 
        
        if(matrix[0][0] == 'X'){
            printf("\nPlayer One won!");
            exit(0);
        } 

        else if(matrix[0][0] == 'O'){
            printf("\nPlayer Two won!");
            exit(0);
        } 
    } 
  
    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) { 
        
        if (matrix[0][2] == 'X'){
            printf("\nPlayer One won!");
            exit(0);
        } 

        else if (matrix[0][2] == 'O'){
                printf("\nPlayer Two won!");
                exit(0);
            }
    }

    if(aux == 0){
        printf("\n");
    }
  
    // Else if none of them have won 
    else{
        printf("\nDraw");
    } 

}


void clear_terminal(){
    #ifdef _WIN32
        system("cls");
    #elif __linux__
        system("clear");
    #endif
}