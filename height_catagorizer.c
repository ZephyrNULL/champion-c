#include <stdio.h>

int main(){
    
    float height;
    printf("Enetr the height: ");
    scanf("%f", &height);
    
    if(height > 4.5){
        if(height >= 5.8)
            printf("Tall");
        else if(height >= 5.0)
            printf("Normal");
        else if(height >= 4.5)
            printf("Short");
        
    }else {
        printf("Rejected");
    }
    
}