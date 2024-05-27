/*

1. Function take parameter as university name "UIU", print Life becoming hell in "UIU"
2. make a function to add 2 number

*/


#include<stdio.h>


void uiu(char name[]){
    printf("Life becoming hell in %s\n", name);
}



int add(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){

    char university[] = "UIU";

    uiu(university);

    int result = add(10, 20);
    printf("Sum: %d\n", add(30, 100));
    printf("Sum: %d\n", result);

}