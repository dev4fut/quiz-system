#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

static int i = 0;
int n;

struct w
{
  char username[50], password[50];
}w[50];

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
  int n;

  fp = fopen("Info.txt", "ab+");

  printf("\n\n\n\t\t\tEnter name: ");
  fscanf(stdin, "%s", w[i].username);
  fputs(w[i].username, fp);

  fputc('\n', fp);

  printf("\n\n\n\t\t\tPassword: ");
  fscanf(stdin, "%s", w[i].password);
  fputs(w[i].password, fp);

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
  int checkuser, checkpass;
  char c, username[50], password[50];

  fp = fopen("Info.txt", "r");

  printf("\n\n\n\t\t\tUsername: ");
  scanf("%s", &w[i].username);
  fgets(w[i].username, 50, fp);

  printf("\n\n\n\t\t\tPassword: ");
  scanf("%s", &w[i].password);
  fgets(w[i].password, 50, fp);
  while(!feof(fp))
  {
    fread(&w[i], sizeof(w[i]), 1, fp);
    checkuser = strcmp(username, w[i].username);
    checkpass = strcmp(password, w[i].password);

    if (checkuser == 0 && checkpass == 0)
    {
      system("cls");
      printf("\n\n\n\t\t\t Login Success");
      break;
    }

    else if (checkuser == 0);
    {
      printf("\n\n\n\t\t\tWrong Password!");
      printf("\n\n\n\t\t\t Press [Y] to re-login");
      if(getch() == 'y' && getch() == 'Y')
        system("cls"); 
        login();
    }
    else if (checkuser != 0 && checkpass != 0)
    {
    h:
      printf("\n\n\n\t\t\t You are not register");
      printf("\n\n\n\t\t\t Press [ENTER] to register");
      if(getch())
        system("cls");
        reg();
    }
  }
  getch();
}
// Main
int main(void)
{
  login_menu();
  return 0;
}