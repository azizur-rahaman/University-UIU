#include<stdio.h>

struct demons {
 char name[60]; // Name of a demon
 int power; // Power of a demon
};


 int onlyAlphabets(char *input){

    for (int i = 0; input[i] != '\0'; i++)
    {
        if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')){
            continue;
        }else {
            return 0;
        }
    }

    return 1;
 }

  int Multiple_of_5(int x) {
    if(x % 5 == 0) return 1;
    else return 0;
  }

int main(){
    int n;
    scanf("%d", &n);

    struct demons demons[n];

    for (int i = 0; i < n; i++)
    {
        gets(demons[i].name);
        scanf("%d", &demons[i].power);  
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if(onlyAlphabets(demons[i].name) && Multiple_of_5(demons[i].power)){
            cnt++;
        }
    }
     
    printf("Resutl: %d\n", cnt);

    
}