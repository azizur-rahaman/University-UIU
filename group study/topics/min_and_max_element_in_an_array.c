// Write a C program to 
// find maximum and minimum element in an array.


#include<stdio.h>

int main(){

    int arr[6];

    for(int i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<6; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);


}