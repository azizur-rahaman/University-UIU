#include <stdio.h>
#include <string.h>

int sum = 0;
int reverse(int x){

   if(x > 0){
        int r = x % 10;
        sum = sum * 10 + r;
        reverse(x / 10);
   }
   return  sum;
}

int main()
{
    
    printf("%d\n", reverse(1234));
}
