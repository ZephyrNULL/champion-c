#include <stdio.h>

int third_largest(int arr[], int lenght);
int main(){
    
    int array[10] = {3,5,8,9,10,7,2,1,4,6};
    int third = third_largest(array, 10);

    if(third != -1){
       printf("Third Largets: %d", third);
    }else{
        printf("Program failed\n");
    }
    
    
}

int third_largest(int arr[], int lenght){
    
    if(lenght < 2){
        printf("Array must have at least 2 elements.\n");
        return -1;
    }
    
    int largest = arr[0];
    for(int i = 0; i < lenght; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }
    
    int second_largest = arr[0];
    
    for(int i = 0; i < lenght; i++){
        if(arr[i] < largest){
            if(arr[i] > second_largest)
                second_largest = arr[i];
                
        }
    }
    
    
    int third_Largest = arr[0];
    int found = 0;
    for(int i = 0; i < lenght; i++){
        if(arr[i] < largest){
            if(arr[i] < second_largest){
                if(!found || arr[i] > third_Largest){
                    third_Largest = arr[i];
                    found = 1;
                }
            }
        }
    }
    
    if(!found){
        printf("All values are identicle");
        return -1;
    }
    
    return third_Largest;
}