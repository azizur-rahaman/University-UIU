#include <stdio.h>

struct Cricketer
{
    char name[50];
    char country[50];
    char type[10];
    int wickets_taken[30];
    int runs_scored[30];
    int total_match_played;
    float overall_performace;
};

int main()
{

    struct Cricketer cricketer[100];

    for (int i = 0; i < 100; i++)
    {
        printf("Name: ");
        scanf("%s", &cricketer[i].name);
        printf("Country: ");
        scanf("%s", &cricketer[i].country);
        printf("Type: ");
        scanf("%s", &cricketer[i].type);
        printf("Total match played: ");
        scanf("%d", &cricketer[i].total_match_played);
        
        printf("wickets taken: ");
        for (int j = 0; j < 30; j++)
        {
            scanf("%d", &cricketer[i].wickets_taken[j]);
        }

        printf("runs taken: ");
        for (int j = 0; j < 30; j++)
        {
            scanf("%d", &cricketer[i].runs_scored[j]);
        }
        

        if (strcmp(cricketer[i].type, "bowler") == 0)
        {
            int sum = 0;
            for (int j = 0; j < 30; j++)
            {
                sum += cricketer[i].wickets_taken[j];
            }
            cricketer[i].overall_performace = sum / cricketer[i].total_match_played;
        }else {
            int sum = 0;

            for (int j = 0; j < 30; j++)
            {
                sum += cricketer[i].runs_scored[j];
            }

            cricketer[i].overall_performace = sum / cricketer[i].total_match_played;
        }

    }

    int index = 0;
    int hightest_performace = cricketer[index].overall_performace;

    for (int i = 1; i < 100; i++)
    {
        if (cricketer[i].overall_performace > hightest_performace)
        {
            hightest_performace = cricketer[i].overall_performace;
            index = i;
        }
    }


    printf("Cricketer of the year: %s", cricketer[index].name);
    
}