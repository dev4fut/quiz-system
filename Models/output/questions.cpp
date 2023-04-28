#include <stdio.h>
#include <string.h>

void questions(char* temp)
{
    struct question
    {
        char question[100];
        char ans1[100];
        char ans2[100];
        char ans3[100];
        char ans4[100];
    }q;
    // input question to struct
    {
        printf(" ");
        scanf("%s", &q.question);
        printf("\n");
        scanf("%s", &q.ans1);
        printf("\n");
        scanf("%s", &q.ans2);
        printf("\n");
        scanf("%s", &q.ans3);
        printf("\n");
        scanf("%s", &q.ans4);
    };

    // output variable in struct
    printf("\nQuestion %d: %s\n", q.question);
    printf("A: %s\n", q.ans1);
    printf("B: %s\n", q.ans2);
    printf("C: %s\n", q.ans3);
    printf("D: %s\n", q.ans4);

    // Update variables in struct
    printf("\nQuestion: %s\n");
    scanf("%s", &temp);
    int cmp1 = strcmp(temp, " ");
    if (cmp1 == 1)
    {
        strcpy(q.question, temp);
    }
    printf("\nA: %s\n");
    scanf("%s", &temp);
    int cmp1 = strcmp(temp, " ");
    if (cmp1 == 1)
    {
        strcpy(q.ans1, temp);
    }
    printf("\nB: %s\n");
    scanf("%s", &temp);
    int cmp1 = strcmp(temp, " ");
    if (cmp1 == 1)
    {
        strcpy(q.ans2, temp);
    }
    printf("\nC: %s\n");
    scanf("%s", &temp);
    int cmp1 = strcmp(temp, " ");
    if (cmp1 == 1)
    {
        strcpy(q.ans3, temp);
    }
    printf("\nD: %s\n");
    scanf("%s", &temp);
    int cmp1 = strcmp(temp, " ");
    if (cmp1 == 1)
    {
        strcpy(q.ans4, temp);
    }

    //Delete variables in struct

};