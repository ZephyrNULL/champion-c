#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char studentName[256];
    int age;
    float gpa;
} Student;

void display_student(Student *ptr);
void modify_student(Student *ptr, float new_gpa);
int main(){

    Student s1 = {"Alice", 24, 3.71};

    Student *ptr = &s1;
    display_student(ptr);

    strcpy(ptr->studentName, "Bob");
    ptr->age = 20;
    modify_student(ptr, 3.8);
    display_student(ptr);

    return 0;
}

void display_student(Student *ptr){
    printf("Name: %s | Age: %d | GPA: %f\n", ptr->studentName, ptr->age, ptr->gpa);

}
//modify the current student
void modify_student(Student *ptr, float new_gpa){
    ptr->gpa = new_gpa;
}