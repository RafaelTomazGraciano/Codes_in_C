/*Write a program that reads a text file containing a list of
shopping. Each line of the file has a name, quantity and unit value
of product. The program then displays the purchase total.*/

#include <stdio.h>
#include <stdlib.h>

struct shopping
{
    char product[50];
    int quantity;
    float value;
};


int main(){
    FILE *arc;
    int n;
    float total = 0;
    struct shopping list;
    char space[] = "   |   ";
    printf("Enter how many products you'll register: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);
    for(int i = 0; i < n; i++){
        printf("Enter the name of the product: ");
        scanf("%49s", list.product);
        setbuf(stdin, NULL);
        printf("Enter the quantity of the product: ");
        scanf("%d", &list.quantity);
        setbuf(stdin, NULL);
        printf("Enter the value of the product: ");
        scanf("%f", &list.value);
        setbuf(stdin, NULL);
        arc = fopen("Archive5(shopping_list).txt", "a");
        if(arc == NULL){
            printf("Error opening file");
            exit(1);
        }
        fputs(list.product, arc);
        fputs(space, arc);
        fprintf(arc, "%d" , list.quantity);
        fputs(space, arc);
        fprintf(arc, "%.2f" , list.value);
        fprintf(arc, "%s", "\n");
        fclose(arc);
        total += (list.quantity * list.value);
    }
    printf("\nTotal: %.2f", total);
    arc = fopen("Archive5(shopping_list).txt", "a");
    fprintf(arc, "%s", "\nTotal: ");
    fprintf(arc, "%.2f", total);
    fclose(arc);
    return 0;
}