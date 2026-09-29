#include <stdio.h>

float add(float x, float y);
float calculate(float (*add)(float, float), float x, float y);

int main()
{
    float x;
    float y;
    
    printf("Enter the value for x: ");
    scanf("%f", &x);
    
    printf("Enter the value for y: ");
    scanf("%f", &y);
    
    float result = calculate(add, x, y);
    printf("Result: %.2f\n", result);
       
    return 0;
}

float add(float x, float y){
    return x + y;
}

float calculate(float (*add)(float, float), float x, float y){
    int fixed = 30;
    float sum = fixed + add(x,y);
    return sum;
}