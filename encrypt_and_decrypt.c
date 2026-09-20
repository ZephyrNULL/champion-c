#include <stdio.h>
#include <string.h>

int main(){ 
    
    char secretMess[256];
    char encrytedMess[256];
    char decryptedMess[256];
    
    printf("Enter the secret message: ");
    fgets(secretMess, sizeof(secretMess), stdin);
    secretMess[strcspn(secretMess, "\n")] = '\0';
    
    for(int i = 0; i <= strlen(secretMess) - 1; i++){
        encrytedMess[i] = secretMess[i] + 4;
        printf("%c", encrytedMess[i]);
    }
    printf("\n");
    
    for(int i = 0; i < strlen(encrytedMess); i++){
        decryptedMess[i] = encrytedMess[i] - 4;
        printf("%c", decryptedMess[i]);
    }
    printf("\n");
    
    
    
    
    
    return 0;
}