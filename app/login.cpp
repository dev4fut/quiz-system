#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

static int i = 0;
int n;

struct w
{
  char username[25], password[25];
} w[25];

void reg(void);
int login(void);

int login_menu(void)
{
menu:
  system("cls");
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
  FILE *fp, *fu;
  int n;

  fp = fopen("pass.txt", "ab+");
  fu = fopen("users.txt", "ab+");

  printf("\n\n\n\t\t\tEnter name: ");
  fscanf(stdin, "%s", w[i].username);
  fputs(w[i].username, fu);
  fputc('\n', fu);

  printf("\n\n\n\t\t\tPassword: ");
  fscanf(stdin, "%s", w[i].password);
  fputs(w[i].password, fp);
  fputc('\n', fp);


  fclose(fu);
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

int login(void)
{
  FILE *fp, *fu;
  fp = fopen("pass.txt", "r");
  fu = fopen("users.txt", "r");
  char c[50], username[25], password[25];
	char buffer[256], buffer2[256];
	int cmu, cmp;

  printf("Enter username: ");
	scanf("%s", &username);

	fread(buffer, strlen(c) + 1024, 1, fu);
	fseek(fu, SEEK_CUR, 0);

	cmu = strcmp(buffer, username);
	if (cmu == 0)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

  printf("Enter password: ");
	scanf("%s", &password);

	fread(buffer2, strlen(c) + 1024, 1, fp);
  fseek(fp, SEEK_CUR, 0);
	
	cmp = strcmp(buffer2, password);
	if (cmp == 0)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
  return 0;
}


int main(void)
{
  login_menu();

  return 0;
}