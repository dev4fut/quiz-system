#include "stdio.h"

int main()
{
    int ID;
    char username[50];
    FILE *users;
    users = fopen("users.txt", "a+");
    printf("username: ");
    scanf("%s", &username);
    printf("ID: ");
    scanf("%d", &ID);

    fprintf(users, "%s\t", username);
    fprintf(users, "%d\n", ID);
    fclose(users);
    return 0;
}