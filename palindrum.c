
#include <stdio.h>
#include <string.h>

void get_input(char word[]);
int check_palindrum(char word[]);
int main()
{
   char word[51];
   get_input(word);
   int check = check_palindrum(word);
   if(check == 1){
       printf("Word is a palindrium\n");
   }else{
       
       printf("Word is not a palindrum\n");
   }
   
   
   
    return 0;
}

void get_input(char word[]){
    
    printf("Enter the Word: ");
    scanf("%50s", word);
    
}

int check_palindrum(char word[]){
    
    char *ptr = word;
    int status;
    int i = 0;
    int j = strlen(word) - 1;
    for(i, j; i < j; i++, j--){
        if(*(ptr + i) != *(ptr+ j)){
            return 0;
        }
    }
    
    return 1;
    
}