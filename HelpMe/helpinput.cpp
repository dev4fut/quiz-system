#include<iostream>

using namespace std;

void input_date(string &date){
    date = "";
    int t;
    printf("Day: ");
    scanf("%d", &t);
    date = to_string(t);
    printf("Month: ");
    scanf("%d", &t);
    date = date + "/" + to_string(t);
    printf("Year: ");
    scanf("%d", &t);
    date = date + "/" + to_string(t);
}