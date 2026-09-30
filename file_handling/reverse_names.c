#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    FILE *fp = fopen("name.txt", "r");
    if(fp == NULL){
        perror("Failed to open the file");
        return 1;
    }

    FILE *fo = fopen("format.txt", "w");
    if(fo == NULL){
        perror("Falied to open the file");
        fclose(fp);
        return 1;
    }
    int ch = 0;
    char first[20];
    char last[50];
    while((fscanf(fp, "%19s %49s", first, last)) == 2){
        fprintf(fo, "%s %s\n", last, first);       

    }

    fclose(fp);
    fclose(fo);

    printf("Operation sucesfull\n");
    return 0;

}