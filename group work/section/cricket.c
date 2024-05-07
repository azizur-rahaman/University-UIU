#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/// Structure
typedef struct BangladeshCricketTeam
{

    char fullName[100];
    int age;
    char playerRole[50];
    int debutYear;
    int odiMatch;
    int testMatch;
    int t20Match;
    int totalRuns;
    int highestRun;
    int numberOf50s;
    int numberOf100s;
    char status[30];

} bct;

/// 1.ShowAll Players
void viewPlayers(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    printf("\nShowing All Players :-:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        puts(player[i].fullName);
        printf("%d\n", player[i].age);
        puts(player[i].playerRole);
        printf("%d\n", player[i].debutYear);
        printf("%d\n", player[i].odiMatch);
        printf("%d\n", player[i].testMatch);
        printf("%d\n", player[i].t20Match);
        printf("%d\n", player[i].totalRuns);
        printf("%d\n", player[i].highestRun);
        printf("%d\n", player[i].numberOf50s);
        printf("%d\n", player[i].numberOf100s);
        puts(player[i].status);
        printf("\n\n");
    }
}

/// 2.Show A Particular player information (Provide Player Name)

void playerByName(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    char searchN[51];
    printf("Enter your player name: ");
    scanf(" %[^\n]s", &searchN);

    for (int i = 0; i < n; i++)
    {

        if (strcmp(searchN, player[i].fullName) == 0)
        {
            printf("\n");
            puts(player[i].fullName);
            printf("%d\n", player[i].age);
            puts(player[i].playerRole);
            printf("%d\n", player[i].debutYear);
            printf("%d\n", player[i].odiMatch);
            printf("%d\n", player[i].testMatch);
            printf("%d\n", player[i].t20Match);
            printf("%d\n", player[i].totalRuns);
            printf("%d\n", player[i].highestRun);
            printf("%d\n", player[i].numberOf50s);
            printf("%d\n", player[i].numberOf100s);
            puts(player[i].status);
            printf("\n\n");
            break;
        }
    }
}

/// 3.Show the MOST Experienced Player (MEP)
void mep(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    int sum = 0, minPlay = 0, j = 0;

    for (int i = 0; i < n; i++)
    {
        sum += player[i].odiMatch + player[i].testMatch + player[i].t20Match;

        if (sum > minPlay)
        {
            minPlay = sum;
            j = i;
        }
    }

    printf("\nThe player who played most matches among others:  ");
    puts(player[j].fullName);
}

/// 4.Show the Most Senior Player (MSP)
void msp(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    int msp = 10000, j = 0;

    for (int i = 0; i < n; i++)
    {
        if (msp > player[i].debutYear)
        {
            msp = player[i].debutYear;
            j = i;
        }
    }

    printf("\nThe player who started playing International Cricket early among others: ");
    puts(player[j].fullName);
}

/// 5.Show the New Commer Player (NCP)
void nsp(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    int j = 0, minAge = 100000;
    for (int i = 0; i < n; i++)
    {
        if (minAge > player[i].age)
        {
            minAge = player[i].age;
            j = i;
        }
    }

    printf("\nThe player whose age is lower than all other players: ");
    puts(player[j].fullName);
}

/// 6.Show the Top Scorer Player (TSP)
void tsp(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    int topScore = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (topScore < player[i].totalRuns)
        {
            topScore = player[i].totalRuns;
            j = i;
        }
    }
    printf("\nThe player whose total runs are highest among all: ");
    puts(player[j].fullName);
}

/// 7.Show the Hard Hitter Player (HHP)
void hhp(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    int hardHitter = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        int avg = player[i].highestRun / (player[i].odiMatch + player[i].testMatch + player[i].t20Match);
        if (hardHitter > avg)
            hardHitter = avg;
        j = i;
    }
    printf("\nThe player whose average run per match is highest among all players: ");
    puts(player[j].fullName);
}

/// 8.Show All Former Players (AFP)
void afp(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    char ch[] = "Retired";
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ch, player[i].status) == 0)
        {
            j = i;
            printf("\nThe players who have been retired from International matches: ");
            puts(player[j].fullName);
        }
    }
}

/// 9.Show the MOST Valuable Player (MVP)
void mvp(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    float value = 0;
    float lowVal = 0;
    int j = 0;
    char ch[] = "Allrounder";
    int allrounder = 0;

    for (int i = 0; i < n; i++)
    {
        allrounder = (strcmp(ch, player[i].playerRole) == 0) ? 35 : 0;

        float match = (player[i].odiMatch + player[i].testMatch + player[i].t20Match) * 1.0;
        value = player[i].age + match + player[i].totalRuns + player[i].highestRun + player[i].numberOf50s + player[i].numberOf100s + (player[i].totalRuns / match) + (player[i].highestRun / (player[i].age) * 1.0) + allrounder;

        if (lowVal < value)
        {
            lowVal = value;
            j = i;
        }
    }

    printf("\nThe player whose value is higher than all other players: ");
    puts(player[j].fullName);
}

/// 10.Show the All rounders
void allRounder(struct BangladeshCricketTeam player[], int n)
{
    system("cls");
    char ch[] = "Allrounder";
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ch, player[i].playerRole) == 0)
        {
            j = i;
            printf("\nShowing Allrounder player: ");
            puts(player[j].fullName);
        }
    }
}
/// 11.Exit/Quit

void window()
{
    printf("\n");
}

int main()
{
    system("cls");
    window();
    int listlength;
    bct player[100];

    char filename[20];
    int n;

    printf("Please enter your filename: ");
    gets(filename);

    FILE *fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("\nYour provided filename doesn't exist in the same folder :)\nPlease recheck the the folder.\nThanks!\n");
    }
    else
    {

        int i = 0;
        while (!feof(fptr))
        {
            fscanf(fptr, " %[^\n]", player[i].fullName);
            fgetc(fptr);
            fscanf(fptr, "%d", &player[i].age);
            fscanf(fptr, " %[^\n]", player[i].playerRole);
            fscanf(fptr, "%d", &player[i].debutYear);
            fscanf(fptr, "%d", &player[i].odiMatch);
            fscanf(fptr, "%d", &player[i].testMatch);
            fscanf(fptr, "%d", &player[i].t20Match);
            fscanf(fptr, "%d", &player[i].totalRuns);
            fscanf(fptr, "%d", &player[i].highestRun);
            fscanf(fptr, "%d", &player[i].numberOf50s);
            fscanf(fptr, "%d", &player[i].numberOf100s);
            fscanf(fptr, " %[^\n] ", player[i].status);
            i++;
            listlength++;
        }
        fclose(fptr);
    }

    /// infinite loop

    do
    {

        printf("\nHey! Choice is yours :-:\n");
        printf("1. Show All Players\n2. Show A Particular player information (Provide Player Name)\n3. Show the MOST Experienced Player (MEP)\n4. Showt he Most Senior Player (MSP)\n5. Show the New Commer Player (NCP)\n6. Show the Top Scorer Player (TSP)\n7. Show the Hard Hitter Player (HHP)\n8. Show All Former Players (AFP)\n9. Show the MOST Valuable Player (MVP)\n10. Show the All rounders\n11. Exit/Quit\n");

        printf("\nYour choice: ");
        scanf("%d", &n);

        if (n == 1)
            viewPlayers(player, listlength);

        else if (n == 2)
            playerByName(player, listlength);

        else if (n == 3)
            mep(player, listlength);

        else if (n == 4)
            msp(player, listlength);

        else if (n == 5)
            nsp(player, listlength);

        else if (n == 6)
            tsp(player, listlength);

        else if (n == 7)
            hhp(player, listlength);

        else if (n == 8)
            afp(player, listlength);

        else if (n == 9)
            mvp(player, listlength);

        else if (n == 10)
            allRounder(player, listlength);

        else if (n < 1 || n > 11)
            printf("\nInvalid Choice! Do this carefully\n");

    } while (n != 11);

    return 0;
}
