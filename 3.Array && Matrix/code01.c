/*Read a group of real numbers, storing it in an array. Right away,
calculate the square of each element of this vector, storing this
result in another vector. Sets have a maximum of 20 elements.
Print both sets of numbers.
*/

#include <stdio.h>

int main(){
    float array1[20], array2[20];
    for(int i = 0; i < 20; i++){
        printf("Enter the value of the array at the position %d: ", i);
        scanf("%f", &array1[i]);
    }
    for(int i = 0; i < 20; i++){
        array2[i] = array1[i]*array1[i];
    }
    printf("\nThe result is\n");
    for(int i = 0; i < 20; i++){
        printf("%.4f\n", array2[i]);
    }
    
    return 0;
}