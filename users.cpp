#include <stdio.h>

int user(){
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
            scanf("%s", &s[i].Username);
            printf("\nID: ");
            scanf("%d", &s[i].ID);
            printf("\nDateBirth: ");
            scanf("%d", &s[i].DateBirth);
            printf("\nDateBirth: ");
            scanf("%d", &s[i].DateBirth);
        }
    return 0;
}