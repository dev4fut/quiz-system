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

	fread(buffer, strlen(c) + 50, 1, fu);
	fseek(fu, SEEK_SET, 0);

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

	fread(buffer2, strlen(c) + 50, 1, fp);
  fseek(fp, SEEK_SET, 0);
	
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