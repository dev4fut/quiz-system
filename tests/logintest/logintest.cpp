#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct log
{
    char username[50], password[50];
} l;

void main(void)
{
    char username[30], password[20];
    FILE *log;
    log = fopen("login.txt", "r");

    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    fgets(username, 30, stdin);
    printf("\nPassword: ");
    printf("\n");
    fgets(password, 20, stdin);

    while (fread(&l, sizeof(l), 1, log))
    {
        if (strcmp(username, l.username) == 0 && strcmp(password, l.password) == 0)

        {
            printf("\nSuccessful Login\n");
        }
        else
        {
            printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
        }
    }

    fclose(log);
}