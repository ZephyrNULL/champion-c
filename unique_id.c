#include <stdio.h>

void displayArray(int *arr, int size);
int findUnique(int *arr, int size);
void displayResult(int unique);

int main()
{
    int productIDs[] = {101, 205, 150, 205, 310, 150, 450, 310, 101, 620, 450};
    int lenght = sizeof(productIDs)/ sizeof(productIDs[0]);
    displayArray(productIDs, lenght);
    int UniqueId = findUnique(productIDs, lenght);
    if(UniqueId != -1){
        displayResult(UniqueId);
    }else{
        printf("Failed to find the ID\n");
    }
    return 0;
}

void displayArray(int *arr, int lenght){
    for(int i = 0; i < lenght; i++){
        printf("Product ID: %d\n", *(arr + i));   
    }
}
int findUnique(int *arr, int lenght){
    for(int i = 0; i < lenght; i++){
        int count = 0;
        for(int j = 0; j < lenght; j++){
            if(*(arr+i) == *(arr+j)){
                count++;
            }
        }
        
        if(count == 1){
            return *(arr+i);
        }
        
    }
    
    return -1;
}

void displayResult(int unique){
    printf("Unique ID: %d\n", unique);
    
}