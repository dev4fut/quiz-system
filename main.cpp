#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

// Login Form
static int i = 0;
struct write
{
    char username[50], pass[50];
} write[100];
int login_menu(void)
{
    int n;
menu:
    system("cls");
    printf("\n\n\n\n\t\t\t\tWELCOME TO QUIZ SYSTEM 2.0");
    printf("\n\n\n\n\t\t\t\tPRESS [ENTER] TO CONTINUE");
    if (getch() == 20)
    {
        system("cls");
    }
    else
    {
        goto menu;
    }
main_menu:
    printf("\n\n\n\n\t\t\t[1] Login\t\t[2] Register\t\t[3] Exit");
    printf("\n\n\n\t\t\tCHOOSE YOUR SECLECTION THEN [ENTER]: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        system("cls");
        login();
        break;

    case 2:
        system("cls");
        reg();
        break;

    default:
        system("cls");
        printf("\n\n\n\t\t\t\tNOT AVAILABLE");
        printf("\n\n\n\t\t\t\tPRESS ANY KEY TO GO BACK");
        getch();
        system("cls");
        goto main_menu;
    }
}
void reg()
{
    FILE *fp;
    char c, username[30];
    int z = 0;
    fp = fopen("login.txt", "ab+");
    system("cls");
    printf("\n\n\n\t\t\tCREATE USERNAME & PASSWORD");
    for(i = 0; i < 99; i++)
    {
        printf("\n\n\n\t\t\t USERNAME: ");
        scanf("%s", username);
    
        printf("\n\n\n\t\t\t USERNAME: ");
        scanf("%s", username);
    }
}

void login()
{
}

// Main
int main(void)
{

    return 0;
}