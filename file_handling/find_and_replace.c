#include <stdio.h>
#include <string.h>


int main()
{ 
    char word[50];
    char reword[50];
    char currentword[50];

    printf("Enter a word: ");
    if(scanf("%49s", word) != 1) return 1;
    printf("Enter the word to replace: ");
    if(scanf("%49s", reword) != 1) return 1;


   FILE *f_read;
   f_read = fopen("input.txt", "r");
   if(f_read == NULL){
    printf("Failed to open the file.\n");
    return 1;
   }

    FILE *f_write;
    f_write = fopen("output.txt", "w");
    if(f_write == NULL){
        printf("Failed to open the file\n");
        
        fclose(f_read);
        return 1;
    }

   while(fscanf(f_read, "%49s", currentword) != EOF){
    if(strcmp(currentword, word) == 0){
        fprintf(f_write, "%s", reword);
    }else{
        fprintf(f_write, "%s", currentword);
    }
   }

   printf("Operation Succesfull\n");
   fclose(f_read);
   fclose(f_write);


    return 0;
}