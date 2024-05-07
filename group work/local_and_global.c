#include<stdio.h>

int global_and_local = 10;

void explicit(){
    extern int global_and_local;
    printf("Explicit: %d\n", global_and_local);
}

int main(){
    
    printf("Before: %d\n", global_and_local);
    int global_and_local = 20;
    printf("After: %d\n", global_and_local);

    explicit();
    return 0;
}