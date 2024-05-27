
/*

Implement a function updateBalance that takes four parameters: an array of floats representing
[4]
customer balances, an integer representing the customer's unique identifier (which is the index of the array), an integer representing the type of transaction (1 for withdrawal, 2 for deposit), and a float representing the transaction amount. The function should update the customer's balance based on the transaction type, ensuring that withdrawals do not result in a negative balance.

i) In the main function, initialize an array of floats to store the initial balances of 100 customers. Take the initial balances from user as input.
ii) Take three values: an integer (customer identifier), an integer (transaction type), and a float
(transaction amount) from user.

iii) Call the updateBalance function passing these values. If the transaction is a withdrawal and the withdrawal amount is exceeding the available balance then print "Not sufficient balance" and do not activate the withdrawal.
iv) If transaction is successful in step (iii, print the updated balance of the customer.

*/


#include<stdio.h>

void updatedBalance(float balances[], int identifier, int type, float amount){

    // STEP-1: Check if the transaction is a withdrawal and the withdrawal amount is exceeding the available balance then print "Not sufficient balance" and do not activate the withdrawal.
    if(type == 1){
        if(balances[identifier] < amount){ //! FAILURE TRANSECTION
            printf("Not suffiecient balances\n");
        }else { //? SUCCESS Transection
            
            balances[identifier] = balances[identifier]  - amount;
            printf("%f\n", balances[identifier]);
        }

    }else if(type == 2){ // STEP-2: We are doing deposit //? SUCCESS TRANSECTION
        balances[identifier] = balances[identifier] + amount;
        printf("%f\n", balances[identifier]);
    }
}

int main(){

    //STEP-i: DEFINE an array of floats
    float balances[100];

    //TAKE initial balances from user as input BALCNES
    for(int i=0; i<100; i++){
        scanf("%f", &balances[i]);
    }

    //STEP-ii: TAKE three values: an integer (customer identifier), an integer (transaction type), and a float (transaction amount) from user.
   
    int indentifier, type;
    float amount;

    scanf("%d %d %f", &indentifier, &type, &amount);

    //STEP-iii: Call the updateBalance function passing these values. If the transaction is a withdrawal and the withdrawal amount is exceeding the available balance then print "Not sufficient balance" and do not activate the withdrawal.
    updatedBalance(balances, indentifier, type, amount);

}