#include<stdio.h>


int fibrecurson(int n){

    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }

    return fibrecurson(n-1) + fibrecurson(n-2);
}

int main(){

    int n;
    scanf("%d", &n);

    int x = fibrecurson(n-1);

    printf("%d\n", x);

}