#include<stdio.h>

int coffe_maker(int water, int powder){
    int coffe = water + powder;
    return coffe;
}


void menu(){
    printf("Couple Resturant\n");
    printf("1. Coffe\n");
    printf("2. Tea\n");
    printf("3. Cake\n");
    printf("4. Biscuit\n");
    printf("5. Water\n");
    printf("6. Juice\n");
}




int main(){
    
    int result = coffe_maker(2, 3);

    printf("Coffe: %d\n", result);

    menu();

    return 0;
}