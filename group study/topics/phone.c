#include<stdio.h>

struct TeamMateInfo{
    char name[50];
    int id;
    int score;
    float cgpa;
    float attendance;
};


struct  GroupInfo{
    struct TeamMateInfo team1;
    struct TeamMateInfo team2;
};



int main(){

    struct GroupInfo groupinformation[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter team mate 1 information\n");
        printf("Name: ");
        scanf("%s", &groupinformation[i].team1.name);
        printf("ID: ");
        scanf("%d",&groupinformation[i].team1.id);
        printf("Score: ");
        scanf("%d",&groupinformation[i].team1.score);
        printf("CGPA: ");
        scanf("%f",&groupinformation[i].team1.cgpa);
        printf("Attendance: ");
        scanf("%f",&groupinformation[i].team1.attendance);

        printf("Enter team mate 2 information\n");
        printf("Name: ");
        scanf("%s", &groupinformation[i].team2.name);
        printf("ID: ");
        scanf("%d",&groupinformation[i].team2.id);
        printf("Score: ");
        scanf("%d",&groupinformation[i].team2.score);
        printf("CGPA: ");
        scanf("%f",&groupinformation[i].team2.cgpa);
        printf("Attendance: ");
        scanf("%f",&groupinformation[i].team2.attendance);
    }


    for (int i = 0; i < 5; i++)
    {
        printf("Groups %d Information:\n\n", i+1);
        printf("Team mate 1 Information\n");
        printf("Name: ");
        printf("%s\n",groupinformation[i].team1.name);
        printf("Id: ");
        printf("%d\n",groupinformation[i].team1.id);
        printf("Score: ");
        printf("%d\n",groupinformation[i].team1.score);
        printf("CGPA: ");
        printf("%f\n",groupinformation[i].team1.cgpa);
        printf("Attendance: ");
        printf("%f\n",groupinformation[i].team1.attendance);

        printf("Team Mate 2: \n");
        printf("Name: ");
        printf("%s\n",groupinformation[i].team2.name);
        printf("ID: ");
        printf("%d\n",groupinformation[i].team2.id);
        printf("Score: ");
        printf("%d\n",groupinformation[i].team2.score);
        printf("CGPA: ");
        printf("%f\n",groupinformation[i].team2.cgpa);
        printf("Attendance: ");
        printf("%f\n",groupinformation[i].team2.attendance);
    }

    
    return 0;
}