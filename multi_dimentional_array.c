#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define X 3
#define Y 3
#define Z 4

void generate3DAray(int *arr);
void printArray(int *arr);
int main()
{
    int *arr = (int *)malloc(X*Y*Z*sizeof(int));
    if(arr == NULL){
        printf("Memory Alocation Failed\n");
        return 1;
    }
    srand(time(NULL));
    generate3DAray(arr);
    printArray(arr);
    free(arr);
   
    
    return 0;
}


void generate3DAray(int *arr){
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            for(int k = 0; k < Z; k++){
                *(arr+(i*Y*Z)+(j*Z)+k) = rand() % 41 + 10;
            }
        }
    }

}

void printArray(int *arr){
    printf("....Printing Array.....\n");
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            for(int k = 0; k < Z; k++){
                printf("%3d ", *(arr+(i*Y*Z) + (j*Z) + k));
            }
            printf("\n");
        }
        printf("\n");
    }
}

