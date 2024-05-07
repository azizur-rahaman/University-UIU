#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d", &n);

    bool flag = true;

    if(flag == true){
        int temp;
        scanf("%d", &temp);

        if(temp == n){
            printf("Right, Player-2 wins!\n");
            flag = false;
        }else{
            printf("Wrong, 2 Chance(s) Left!\n");
        }
    }

    if(flag == true){
        int temp;
        scanf("%d", &temp);

        if(temp == n){
            printf("Right, Player-2 wins!\n");
            flag = false;
        }else{
            printf("Wrong, 1 Chance(s) Left!\n");
        }
    }

        if(flag == 1){
        int temp;
        scanf("%d", &temp);

        if(temp == n){
            printf("Right, Player-2 wins!\n");
        }else{
            printf("Wrong, 0 Chance(s) Left!\n");
            printf("Player-1 wins!\n");
        }
    }
    

}