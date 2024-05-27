#include<stdio.h>


void updateBalance(float arr[], int identifier, int type, float amount){

    if(type == 1){

        if(arr[identifier] < amount){
            printf("Not sufficient Balance\n");
            return;
        }

        arr[identifier] -= amount;

        printf("Succssfully Withdrawn amount: %f\n", amount);
    }else if(type == 2){
        arr[identifier] += amount;
        printf("Succssfully Deposited amount: %f\n", amount);
    }
}

int main(){


    // Step (i): Take 100 float input from user
    float customerArray[5];

    for(int i=0; i<5; i++)
       scanf("%f", &customerArray[i]);


    // Step (ii): Take 3 input from user, identifier, type, amount
    int identifier, type;
    float amount;
    scanf("%d %d %f", &identifier, &type, &amount);

    // Step (iii): call updated Function
    updateBalance(customerArray, identifier, type, amount);

    // Step (iv): Print the updated array

    printf("Updated Array: ");
    for(int i=0; i<5; i++)
        printf("%f ", customerArray[i]);

}