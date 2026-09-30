#include <stdio.h>

int main(){

    FILE *file = fopen("info.txt", "r");
    if(file == NULL){
        perror("Error opening the file");
        return 1;
    }
    FILE *fout = fopen("formated_info", "w");
    if(fout == NULL){
        perror("Error opening the file");
        return 1;
    }

    char first[50];
    char last[50];
    while((fscanf(file, "%49s %49s", first, last) == 2)){
        fprintf(fout, "%s %s", last, first);
        fputs("\n", fout);
    }
    fclose(file);
    fclose(fout);

    return 0;
}