// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char question[100];
    char ans1[100];
    char ans2[100];
    char ans3[100];
    char ans4[100];
} data;

int print_struct(data* my_data) {
    
    printf("\nQuestion: %s",my_data -> question);
    printf("Option A: %s",my_data -> ans1);
    printf("Option B: %s",my_data -> ans2);
    printf("Option C: %s",my_data -> ans3);
    printf("Option D: %s",my_data -> ans4);
    
}
int main() {
    // Write C code here
    data* my_data = malloc(1024*sizeof(my_data));
    
    printf("Input your question: ");
    fgets(my_data ->question, 100, stdin);
    printf("A: ");
    fgets(my_data -> ans1, 100, stdin);
    printf("B: ");
    fgets(my_data -> ans2, 100, stdin);
    printf("C: ");
    fgets(my_data -> ans3, 100, stdin);
    printf("D: ");
    fgets(my_data -> ans4, 100, stdin);
    
    print_struct(my_data);
    
    free(my_data);
    return 0;
}
