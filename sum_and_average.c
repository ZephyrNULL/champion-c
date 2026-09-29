#include <stdio.h>
#include <string.h>

void getInput(int nofint, float *arr);
float sum(int nofint, float *arr);
float average(int nofint, float sum);
float maximum(int nofint, float *arr);

int main()
{ 
    int nofint;
    printf("Enter the number of integers: ");
    scanf("%d", &nofint);
    float arr[nofint];
    getInput(nofint, arr);
    float sumT = sum(nofint, arr);
    float avg = average(nofint, sumT);
    float max = maximum(nofint, arr);

    printf("Sum: %.2f | Average: %.2f | Max: %.2f", sumT, avg, max);
    return 0;
}

void getInput(int nofint, float *arr){
        for(int i = 0; i < nofint; i++){
            printf("Enter a number: ");
            scanf("%f", arr+i);
        }
}

float sum(int nofint, float *arr){
    float sum = 0.0;
    for(int i = 0; i < nofint; i++){
        sum += arr[i];
    }

    return sum;
}

float average(int nofint, float sum){
    float avg = 0.0;
    avg = sum / nofint;

    return avg;

}

float maximum(int nofint, float *arr){
    float max = arr[0];

    for(int i = 1; i < nofint; i++){
        if(arr[i] > max){
            max = arr[i];
        }else{
            continue;
        }
    }

    return max;
}
