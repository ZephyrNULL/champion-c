#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[256];
    int id;
    int age;
    float gpa;
} Student;

int add_students(Student **ptr);
void print_students(Student *ptr, int students);
int main(){

    Student *s = NULL;
   
    int students = add_students(&s);

    printf("\n");

    printf("Student Details\n");
    print_students(s, students);




    return 0;
}

int add_students(Student **ptr){
    int numOfStudents;
    printf("Enter the number 0f students:");
    if((scanf("%d", &numOfStudents) != 1 || numOfStudents <= 0)){
        return 0;
    };
    

    *ptr = (Student *)malloc(sizeof(Student) * numOfStudents);
    if(*ptr == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i = 0; i < numOfStudents; i++){
        printf("\nEnter the student %d details: \n", i+1);
        getchar();

        printf("Enter the name of the student: ");
        fgets((*ptr)[i].name, sizeof((*ptr)[i].name), stdin);

        (*ptr)[i].name[strcspn((*ptr)[i].name, "\n")] = '\0';

        printf("Enter the id of the student: ");
        scanf("%d", &(*ptr)[i].id);

        printf("Enter the age of the student: ");
        scanf("%d", &(*ptr)[i].age);

        printf("Enter the GPA of the student: ");
        scanf("%f", &(*ptr)[i].gpa);
    }


    return numOfStudents;

}


void print_students(Student *ptr, int students){
    for(int i = 0; i < students; i++){
        printf("Name: %s | ID: %d | Age: %d | GPA: %.2f\n", ptr[i].name, ptr[i].id, ptr[i].age, ptr[i].gpa);
    }
}