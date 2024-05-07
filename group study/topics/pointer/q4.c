#include<stdio.h>



int main(){

     
    int num = 10;
    int *ptr;

    ptr = &num;
    
    printf("before: %d\n", num);
    *ptr = *ptr * 2;
    printf("after %d\n", num);

}