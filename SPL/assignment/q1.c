
/*

Implement a function updateBalance that takes four parameters: an array of floats representing
customer balances, an integer representing the customer's unique identifier (which is the index of
the array), an integer representing the type of transaction (1 for withdrawal, 2 for deposit), and a
float representing the transaction amount. The function should update the customer's balance
based on the transaction type, ensuring that withdrawals do not result in a negative balance.
i) In the main function, initialize an array of floats to store the initial balances of 100
customers. Take the initial balances from user as input.
ii) Take three values: an integer (customer identifier), an integer (transaction type), and a float
(transaction amount) from user.
iii) Call the updateBalance function passing these values. If the transaction is a withdrawal and
the withdrawal amount is exceeding the available balance then print “Not sufficient balance”
and do not activate the withdrawal.
iv) If transaction is successful in step (iii), print the updated balance of the customer.


*/



#include<stdio.h>


void updateBalance(float balances[], int id, int type, float amount){
    if(type == 1){
        if(balances[id] < amount){
            printf("Not sufficient balance\n");
        }
        else{
            balances[id] -= amount;
            printf("Updated balance: %f\n", balances[id]);
        }
    }
    else if(type == 2){
        balances[id] += amount;
        printf("Updated balance: %f\n", balances[id]);
    }
}


int main(){
    float balances[100];
    for (int i = 0; i < 100; i++)
    {
        printf("Enter balance for customer %d: ", i);
        scanf("%f", &balances[i]);
    }
    
    int id, type;
    float amount;
    printf("Enter customer id: ");
    scanf("%d", &id);
    printf("Enter transaction type (1 for withdrawal, 2 for deposit): ");
    scanf("%d", &type);
    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    updateBalance(balances, id, type, amount);
    
    return 0;
}