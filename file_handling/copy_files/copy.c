#include <stdio.h>

int main(){

   FILE *source = fopen("source.txt", "r");
   FILE *destination = fopen("destination.txt", "w");
   if(source == NULL || destination == NULL){
    perror("Error opening file");
    return 1;
   }

   int ch;
   while((ch = getc(source)) != EOF){
    putc(ch, destination);
   }

   fclose(source);
   fclose(destination);
   printf("FIle Coppied Succesfully\n");
    return 0;
}
