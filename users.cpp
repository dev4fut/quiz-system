#include <stdio.h>

int user(){
    // create a struct to store users information
    int n;
    struct  users 
    {
        int ID;
        char Username[50];
        char DateBirth[10];
        int Class;
    };
    
    users s[100];
        printf("\nNumber of users: ");
        scanf("%d", &n);
        getchar();
        for (int i = 1; i < n; i++)
        {
            printf("\nName: ");
            gets(s[i].Username);
            printf("\nID: ");
            scanf("%d", &s[i].ID);
            printf("\nClass: ");
            scanf("%d", &s[i].Class);
        }
    return 0;
}