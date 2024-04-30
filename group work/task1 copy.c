
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
    
    int i=0;

    for(i=0; i<m; i++){

        scanf("%d", &arr[i]);

        if(arr[i] > 0){
            arr[i] = arr[i] * -1;
        }
    }

    for (i; i < m; i++)
    {   
        scanf("%d", &arr[i]);
        if(arr[i] < 0){
            arr[i] = arr[i] * -1;
        }
    }

    for (i; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0){
            arr[i] = arr[i] * -1;
        }
    }


    int sum = 0;

    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("%d\n", sum);
}


