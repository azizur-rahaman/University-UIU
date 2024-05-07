#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Cricketer {
    char name[100];
    int age;
    int runs;
    int wickets;
    int ratings;
};

struct Cricketer team1[11],team2[11];


int calculate_ratings(int runs, int wickets) {
    int ratings = (wickets * 8);

    if(runs > 75){
        ratings += 24;
    }else if(runs > 50){
        ratings += 20;
    }else if(runs >= 20){
        ratings += 12;
    }else {
        ratings += 4;
    }
    
    return ratings;
}

void updateRun(){

    int team;
    printf("which team's player's run you wish to be updated(a/b): ");

    char choice;
    scanf("%c", &choice);

    char name[100];
    printf("Player Name: ");
    gets(name);

    int index = 0;

    if(choice == 'a'){
        for(int i=0; i<11; i++){
            if(strcmp(team1[i].name, name) == 0){
                index = i;
                break;
            }  
        }

        scanf("%d", &team1[index].runs);

    }else {
        for(int i=0; i<11; i++){
            if(strcmp(team2[i].name, name) == 0){
                index = i;
                break;
            }  
        }

        scanf("%d", &team2[index].runs);
    
    }

}

void displayTeam1Info(){
    for(int i=0; i<11; i++){
        printf("Name: %s\n", team1[i].name);
        printf("Age: %d\n", team1[i].age);
        printf("Runs: %d\n", team1[i].runs);
        printf("Wickets: %d\n", team1[i].wickets);
        printf("Ratings: %d\n", team1[i].ratings);
    
    }
}

void displayTeam2Info(){
    for(int i=0; i<11; i++){
        printf("Name: %s\n", team2[i].name);
        printf("Age: %d\n", team2[i].age);
        printf("Runs: %d\n", team2[i].runs);
        printf("Wickets: %d\n", team2[i].wickets);
        printf("Ratings: %d\n", team2[i].ratings);
    
    }
}

void displayManOfTheMatch(int index){
    printf("<----- Man Of The Match ----->\n");
    printf("Name: %s\n", team1[index].name);
    printf("Age: %d\n", team1[index].age);
    printf("Runs: %d\n", team1[index].runs);
    printf("Wickets: %d\n", team1[index].wickets);
    printf("Ratings: %d\n", team1[index].ratings);
}

void YoungerPlayer(){
    char choice;
    printf("Which Team(1/2) younger player information you want to display?: ");
    scanf("%c", &choice);

    int min = 100;
    int index = 0;

    if(choice == 'a'){
        for(int i=0; i<11; i++){
            if(team1[i].age < min){
                min = team1[i].age;
                index = i;
            }
        }
        printf("Name: %s\n", team1[index].name);
        printf("Age: %d\n", team1[index].age);
        printf("Runs: %d\n", team1[index].runs);
        printf("Wickets: %d\n", team1[index].wickets);
        printf("Ratings: %d\n", team1[index].ratings);
    }else {
        for(int i=0; i<11; i++){
            if(team2[i].age < min){
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

void MostRatedPlayerTeam1(){
    int max = 0;
    int index = 0;

    for(int i=0; i<11; i++){
        if(team1[i].ratings > max){
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
    p = fopen("score.txt\n", "w");
    fprintf(p, "%d %d", team1[index].ratings, index);
}

void MostRatedPlayerTeam2(){
    int max = 0;
    int index = 0;

    for(int i=0; i<11; i++){
        if(team2[i].ratings > max){
            max = team2[i].ratings;
            index = i;
        }
    }



    printf( "Name: %s\n", team2[index].name);
    printf("Age: %d\n", team2[index].age);
    printf("Runs: %d\n", team2[index].runs);
    printf("Wickets: %d\n", team2[index].wickets);
    printf("Ratings: %d\n", team2[index].ratings);

    FILE *p;
    p = fopen("score.txt", "a");
    fprintf(p, "%d %d\n",team2[index].ratings, index);
}

void ManofTheMatch(){

    FILE *pt;

    pt = fopen("score.txt", "r");
    int ratings1;
    int index1;
    fscanf(pt, "%d %d", &ratings1, &index1);

    int ratings2;
    int index2;
    fscanf(pt, "%s %d", &ratings2, &index2);


    if(ratings1 > ratings2){
        displayManOfTheMatch(index1);
    }else {
        displayManOfTheMatch(index2);
    }
    
}


void showMenu(){
    printf("<--------- Welcome to the Cricket Tournament --------->\n");
    printf("1. Display Team 1 Information\n");
    printf("2. Display Team 2 Information\n");
    printf("3. Team Player Runs\n");
    printf("4. Younger Player Information\n");
    printf("5. Most Rated Player Team 1\n");
    printf("6. Most Rated Player Team 2\n");
    printf("7. Man of the Match\n");
}

int main(){

    FILE *loginInfo;
    loginInfo = fopen("LogIn.txt", "r");

    char username[100];
    char password[100];
    fscanf(loginInfo, "%s %s", &username, &password);

    do {
        char user[100];
        char pass[100];
        
        system("cls");
        printf("<--------- Welcome to the Login Page --------->\n");
        printf("Username: ");
        gets(user);
        printf("Password: ");
        gets(pass);

        if(strcmp(user,username) == 0 && strcmp(pass, password) == 0){
            printf("Login Successful\n");
            break;
        }else{
            printf("Invalid Credentials\n");
        }

        system("cls");
    }while (1);


    FILE *fptr;
    fptr = fopen("Team1.txt", "r");


    if(fptr == NULL){
        printf("Error in opening file");
        exit(1);
    }

    for(int i=0; i<11; i++){
        fscanf(fptr, "%s %d %d %d", &team1[i].name, &team1[i].age, &team1[i].runs, &team1[i].wickets);
        team1[i].ratings = calculate_ratings(team1[i].runs, team1[i].wickets);
    }
    fclose(fptr);

    fptr = fopen("Team2.txt", "r");

    for (int i = 0; i < 11; i++)
    {
        fscanf(fptr, "%s %d %d %d", &team2[i].name, &team2[i].age, team2[i].runs, team2[i].wickets);
        team2[i].ratings = calculate_ratings(team2[i].runs, team2[i].wickets);
    }
    fclose(fptr);


    char ch;
    do{
        system("cls");
        showMenu();
        printf("Enter: ");
        scanf("%c", &ch);

        if(ch == 'q' || 'Q'){
            printf("Thank you");
            exit(0);
        }else {
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
            }
        }
    }while (1);
}