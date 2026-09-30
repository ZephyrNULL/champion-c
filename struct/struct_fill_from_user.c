#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct{
    char name[20];
    int age;
    float gpa;
}Student;

int is_valid_name(const char *str){
    if(str[0] == '\0') return 0;
    for(int i =0; str[i] != '\0'; i++){
        if(!isalpha((unsigned char)str[i])) {
            return 0;
        }
    }
    return 1;
}

int is_valid_digit(const int *digit){
    
}
int main(){
   Student *s = (Student *)malloc(sizeof(Student) * 5);
   for(int i = 0; i < 5; i++){
    int status;
    int valid_name = 0;

    do{
        printf("Enter the name: ");
        status  = scanf("%s", s[i].name);
        while(getchar() != '\n');
        if(status == 1 && is_valid_name(s[i].name)){
            valid_name = 1;
            
        }else {
            printf("Invalid input, try again\n");
            valid_name = 0;
        }
        
    }while(!valid_name);
    int valid_age = 0;
    do{
        printf("Enter the age: ");
        status = scanf("%d", &s[i].age);
        while(getchar() != '\n');
        int digit = isdigit(s[i].age);
        
        if(status == 1 && s[i].age > 0 && s[i].age < 120){
            valid_age = 1;  
        }else{
            printf("Invalid input, Try again\n");
        }
        

    }while(!valid_age);

    int valid_gpa = 0;

    do{
        printf("Enter the GPA: ");
        status = scanf("%f", &s[i].gpa);
        if(status == 1 && s[i].gpa >= 0 && s[i].gpa <= 4){
            valid_gpa = 1;   
        }else{
            printf("Invalid input, Try again\n");
        }
         while(getchar() != '\n');
    }while(!valid_gpa);

   }

   for(int i = 0; i < 5; i++){
    printf("Name: %s | Age: %d | GPA: %.2f\n", s[i].name, s[i].age, s[i].gpa);
   }
   printf("\n");

   free(s);

  
    return 0;
}
