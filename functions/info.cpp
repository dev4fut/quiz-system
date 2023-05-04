#include"info.h"
#include"../app/data.h"
#include"../models/grade.h"
#include"../models/subject.h"
#include"../models/user.h"
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

void dashboard(User *user)
{
    cout << "DASHBOARD"
            "Information users: " << user->name << endl;
    cout << "Date of Birth: " << user->dob << endl;
    cout << "Class: " << user->grade << endl;
    cout << "Gender: " << user->gender << endl;
    cout << "*********** SCORE ***********";
}

void menu_subject()
{
    int i = 0;
    cout << "Choose a subject" << endl;
    while (subjects[i]->id == 0)
    {
        cout << i + 1 << ". " << subjects[i]->name << endl;
        i++;
    }
}