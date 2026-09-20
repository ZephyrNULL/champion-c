#include <stdio.h>
#include <ctype.h>

int main(){
    
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if(!(isalpha(ch))){
        printf("Invalid input\n");
        return 1;
    }
    
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Letter is a Vowel\n");
            break;
        default:
            printf("Letter is a Constant\n");
    }
    
    return 0;
}