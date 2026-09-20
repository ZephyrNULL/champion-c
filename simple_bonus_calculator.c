#include <stdio.h>
#include <string.h>\

int main(){
    
    char employeeId[10];
    char employeeName[128];
    int salary = 0;
    char gender[10];
    float bonus = 0.0;
    
    printf("Enter employee id: ");
    scanf("%9s", employeeId);
    
    printf("Employee Name: ");
    scanf("%127s", employeeName);
    
    printf("Enter employee salary: ");
    scanf("%d", &salary);
    
    printf("Enter employee gender: ");
    scanf("%9s", gender);
    
    if(salary <= 25000 && salary > 0){
      
       if(strcmp(gender, "Male") == 0 || strcmp(gender, "male") == 0 || strcmp(gender, "MALE") == 0)
          bonus = salary * 0.07f;
       else if (strcmp(gender, "Female") == 0 || strcmp(gender, "female") == 0 || strcmp(gender, "FEMALE") == 0)
          bonus = salary * 0.10f;
    } else {
        if(strcmp(gender, "Male") == 0 || strcmp(gender, "male") == 0 || strcmp(gender, "MALE") == 0)
          bonus = salary * 0.05f;
       else if (strcmp(gender, "Female") == 0 || strcmp(gender, "female") == 0 || strcmp(gender, "FEMALE") == 0)
          bonus = salary * 0.08f;
    }
    printf("\n");
    
    printf("Employee ID: %s\nEmployee Name: %s\nEmployee Salary: %d\nEmployee Gender: %s\nEmployee Bonus: %.2f\n", employeeId, employeeName, salary, gender, bonus);
    
}
