/*
Suppose you're developing a program for the United International University (UIU) Bookshop to [8] manage customer purchases. Your task is to create a C program that can store, manage and manipulate the bookshop's last 12 months' customer data. As it is the end of the year, the bookshop is giving a "best customer award" to the customers who purchased the most in the past year. Write a C program that will:
1. Store the following information of a customer in a structure.
(i) Name (ii) ID (iii) Number of times shopped, and (iv) An array of spent money in each of the shoppings. Use appropriate data types and variable names for all the features.
2. Take input for 100 customers from the user.
3. Calculate the average purchase for each customer (total money spent divided by the total
number of shopping).
4. To find the best customer, only consider the customers who have shopped more than 10 times. Among these selected customers, the customer having the best average purchase (calculated from (3)) will win the award. Print the customer's name who has won the award.

*/


#include <stdio.h>


// STEP-1: We will create a structure to store the customer's information.

struct Customer{
    char name[50];
    char id[50];
    int num_of_shopped_times;
    float spent_money[100];
    float average_purchase;
};

int main(){

    struct Customer customers[100];

    // STEP-2: We will take input for 100 customers from the user.

    for (int i = 0; i < 100; i++)
    {
        gets(customers[i].name);
        gets(customers[i].id);
        scanf("%d", &customers[i].num_of_shopped_times);

        for (int j = 0; j < customers[i].num_of_shopped_times; j++)
        {
            scanf("%f", &customers[i].spent_money[j]);
        }

        // STEP-3: Calculate the average purchase for each customer.

        float sum = 0.0;

        for (int j = 0; j < customers[i].num_of_shopped_times; j++)
        {
            sum = sum + customers[i].spent_money[j];
        }

        float average = sum / customers[i].num_of_shopped_times;

        customers[i].average_purchase = average;
        
    }


    // STEP-4: To find the best customer, only consider the customers who have shopped more than 10 times. Among these selected customers, the customer having the best average purchase (calculated from (3)) will win the award. Print the customer's name who has won the award.
    

    int index = 0;
    float max_average = customers[0].average_purchase;

    for(int i = 0; i<100; i++){ // Search for the best customer -> customer who has the best average purchase among the customers who have shopped more than 10 times.
        if(customers[i].num_of_shopped_times > 10){
            if(customers[i].average_purchase > max_average){
                index = i;
                max_average = customers[i].average_purchase;
            }
        }
    }

    printf("%s\n", customers[index].name);

}
