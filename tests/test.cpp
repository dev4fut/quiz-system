#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct login
{
  char fname[100];
  char lname[20];
  char username[20];
  char password[20];
};

void reg()
{
  FILE *log;
  log = fopen("login12.txt", "w");
  struct login l;

  printf("Enter First name: "); scanf("%s", l.fname);

  printf("Enter Last name: "); scanf("%s", l.lname);

  printf("Enter username: "); scanf("%s", l.username);
  printf("Enter password: "); scanf("%s", l.password);
  fwrite(&l, sizeof(l), 1, log);

  fclose(log);

  printf("\n\nyour Username is UserID\n");
  printf("Now login with UserID and Password\n");
  printf("\nPress any key to continue.......");
  getch();
  system("cls");
  login();
}

void login()
{
  char username[200], password[20];
  FILE *log;
  log = fopen("login12.txt", "r");
  struct login l;
  
  printf("UserID: ");
  scanf("%s", &username);

  printf("Password: ");
  scanf("%s", &password);

  while(fread(&l, sizeof(l), 1, log))
    {
      if(strcmp(username, l.username) == 0 && strcmp(password, l.password) == 0)
      {
          printf("Access Granted\n");
      }
      else
      {
          printf("Please Enter correct UserID and Password")
      }
    }
}

int main(void)
{
  return 0;
}