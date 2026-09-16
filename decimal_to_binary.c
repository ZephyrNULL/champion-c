#include <stdio.h>

int main()
{
    char binary[256];
    
    
    int decimal;
    
    do {
        
        printf("Enter the decimal number: ");
        scanf("%d", &decimal);
        
        if(decimal < 0){
            printf("Number must be greater than 0.\n");
        }
    }while(decimal < 0);
    
    int lenght = 0;
    
    do {
        
        if (decimal % 2 == 0){
            binary[lenght] = '0';
        }else {
            binary[lenght] = '1';
        }
        decimal /= 2;
        lenght++;
        
        
    }while(decimal != 0);
    
    binary[lenght] = '\0';
    
    int middle = lenght / 2;
    char temp;
    for(int i = 0; i < middle; i++){
        temp = binary[i];
        binary[i] = binary[lenght - i - 1];
        binary[lenght - i - 1] = temp;
    }
    
    
    printf("%s", binary);
   
    
    printf("\n");
    


    return 0;
}