#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"

static int i = 0;
int n;
struct w
{
  char username[50], password[50];
} w;

void reg(void);
void login(void);

int login_menu(void)
{
menu:
  printf("\n\n\n\t\t\tWELCOME TO QUIZ SYSTEM 2.0\n");
  printf("\n\n\n\t\t\tPRESS [ENTER] TO CONTINUE\n");

  if (getch())
  {
    system("cls");
  }
  else
  {
    goto menu;
  }

main_menu:
  printf("\t\t\tType the number:\n");
  printf("1. Register\n");
  printf("2. Login\n");
  printf("3. Exit\n");
  printf("Type your choose here: ");
  scanf("%d", &n);

  switch (n)
  {
  case 1:
    system("cls");
    reg();
    break;
  case 2:
    system("cls");
    login();
    break;
  case 3:
    system("cls");
    printf("\n\n\n\t\t\tThanks For Coming^^");
  default:
    system("cls");
    printf("\n\n\t\tUnavailable");
    printf("\n\n\t\tPress Any Key go back");
    getch();
    system("cls");
    goto main_menu;
  }
  return 0;
}

void reg(void)
{
  FILE *fp;
  char username[50], password[50];
  int n;
  fp = fopen("tester.txt", "ab+");

  printf("\n\n\n\t\t\tEnter name: ");
  fscanf(stdin, "%s", username);
  fputs(username, fp);

  printf("\n\n\n\t\t\tPassword: ");
  fscanf(stdin, "%s", password);
  fputs(password, fp);

  fclose(fp);

  printf("\t\t\tREGISTERD\n");
  printf("\t\t\tYOU'RE REGISTERED\n");
  printf("\t\t\tDO YOU WANT TO LOGIN? \n\n\t\tPRESS [Y] FOR YES \n\t\tPRESS [N] FOR NO");
  if (getch() == 'y' || getch() == 'Y')
  {
    system("cls");
    login();
  }
  else if (getch() == 'n' || getch() == 'N')
  {
    system("cls");
    printf("\n\n\n\t\t\tTHANKS FOR USING MY APPS");
  }
  getch();
}

void login(void)
{
  FILE *fp;
  char c, username[50], password[50];
  fp = fopen("tester.txt", "r");

  fclose(fp);
  getch();
}

// Main
int main(void)
{
  login_menu();
  return 0;
}