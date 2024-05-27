/*

 Write a C program that does the following: 
 • Declare an integer variable num and initialize it with any value. 
 • Declarae a pointer vriable and assign the address of num to it. 
 • Use the pointer to double the value of num. 
 • Print the value of num both before and after the modification. 

*/


#include <stdio.h>


int main(){
    int num = 10;
    int *p = &num;

    printf("Before: %d\n", num);
    *p = *p * 2;
    printf("After: %d\n", num);
}