#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define GRAVITY 9.81

void get_input(float *tankDia, float *height, float *pipeDia);
void calculate(float tankDia, float height, float pipeDia, float *volume, float *velocity, float *flowRate, float *drainTime);
void display(float volume, float velocity, float flowRate, float drainTime);

int main()
{
    float tank_dia;
    float height;
    float pipe_dia;
    
    float volume;
    float velocity;
    float flowRate;
    float drainTime;
    
    get_input(&tank_dia, &height, &pipe_dia);
    printf("\n");
    calculate(tank_dia, height, pipe_dia, &volume, &velocity, &flowRate, &drainTime);
    display(volume, velocity, flowRate, drainTime);

    return 0;
}

void get_input(float *tankDia, float *height, float *pipeDia){
    
    printf("Enter the diameter of the tank: ");
    scanf("%f", tankDia);
    
    printf("Enter the height of water in the tank: ");
    scanf("%f", height);
    
    printf("Enter the diameter of the pipe: ");
    scanf("%f", pipeDia);
    
}

void calculate(float tankDia, float height, float pipeDia, float *volume, float *velocity, float *flowRate, float *drainTime){
    
    *volume = PI*(tankDia/2)*(tankDia/2)*height;
    *velocity = sqrt(2*GRAVITY*height);
    float pipeArea = PI*(pipeDia/2)*(pipeDia/2);
    *flowRate = pipeArea*(*velocity);
    *drainTime = ((*volume)/(*flowRate));
    
    
}

void display(float volume, float velocity, float flowRate, float drainTime){
    
    printf("Volume: %f\n", volume);
    printf("Velocity: %f\n", velocity);
    printf("flowRate: %f\n", flowRate);
    printf("drainTime: %f\n", drainTime);
    
}