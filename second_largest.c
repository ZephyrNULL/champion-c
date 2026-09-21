#include <stdio.h>
int secondLargest(int arr[], int lenght);

int main()
{
   int array[5] = {3, 2, 5, 4, 1};
   int second = secondLargest(array, 5);
   if(second != -1){
       printf("Second Largets: %d", second);
    }else{
        printf("Program failed\n");
    }
}


int secondLargest(int arr[], int lenght){
    if(lenght < 2){
        printf("There must be al least 2 elements in the array\n");
        return -1;
    }
    
    int largest = arr[0];
    for(int i = 0; i < lenght; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    
    
    int second_largest = arr[0];
    int found = 0;
    
    for(int i = 0; i < lenght; i++){
        if(arr[i] < largest){
          if(!found || arr[i] > second_largest){
            second_largest = arr[i];
            found = 1;
          }
        }
    }
    
    if(!found){
        printf("All the array elements are identicle\n");
        return -1;
    }
    
    return second_largest;
}

