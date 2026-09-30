#include <stdio.h>
#include <string.h>
#define MAX_SLOT 10
#define STR_LEN 100

char parkingslot[MAX_SLOT][STR_LEN];
int occupied[MAX_SLOT] = {0};
void displayVehicle();
void parkVehicle();
void removevehicle();

int main()
{ 
   int choice = 0;
   do{
        printf("1. Park  Vehicle: \n");
        printf("2. Remove Vehicle: \n");
        printf("3. Display Vehicle: \n");
        printf("4. Exit\n");

        printf("What do you want to do: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                parkVehicle();
                break;
            case 2:
                removevehicle();
                break;
            case 3:
                displayVehicle();
                break;
            default:
                break;
        }

   }while(choice != 4);

   printf("Thank you for using the system\n");

    return 0;
}

void parkVehicle(){
    int slot = -1;
    for(int i = 0; i < MAX_SLOT; i++){
        if(occupied[i] == 0){
            slot = i;
            break;
        }

    }
    
    if(slot == -1){
            printf("Error: Parking lot is full.\n");
            return;
            
    }

     printf("Enter the vehicle number: ");
     scanf("%s", parkingslot[slot]);
     occupied[slot] = 1;
     printf("Vehicle %s parked succefully.\n", parkingslot[slot]);
}

void removevehicle(){
    int slot;
    printf("Enter you slot id: (0 to 10)");
    if((scanf("%d", &slot) == 0 || slot < 1 || slot > MAX_SLOT)){
        printf("Slot number can be less than 1 or grather than MAX_SLOTS\n");
        return;
    }

    int idx = slot -1;

    if(occupied[idx] == 0){
            printf("Slot is already empty\n");            
    }else{
       
        occupied[idx] = 0;
        parkingslot[idx][0] = '\0';
        printf("Vehicle removed succefully.\n");

    }

}

void displayVehicle(){
    printf("........Vehicles Available........\n");

    int count = 0;

    for(int i = 0; i < MAX_SLOT; i++){
        if(occupied[i] == 1){
            printf("Vehicle: %d | Vehicle Number: %s \n", i + 1, parkingslot[i]);
            count++;
        }
    }


    if(count == 0){
        printf("No vehicle are currently parked\n");
    }
}