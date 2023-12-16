/*Create a structure representing a student from a
discipline. This structure must contain the registration number
of the student, his name and the grades of three tests. Now write
a function that receives a vector of size N from this
structure. This function must return the index of the student who
has the highest overall average among all students.*/

#include <stdio.h>
#include <string.h>

struct students
{
    char name[50];
    int registration;
    float grade[3];
};

float average(float *vector, int n, struct students student);

int main(){
    int n;
    printf("How many students you'll register?\n");
    scanf("%d", &n);
    struct students student[n];
    for(int i = 0; i < n; i++){
        printf("\n------------------STUDENT %d------------------\n",i);
        setbuf(stdin, NULL);
        printf("Name of the student: ");
        fgets(student[i].name, 50, stdin);
        setbuf(stdin, NULL);
        printf("Enter the registration number of the student: ");
        scanf("%d", &student[i].registration);
        for(int j = 0; j < 3; j++){
            printf("Enter the grade %d of the student: ", j);
            scanf("%f", &student[i].grade[j]);
        }
    }
    printf("Average grade: %.2f", average(&student->grade[0], n, student[0]));
    return 0;
}

float average(float *vector, int n, struct students student){
    float highest = 0, sum = 0, average; 
    int index;
    char name[50];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            sum += vector[j];
        }
        average = sum/3;
        sum = 0;
        if(average > highest){
            highest = average;
            strcpy(name, student.name);
            index = student.registration;
        }
    }   
    printf("Name of the student: %s", name);
    printf("Registation number of the student: %d\n", index);
    return highest;
}
