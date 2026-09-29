#include <stdio.h>

int main(){

    int arr[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
    int identity = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            if(i == j && arr[i][j] != 1) identity = 0;
            if(i != j && arr[i][j] != 0) identity = 0;
        }
    }


    if(identity != 0){
        printf("It's a Identity Matrix\n");
    }else{
        printf("It's not a identity matrix\n");
    }
}