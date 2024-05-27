#include <stdio.h>
#include <string.h>

#define MAX_MEMBERS 100
#define MAX_CLUBS 10
#define MAX_CLUB_NAME_LENGTH 50
#define MAX_TIME_LENGTH 10
#define MAX_MEMBER_NAME_LENGTH 50
#define MAX_USERNAME_LENGTH 10
#define MAX_PASSWORD_LENGTH 10

struct member {
    char name[MAX_MEMBER_NAME_LENGTH];
    char club[MAX_CLUB_NAME_LENGTH];
};

struct member members[MAX_MEMBERS];
int num_members = 0;

char clubs[MAX_CLUBS][MAX_CLUB_NAME_LENGTH];
int num_clubs = 0;

char usernames[MAX_MEMBERS][MAX_USERNAME_LENGTH];
char passwords[MAX_MEMBERS][MAX_PASSWORD_LENGTH];
int num_users = 0;

int authenticate_user(const char username[], const char password[]) {
    for (int i = 0; i < num_users; i++) {
        if (strcmp(usernames[i], username) == 0 && strcmp(passwords[i], password) == 0) {
            return 1; // Authentication successful
        }
    }
    return 0; // Authentication failed
}

void read_data() {
    FILE *fptr = fopen("members.dat", "r");
    if (!fptr) return;
    for (int i = 0; i < MAX_MEMBERS; i++) {
        if (fscanf(fptr, " %s %s ",
                   members[num_members].name,
                   members[num_members].club) == EOF) break;
        num_members++;
    }
    fclose(fptr);

    fptr = fopen("clubs.dat", "r");
    if (!fptr) return;
    for (int i = 0; i < MAX_CLUBS; i++) {
        if (fscanf(fptr, " %s ", clubs[num_clubs]) == EOF)
            break;
        fscanf(fptr, " %s ", clubs[num_clubs] + strlen(clubs[num_clubs]) + 1);
        num_clubs++;
    }
    fclose(fptr);

    fptr = fopen("users.dat", "r");
    if (!fptr) return;
    for (int i = 0; i < MAX_MEMBERS; i++) {
        if (fscanf(fptr, " %s %s ", usernames[i], passwords[i]) == EOF) break;
        num_users++;
    }
    fclose(fptr);
}

void write_data() {
    FILE *fptr = fopen("members.dat", "w");
    if (!fptr) return;
    for (int i = 0; i < num_members; i++) {
        fprintf(fptr, "%s %s\n", members[i].name, members[i].club);
    }
    fclose(fptr);

    fptr = fopen("clubs.dat", "w");
    if (!fptr) return;
    for (int i = 0; i < num_clubs; i++) {
        fprintf(fptr, "%s %s\n", clubs[i], clubs[i] + strlen(clubs[i]) + 1);
    }
    fclose(fptr);

    fptr = fopen("users.dat", "w");
    if (!fptr) return;
    for (int i = 0; i < num_users; i++) {
        fprintf(fptr, "%s %s\n", usernames[i], passwords[i]);
    }
    fclose(fptr);
}

void add_member_to_existing_club() {
    if (num_clubs == 0) {
        printf("No clubs exist yet!\n");
        return;
    }

    printf("Existing clubs:\n");
    for (int i = 0; i < num_clubs; i++) {
        printf("%d. %s\n", i+1, clubs[i]);
    }

    int club_index;
    do {
        printf("Select a club to add member to (1-%d): ", num_clubs);
        scanf("%d", &club_index);
    } while (club_index < 1 || club_index > num_clubs);

    printf("Enter member name: ");
    scanf("%s", members[num_members].name);

    strcpy(members[num_members].club, clubs[club_index-1]);

    printf("Member added to %s club.\n", members[num_members].club);

    num_members++;
}

void add_member_to_new_club() {
    if (num_clubs == MAX_CLUBS) {
        printf("Maximum number of clubs reached!\n");
        return;
    }

    printf("Enter new club name: ");
    scanf("%s", clubs[num_clubs]);

    printf("Enter club meeting time (HH:MM AM/PM): ");
    scanf("%s", clubs[num_clubs] + strlen(clubs[num_clubs]) + 1);

    printf("Enter member name: ");
    scanf("%s", members[num_members].name);

    strcpy(members[num_members].club, clubs[num_clubs]);

    printf("Member added to %s club.\n", members[num_members].club);

    num_clubs++;
    num_members++;
}

void show_all_members() {
    if (num_members == 0) {
        printf("No members exist yet!\n");
        return;
    }

    printf("All members:\n");
    for (int i = 0; i < num_members; i++) {
        printf("%d. %s (%s, %s)\n", i+1, members[i].name, members[i].club, clubs[i % num_clubs] + strlen(clubs[i % num_clubs]) + 1);
    }
}

void search_member() {
    char search_name[MAX_MEMBER_NAME_LENGTH];
    printf("Enter the member name to search: ");
    scanf("%s", search_name);

    int found = 0;
    printf("Matching members:\n");
    for (int i = 0; i < num_members; i++) {
        if (strcmp(members[i].name, search_name) == 0) {
            printf("%s (%s)\n", members[i].name, members[i].club);
            found = 1;
        }
    }

    if (!found) {
        printf("Member not found.\n");
    }
}

void delete_member() {
    char delete_name[MAX_MEMBER_NAME_LENGTH];
    printf("Enter the member name to delete: ");
    scanf("%s", delete_name);

    int found = 0;
    for (int i = 0; i < num_members; i++) {
        if (strcmp(members[i].name, delete_name) == 0) {
            // Shift remaining elements to the left
            for (int j = i; j < num_members - 1; j++) {
                strcpy(members[j].name, members[j + 1].name);
                strcpy(members[j].club, members[j + 1].club);
            }
            num_members--;
            found = 1;
            printf("Member deleted.\n");
            break;
        }
    }

    if (!found) {
        printf("Member not found.\n");
    }
}

void edit_member() {
    char edit_name[MAX_MEMBER_NAME_LENGTH];
    printf("Enter the member name to edit: ");
    scanf("%s", edit_name);

    int found = 0;
    for (int i = 0; i < num_members; i++) {
        if (strcmp(members[i].name, edit_name) == 0) {
            printf("Enter new club for %s: ", edit_name);
            scanf("%s", members[i].club);
            printf("Member details updated.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Member not found.\n");
    }
}

int main() {
    read_data();
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int login_attempts = 0;
    int max_attempts = 3;
    int authenticated = 0;

    do {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);
        authenticated = authenticate_user(username, password);
        if (!authenticated) {
            printf("Invalid username or password. Please try again.\n");
            login_attempts++;
        }
    } while (!authenticated && login_attempts < max_attempts);

    if (!authenticated) {
        printf("Maximum login attempts exceeded. Exiting program.\n");
        return 1;
    }

    int choice;

    do {
        printf("\n1. Add member to existing club\n");
        printf("2. Add member to new club\n");
        printf("3. Show all members\n");
        printf("4. Search a member\n");
        printf("5. Delete a member\n");
        printf("6. Edit a member\n");
        printf("7. Exit\n");

        printf("Enter choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_member_to_existing_club();
                break;
            case 2:
                add_member_to_new_club();
                break;
            case 3:
                show_all_members();
                break;
            case 4:
                search_member();
                break;
            case 5:
                delete_member();
                break;
            case 6:
                edit_member();
                break;
            case 7:
                write_data();
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
