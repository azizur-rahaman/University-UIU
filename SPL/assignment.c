#include<stdio.h>

#define N 3


struct DateOfBirth{
    int day;
    int month;
    int year;
};

typedef struct DateOfBirth dobb;
struct Player{
    char name[100];
    int id;
    int type;
    double kpi;
    dobb dob;

};

void sortByKPI(struct Player p[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(p[j].kpi > p[j+1].kpi){
                struct Player temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", p[i].name);
        printf("Id: %d\n", p[i].id);
        printf("Type: %d\n", p[i].type);
        printf("KPI: %lf\n", p[i].kpi);
        printf("Date of birth: %d-%d-%d\n", p[i].dob.day, p[i].dob.month, p[i].dob.year);
    
    }
}



void earchById(struct Player p[], int n, int id){
    for (int i=0; i<n; i++){
        if(p[i].id == id){
            printf("Name: %s\n", p[i].name);
            printf("Id: %d\n", p[i].id);
            printf("Type: %d\n", p[i].type);
            printf("KPI: %lf\n", p[i].kpi);
            printf("Date of birth: %d-%d-%d\n", p[i].dob.day, p[i].dob.month, p[i].dob.year);
        }
    }
}


void sortByAge(struct Player p[], int n){
    for (size_t i = 0; i < n; i++)
    {
        int totalDayI = p[i].dob.year*365 + p[i].dob.month*30 + p[i].dob.day;

        for (int j = 0; i < n; j++)
        {
            int totalDayJ = p[j].dob.year*365 + p[j].dob.month*30 + p[j].dob.day;
            
            if(totalDayI > totalDayJ){
               struct Player temp = p[i];
               p[i] = temp;
               p[i] = p[j];
               p[j] = temp;
            }
        }
        
    }
    
}


int main(){

    struct Player p[N];
    for (int i = 0; i < N; i++)
    {
        printf("############## Student %d Information  ############## %d\n: ", i+1);
        printf("Name: ");
        scanf("%s", p[i].name);
        printf("Id: ");
        scanf("%d", &p[i].id);
        printf("Type: ");
        scanf("%d", &p[i].type);
        printf("KPI: ");
        scanf("%lf", &p[i].kpi);

        printf("<--------- Date of birth  ---------> %d\n: ", i+1);
        printf("Day: ");
        scanf("%d", &p[i].dob.day);
        printf("Month %d: ", i+1);
        scanf("%d", &p[i].dob.month);
        printf("Year %d: ", i+1);
        scanf("%d", &p[i].dob.year);
    }
    
    printf("\n\n");
    printf("=== Sort by KPI Execution Start ===");
    sortByKPI(p, N);
    printf("=== Sort by KPI Execution End ===");


    printf("\n\n");
    printf("=== Search by ID Execution Start ===");
    printf("Id to search: ");
    int id = 0;
    scanf("%d", &id);
    searchById(p, N, id);
    printf("=== Sort by KPI Execution End ===");
    

    printf("\n\n");
    printf("=== Sort by Age Execution Start ===");


    sortByAge(p, N);
    printf("=== Sort by Age Execution End ===");


    return 0;
    

}