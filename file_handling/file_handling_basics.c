#include <stdio.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    
};
int main(){

   struct Student s[3] = {{"Alice", 20, 3.68},
                          {"William", 24, 3.74},
                          {"James", 24, 3.87}};
                        

   FILE *fh_output;
   fh_output = fopen("io.txt", "a");
   char name[50];
   for(int i = 0; i < 3; i++){

        fprintf(fh_output, "Name: %s | Age: %d | GPA: %.2f\n", s[i].name, s[i].age, s[i].gpa);

   }

   fclose(fh_output);
   return 0;
}