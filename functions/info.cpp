#include"info.h"
#include "..\app\data.h"
#include<iostream>

using namespace std;

void welcome(){
    cout << "Welcome to the Quiz Game"
            "This program is developed by Hero Team (Dev4Fut)"
            "You need to login to start the game"
            "If you don't have an account, please register"
            "Good luck!"
            << endl;

}

void menu_subject()
{
    int i = 0;
    cout << "Choose a subject" << endl;
    while (subjects[i].id == 0)
    {
        cout << i + 1 << ". " << subjects[i].name << endl;
        i++;
    }
}