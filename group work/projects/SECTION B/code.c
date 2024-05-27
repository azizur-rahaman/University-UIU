#include <stdio.h>
#include <string.h>

struct PlayerInfo
{
    char name[100];
    int age;
    char role[50];
    int odi_matches;
    int total_runs;
    int highest_run;
};

struct PlayerInfo cricket_team[11];

void showAllPlayers()
{
    for (int i = 0; i < 11; i++)
    {
        printf("Name: %s\n", cricket_team[i].name);
        printf("Age: %d\n", cricket_team[i].age);
        printf("Role: %s\n", cricket_team[i].role);
        printf("ODI Matches: %d\n", cricket_team[i].odi_matches);
        printf("Total Runs: %d\n", cricket_team[i].total_runs);
        printf("Highest Run: %d\n", cricket_team[i].highest_run);
        printf("\n");
    }
}

void showParticularPlayer()
{
    char name[100];
    fflush(stdin);
    printf("Enter Player Name: ");
    gets(name);

    for (int i = 0; i < 11; i++)
    {
        if (strcmp(cricket_team[i].name, name) == 0)
        {
            printf("Name: %s\n", cricket_team[i].name);
            printf("Age: %d\n", cricket_team[i].age);
            printf("Role: %s\n", cricket_team[i].role);
            printf("ODI Matches: %d\n", cricket_team[i].odi_matches);
            printf("Total Runs: %d\n", cricket_team[i].total_runs);
            printf("Highest Run: %d\n", cricket_team[i].highest_run);
            printf("\n");
            return;
        }
    }

    printf("Player not found\n");
}

void showMEP()
{
    int max = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (cricket_team[i].odi_matches > max)
        {
            max = cricket_team[i].odi_matches;
            index = i;
        }
    }

    printf("Most Experienced Player\n");
    printf("Name: %s\n", cricket_team[index].name);
    printf("Age: %d\n", cricket_team[index].age);
    printf("Role: %s\n", cricket_team[index].role);
    printf("ODI Matches: %d\n", cricket_team[index].odi_matches);
    printf("Total Runs: %d\n", cricket_team[index].total_runs);
    printf("Highest Run: %d\n", cricket_team[index].highest_run);
    printf("\n");
}

void showNCP()
{
    int min = 1000;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (cricket_team[i].age < min)
        {
            min = cricket_team[i].age;
            index = i;
        }
    }

    printf("New Commer Player\n");
    printf("Name: %s\n", cricket_team[index].name);
    printf("Age: %d\n", cricket_team[index].age);
    printf("Role: %s\n", cricket_team[index].role);
    printf("ODI Matches: %d\n", cricket_team[index].odi_matches);
    printf("Total Runs: %d\n", cricket_team[index].total_runs);
    printf("Highest Run: %d\n", cricket_team[index].highest_run);
    printf("\n");
}

void showTSP()
{
    int max = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (cricket_team[i].total_runs > max)
        {
            max = cricket_team[i].total_runs;
            index = i;
        }
    }

    printf("Top Scorer Player\n");
    printf("Name: %s\n", cricket_team[index].name);
    printf("Age: %d\n", cricket_team[index].age);
    printf("Role: %s\n", cricket_team[index].role);
    printf("ODI Matches: %d\n", cricket_team[index].odi_matches);
    printf("Total Runs: %d\n", cricket_team[index].total_runs);
    printf("Highest Run: %d\n", cricket_team[index].highest_run);
    printf("\n");
}


void showHHP()
{
    int index = 0;
    int avg_run = cricket_team[index].total_runs / cricket_team[index].odi_matches;


    for (int i = 0; i < 11; i++)
    {   
        int temp = cricket_team[i].total_runs / cricket_team[i].odi_matches;

        if (temp > avg_run)
        {
            avg_run = temp;
            index = i;
        }
    }

    printf("Hard Hitter Player\n");
    printf("Name: %s\n", cricket_team[index].name);
    printf("Age: %d\n", cricket_team[index].age);
    printf("Role: %s\n", cricket_team[index].role);
    printf("ODI Matches: %d\n", cricket_team[index].odi_matches);
    printf("Total Runs: %d\n", cricket_team[index].total_runs);
    printf("Highest Run: %d\n", cricket_team[index].highest_run);
    printf("\n");
}


void showHRTP()
{
    int max = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (cricket_team[i].highest_run > max)
        {
            max = cricket_team[i].highest_run;
            index = i;
        }
    }

    printf("Highest Run Taker Player\n");
    printf("Name: %s\n", cricket_team[index].name);
    printf("Age: %d\n", cricket_team[index].age);
    printf("Role: %s\n", cricket_team[index].role);
    printf("ODI Matches: %d\n", cricket_team[index].odi_matches);
    printf("Total Runs: %d\n", cricket_team[index].total_runs);
    printf("Highest Run: %d\n", cricket_team[index].highest_run);
    printf("\n");
}

void showMVP()
{
    int max = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        int value = cricket_team[i].age + cricket_team[i].odi_matches + cricket_team[i].total_runs + cricket_team[i].highest_run + (+ cricket_team[i].total_runs/+ cricket_team[i].odi_matches) + (cricket_team[i].highest_run / cricket_team[i].age);

        if(strcmp(cricket_team[i].role, "AllRounder") == 0){
            value += 50;
        }
        
        if (value > max)
        {
            max = value;
            index = i;
        }
    }

    printf("Most Valuable Player\n");
    printf("Name: %s\n", cricket_team[index].name);
    printf("Age: %d\n", cricket_team[index].age);
    printf("Role: %s\n", cricket_team[index].role);
    printf("ODI Matches: %d\n", cricket_team[index].odi_matches);
    printf("Total Runs: %d\n", cricket_team[index].total_runs);
    printf("Highest Run: %d\n", cricket_team[index].highest_run);
    printf("\n");
}


void showAllrounders()
{
    for (int i = 0; i < 11; i++)
    {
        if (strcmp(cricket_team[i].role, "Allrounder") == 0)
        {
            printf("Name: %s\n", cricket_team[i].name);
            printf("Age: %d\n", cricket_team[i].age);
            printf("Role: %s\n", cricket_team[i].role);
            printf("ODI Matches: %d\n", cricket_team[i].odi_matches);
            printf("Total Runs: %d\n", cricket_team[i].total_runs);
            printf("Highest Run: %d\n", cricket_team[i].highest_run);
            printf("\n");
        }
    }
}


void showMenu()
{
    printf("1. Show All Players\n");
    printf("2. Show A Particular player information (Provide Player Name)\n");
    printf("3. Show the MOST Experienced Player (MEP)\n");
    printf("4. Show the New Commer Player (NCP)\n");
    printf("5. Show the Top Scorer Player (TSP)\n");
    printf("6. Show the Hard Hitter Player (HHP)\n");
    printf("7. Show the Highest Run Taker Player (HRTP)\n");
    printf("8. Show the MOST Valuable Player (MVP)\n");
    printf("9. Show the Allrounders\n");
    printf("10. Exit/Quit\n");
}

int main()
{
    FILE *file;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Input File not found\n");
        return 0;
    }


    for (int i = 0; i < 11; i++)
    {
        fscanf(file, "%[^\n]", &cricket_team[i].name);
        fscanf(file, "%d\n", &cricket_team[i].age);
        fscanf(file, "%[^\n]", &cricket_team[i].role);
        fscanf(file, "%d\n", &cricket_team[i].odi_matches);
        fscanf(file, "%d\n", &cricket_team[i].total_runs);
        fscanf(file, "%d\n", &cricket_team[i].highest_run);
    }
    fclose(file);

    do
    {
        showMenu();

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showAllPlayers();
            break;
        case 2:
            showParticularPlayer();
            break;
        case 3:
            showMEP();
            break;
        case 4:
            showNCP();
            break;
        case 5:
            showTSP();
            break;
        case 6:
            showHHP();
            break;
        case 7:
            showHRTP();
            break;
        case 8:
            showMVP();
            break;
        case 9:
            showAllrounders();
            break;
        case 10:
            exit(0);
        }

        printf("Any key to continue....");
        getch();

        system("cls");

    } while (1);
}
