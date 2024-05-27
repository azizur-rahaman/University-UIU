#include<stdio.h>



struct demons {
    char name[60]; // Name of a demon int power; //
    int power;
};


int onlyAlphabets(char *input){
    for (size_t i = 0; input[i] != '\0'; i++)
    {
        if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}



int Multiple_of_5(int x) {
    if(x % 5 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
int n;
scanf("%d", &n);

struct demons demon[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%s", demon[i].name);
        scanf("%d", &demon[i].power);
        
    }

    int cnt = 0;

    for (size_t i = 0; i < n; i++)
    {
        if(onlyAlphabets(demon[i].name) == 0 && Multiple_of_5(demon[i].power) == 0){
            continue;
        }
        else{
            cnt++;
        }
    }


printf("%d", cnt);

}