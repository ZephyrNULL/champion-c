#include <stdio.h>

int main(){

    char greeting[100];

    FILE *file = fopen("text.txt", "r");
    if(file == NULL){
        perror("Error opening the file");
        return 1;
    }

    fgets(greeting, sizeof(greeting), file);
   

    printf("%s\n", greeting);

    return 0;
}