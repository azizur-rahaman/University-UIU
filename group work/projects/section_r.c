/*
 Write team information here
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Cricketer
{
    char name[100];
    int age;
    int runs;
    int wickets;
    int ratings;
};

struct Cricketer team1[11], team2[11];

void updateRun()
{

    int team;
    printf("which team's player's run wish to be updated(a/b): ");

    char choice;
    scanf(" %c", &choice);
    fflush(stdin);

    char name[100];
    printf("Player Name: ");
    gets(name);

    int index = 0;

    if (choice == 'a')
    {
        for (int i = 0; i < 11; i++)
        {
            if (strcmp(team1[i].name, name) == 0)
            {
                index = i;
                break;
            }
        }
        printf("Enter Runs: ");
        scanf("%d", &team1[index].runs);
    }
    else
    {
        for (int i = 0; i < 11; i++)
        {
            if (strcmp(team2[i].name, name) == 0)
            {
                index = i;
                break;
            }
        }
        printf("Enter Runs: ");
        scanf("%d", &team2[index].runs);
    }
}

void displayTeam1Info()
{
    printf("################ Team 1 Information ################\n");
    for (int i = 0; i < 11; i++)
    {
        printf("Name: %s\n", team1[i].name);
        printf("Age: %d\n", team1[i].age);
        printf("Runs: %d\n", team1[i].runs);
        printf("Wickets: %d\n", team1[i].wickets);
        printf("Ratings: %d\n", team1[i].ratings);
        printf("\n");
    }
}

void displayTeam2Info()
{
    printf("################ Team 2 Information ################\n");
    for (int i = 0; i < 11; i++)
    {
        printf("Name: %s\n", team2[i].name);
        printf("Age: %d\n", team2[i].age);
        printf("Runs: %d\n", team2[i].runs);
        printf("Wickets: %d\n", team2[i].wickets);
        printf("Ratings: %d\n", team2[i].ratings);
        printf("\n");
    }
}


void YoungerPlayer()
{
    char choice;
    printf("Which Team younger player information you want to display?(a/b): ");
    scanf(" %c", &choice);

    int min = 100;
    int index = 0;

    if (choice == 'a')
    {
        for (int i = 0; i < 11; i++)
        {
            if (team1[i].age < min)
            {
                min = team1[i].age;
                index = i;
            }
        }
        printf("Name: %s\n", team1[index].name);
        printf("Age: %d\n", team1[index].age);
        printf("Runs: %d\n", team1[index].runs);
        printf("Wickets: %d\n", team1[index].wickets);
        printf("Ratings: %d\n", team1[index].ratings);
    }
    else
    {
        for (int i = 0; i < 11; i++)
        {
            if (team2[i].age < min)
            {
                min = team2[i].age;
                index = i;
            }
        }
        printf("Name: %s\n", team2[index].name);
        printf("Age: %d\n", team2[index].age);
        printf("Runs: %d\n", team2[index].runs);
        printf("Wickets: %d\n", team2[index].wickets);
        printf("Ratings: %d\n", team2[index].ratings);
    }
}

void MostRatedPlayerTeam1()
{
    int max = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (team1[i].ratings > max)
        {
            max = team1[i].ratings;
            index = i;
        }
    }

    printf("Name: %s\n", team1[index].name);
    printf("Age: %d\n", team1[index].age);
    printf("Runs: %d\n", team1[index].runs);
    printf("Wickets: %d\n", team1[index].wickets);
    printf("Ratings: %d\n", team1[index].ratings);

    FILE *p;
    p = fopen("score.txt", "w");
    fprintf(p, "%d %d\n", team1[index].ratings, index);
    fclose(p);
}

void MostRatedPlayerTeam2()
{
    int max = 0;
    int index = 0;

    for (int i = 0; i < 11; i++)
    {
        if (team2[i].ratings > max)
        {
            max = team2[i].ratings;
            index = i;
        }
    }

    printf("Name: %s\n", team2[index].name);
    printf("Age: %d\n", team2[index].age);
    printf("Runs: %d\n", team2[index].runs);
    printf("Wickets: %d\n", team2[index].wickets);
    printf("Ratings: %d\n", team2[index].ratings);

    FILE *p;
    p = fopen("score.txt", "a");
    fprintf(p, "%d %d\n", team2[index].ratings, index);
    fclose(p);
}

void ManofTheMatch()
{

    FILE *file;

    file = fopen("score.txt", "r");

    if (file == NULL)
    {
        printf("Error: score.txt file not found...!");
    }

    int runs1, index1, runs2, index2;
    fscanf(file, "%d %d", &runs1, &index1);
    fscanf(file, "%d %d", &runs2, &index2);


   

    printf("################ Man Of The Match ################\n");

    if (runs1 > runs2)
    {
        printf("Name: %s\n", team1[index1].name);
        printf("Age: %d\n", team1[index1].age);
        printf("Runs: %d\n", team1[index1].runs);
        printf("Wickets: %d\n", team1[index1].wickets);
        printf("Ratings: %d\n", team1[index1].ratings);
    }
    else
    {

        printf("Name: %s\n", team2[index2].name);
        printf("Age: %d\n", team2[index2].age);
        printf("Runs: %d\n", team2[index2].runs);
        printf("Wickets: %d\n", team2[index2].wickets);
        printf("Ratings: %d\n", team2[index2].ratings);
    }


    fclose(file);
}

int main()
{

    FILE *fil;
    fil = fopen("LogIn.txt", "r");

    char name[100];
    char password[100];
    fscanf(fil, "%s %s", &name, &password);

    do
    {
        char user[100];
        char pass[100];

        system("cls");
        printf("################ Login Page ################\n");
        printf("Username: ");
        gets(user);
        printf("Password: ");
        gets(pass);

        if (strcmp(user, name) == 0 && strcmp(pass, password) == 0)
        {
            printf("Login Successful\n");
            break;
        }
        else
        {
            printf("Invalid Credentials\n");
            getch();
        }

        system("cls");
    } while (true);

    fclose(fil);

    FILE *p;
    p = fopen("Team1.txt", "r");

    if (p == NULL)
    {
        printf("Error in opening Team1.txt File\n");
        exit(1);
    }

    for (int i = 0; i < 11; i++)
    {
        fscanf(p, "%s %d %d %d", team1[i].name, &team1[i].age, &team1[i].runs, &team1[i].wickets);

        int wickets = team1[i].wickets;
        int runs = team1[i].runs;
        int ratings = (wickets * 8);

        if (runs > 75)
        {
            ratings += 24;
        }
        else if (runs > 50 && runs <= 75)
        {
            ratings += 20;
        }
        else if (runs >= 20 && runs <= 50)
        {
            ratings += 12;
        }
        else
        {
            ratings += 4;
        }

        team1[i].ratings = ratings;
    }
    fclose(p);

    FILE *pp = fopen("Team2.txt", "r");

    if (pp == NULL)
    {
        printf("Error in opening Team2.txt File\n");
        exit(1);
    }

    for (int i = 0; i < 11; i++)
    {
        fscanf(pp, "%s %d %d %d", team2[i].name, &team2[i].age, &team2[i].runs, &team2[i].wickets);
        team2[i].ratings = calculate_ratings(team2[i].runs, team2[i].wickets);
    }

    fclose(pp);

    do
    {
        char ch;
        system("cls");

        printf("<--------- Welcome to the Cricket Tournament --------->\n");
        printf("1. Display Team 1 Information\n");
        printf("2. Display Team 2 Information\n");
        printf("3. Team Player Runs\n");
        printf("4. Younger Player Information\n");
        printf("5. Most Rated Player Team 1\n");
        printf("6. Most Rated Player Team 2\n");
        printf("7. Man of the Match\n");

        fflush(stdin);
        printf("Enter: ");
        scanf(" %c", &ch);

        if (ch == 'q' || ch == 'Q')
        {
            printf("Thank you");
            exit(0);
        }

        switch (ch)
        {
        case '1':
            displayTeam1Info();
            break;
        case '2':
            displayTeam2Info();
            break;
        case '3':
            updateRun();
            break;
        case '4':
            YoungerPlayer();
            break;
        case '5':
            MostRatedPlayerTeam1();
            break;
        case '6':
            MostRatedPlayerTeam2();
            break;
        case '7':
            ManofTheMatch();
            break;
        default:
            printf("Invalid Choice\n");
        }
        getch();
    } while (true);
}
