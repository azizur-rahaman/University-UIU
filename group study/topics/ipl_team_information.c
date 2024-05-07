#include<stdio.h>

struct TeamInfo{
    char teamName[50];
    int matchesPlayed;
    int matchesWon;
    int matchesLost;
    float points;
};


int main(){
    
struct TeamInfo teaminformation[10];

int arr[10];


for (int i = 0; i < 10; i++)
{
    scanf("%s", &teaminformation[i].teamName);
    scanf("%d",&teaminformation[i].matchesPlayed);
    scanf("%d",&teaminformation[i].matchesWon);
    scanf("%d",&teaminformation[i].matchesLost);
    scanf("%f",&teaminformation[i].points);
}


for (int i = 0; i < 10; i++)
{
    printf("%s\n",teaminformation[i].teamName);
    printf("%d\n",teaminformation[i].matchesPlayed);
    printf("%d\n",teaminformation[i].matchesWon);
    printf("%d\n",teaminformation[i].matchesLost);
    printf("%f\n",teaminformation[i].points);
}


return 0;


}