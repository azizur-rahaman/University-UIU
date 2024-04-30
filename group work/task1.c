
/*
Name1: Azizur Rahaman
ID1: 0112330455

Name2: Tain Tabassum
ID2: 0112330906
*/

#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {   
        int temp;
        scanf("%d", &temp);
        
        if(i< m){
            if(temp > 0){
                temp = temp * -1;
            }
        }else if(i< 2*m){
            if(temp < 0){
                temp = temp * -1;
            }
        }else {
            if(temp > 0){
                temp = temp * -1;
            }
        
        }

        sum += temp;
    }
    

    printf("%d\n", sum);
}


