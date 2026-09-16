#include <stdio.h>
typedef struct {
    int id;
    char name[20];
    int marks[3];
} Student;


float calculateAverage(Student *s, int n);


int main() {
    Student s1 = {202, "Roy", {60, 55, 70}};
    Student *ptr;
    int n = 3;
    ptr = &s1;
    printf("Student ID: %d\n", ptr->id);
    printf("Student Name : %s\n", ptr->name);
    printf("Average Marks = %.2f\n", calculateAverage(ptr, n));
    return 0;
}

float calculateAverage(Student *s, int n){
    int sum = 0;
    int i;
    
    for (i = 0; i <n; i++) {
        sum = sum + s->marks[i];
        
    }
    return (float)sum/n;
}
