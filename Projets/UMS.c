#include <stdio.h>
#include <string.h>
#include <conio.h> // Windows-specific for getch()

#define MAX_USERS 10
#define CREDENTIAL_LENGTH 30

typedef struct user {
    char username[CREDENTIAL_LENGTH];
    char password[CREDENTIAL_LENGTH];
} User;

User users[MAX_USERS];
int user_count = 0;

// Function prototypes
void register_user();
int login_user();
void fix_input(char *string);
void input_password(char *password);

int main() {
    int user_index;

    while (1) {
        int option;
        printf("\nWelcome to User Management");
        printf("\n1. Register");
        printf("\n2. Log In");
        printf("\n3. Exit");
        printf("\nSelect an option: ");
        scanf("%d", &option);
        getchar(); // consume leftover newline

        switch (option) {
            case 1:
                register_user();
                break;
            case 2:
                user_index = login_user();
                if (user_index >= 0) {
                    printf("\nLog In successful! Welcome, %s\n", users[user_index].username);
                } else {
                    printf("\nLog In failed! Incorrect username or password\n");
                }
                break;
            case 3:
                printf("\nExiting program.\n");
                return 0;
            default:
                printf("\nInvalid option! Please try again.\n");
        }
    }

    return 0;
}

void register_user() {
    if (user_count == MAX_USERS) {
        printf("\nMaximum %d users allowed! No more registrations.\n", MAX_USERS);
        return;
    }

    int new_index = user_count;
    printf("\nRegister a new user");
    printf("\nEnter Username: ");
    fgets(users[new_index].username, CREDENTIAL_LENGTH, stdin);
    fix_input(users[new_index].username);

    input_password(users[new_index].password);

    printf("\nRegistration Successful!\n");
    user_count++;
}

int login_user() {
    char username[CREDENTIAL_LENGTH];
    char password[CREDENTIAL_LENGTH];

    printf("\nEnter Username: ");
    fgets(username, CREDENTIAL_LENGTH, stdin);
    fix_input(username);

    input_password(password);

    for (int i = 0; i < user_count; i++) {
        if (strcmp(username, users[i].username) == 0 &&
            strcmp(password, users[i].password) == 0) {
            return i;
        }
    }
    return -1;
}

void fix_input(char *string) {
    int index = strcspn(string, "\n");
    string[index] = '\0';
}

void input_password(char *password) {
    char ch;
    int i = 0;

    printf("\nEnter Password (masking enabled): ");

    while (1) {
        ch = _getch(); // read char without echo

        if (ch == 13) { // Enter key
            break;
        } else if (ch == 8) { // Backspace
            if (i > 0) {
                i--;
                printf("\b \b"); // erase last '*'
            }
        } else if (i < CREDENTIAL_LENGTH - 1) {
            password[i++] = ch;
            printf("*"); // print '*' for each char
        }
    }
    password[i] = '\0';
    printf("\n");
}
