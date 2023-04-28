#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int i = 0;
struct w
{
  char nama[30], pass[30];
} w[100];
int n;
void login(void);
void reg(void);
int main(void)
{
menu:
  system("cls");
  printf("\n\n\n\n\n\t\t\t\tWELCOME!");
  printf("\n\n\n\n\t\t\t\t\t\t[ENTER]");
  if (getch() == 13)
  {
    system("cls");
  }
  else
  {
    goto menu;
  }
menu_main:
  printf("\n\n\n\t\t\t[1] LOGIN\t\t[2] REGISTRATION\t\t[3] EXIT APP");
  printf("\n\n\n\t\t\t\t  INPUT YOUR SELECTION THEN PRESS [ENTER]: ");
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
  case 3:
    system("cls");
    printf("\n\n\t\t\t\tTHANK YOU FOR USING THIS APP\n");
    break;
  default:
    system("cls");
    printf("\n\n\t\t\t\tNOT AVAILABLE");
    printf("\n\n\t\t\tPRESS ANY KEY TO GO BACK");
    getch();
    system("cls");
    goto menu_main;
  }
}
void reg()
{
  FILE *fp;
  char c, username[30];
  int z = 0;
  fp = fopen("file.txt", "ab+");
  system("cls");
  printf("\n\n\t\tPLEASE INPUT USERNAME & PASSWORD");
  for (i = 0; i < 99; i++)
  {
    printf("\n\n\t\t\t\t  USERNAME: ");
    scanf("%s", username);
    while (!feof(fp))
    {
      fread(&w[i], sizeof(w[i]), 1, fp);
      if (strcmp(username, w[i].nama) == 0)
      {
        system("cls");
        printf("\n\n\t\t\t  USERNAME IS NOT AVAILABLE");
        printf("\n\n\t\t\t  PRESS ANY KEY TO GO BACK");
        getch();
        system("cls");
        reg();
      }
      else
      {
        strcpy(w[i].nama, username);
        break;
      }
    }
    z = 0;
    printf("\n\n\t\t\t\t  PASSWORD: ");
    while ((c = getch()) != 13)
    {
      w[i].pass[z++] = c;
      printf("%c", '*');
    }
    fwrite(&w[i], sizeof(w[i]), 1, fp);
    fclose(fp);
    printf("\n\n\tPRESS [ENTER] IF YOU AGREE");
    if ((c = getch()) == 13)
    {
      system("cls");
      printf("\n\n\t\tYOU ARE REGISTERED!");
      printf("\n\n\t\tWOULD YOU LIKE TO LOGIN?\n\n\t\t  ");
      printf(" PRESS [1] FOR YES\n\n\t\t   PRESS [2] FOR NO\n\n\t\t\t\t");
      scanf("%d", &n);
      if (n == 1)
      {
        system("cls");
        login();
      }
      else if (n == 2)
      {
        system("cls");
        printf("\n\n\n\t\t\t\tTHANK YOU FOR REGISTERING IN THIS APP\n");
      }
    }
    break;
  }
}
void login()
{
  FILE *fp;
  char c, nama[10], pass[10];
  int z = 0;
  int cekun, cekpw;
  fp = fopen("file.txt", "r");
  for (i = 0; i <= 10; i++)
  {
    printf("\n\n\t\t\t\t  USERNAME: ");
    scanf("%s", nama);

    system("cls");
    printf("\n\n\t\t\t\t  PASSWORD: ");
    while (!feof(fp))
    {
      fread(&w[i], sizeof(w[i]), 1, fp);
      cekun = strcmp(nama, w[i].nama);
      cekpw = strcmp(pass, w[i].pass);
      if (cekun == 0 && cekpw == 0)
      {
        system("cls");
        printf("\n\n\n\t\t\tLOGIN SUCCESSFUL!");
        break;
      }
      else if (cekun == 0)
      {
        printf("\n\n\n\t\t\tWRONG PASSWORD!");
        printf("\n\n\t\t\t\t  (PRESS [Y] TO RE-LOGIN)");
        if (getch() == 'y' || getch() == 'Y')
          system("cls");
        login();
      }
      else if (cekun != 0 && cekpw != 0)
      {
      h:
        printf("\n\n\n\t\t\tYOU ARE NOT REGISTERED\n \t\t\tPRESS [ENTER] TO REGISTER");
        if (getch() == 13)
          system("cls");
        reg();
      }
      else if (cekun != 0 && cekpw == 0)
      {
        goto h;
      }
    }
    break;
  }
  getch();
}