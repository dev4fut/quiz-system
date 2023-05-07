#include"info.h"
#include"../data/database.h"
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

void menu_Subject()
{
    int i = 0;
    cout << "Choose a subject" << endl;
    // print all subject from database db.getListSubject()
    
}

void dashboard_user(User *user, int m)
{
    cout <<
    "Dashboard Management Users"
    "1. Users Information"
    "2. Change Users Information"
    "3. Remove Users Information"
    "4. Exit"
    << endl;
    switch (m)
    {
    case 1:
        user->output_user();
        break;
    case 2:
        void update_user(User);
        break;
    case 3:
        void delete_user(User);
        break;
    case 4:
        exit(0);
        break;
    default:
        break;
    }
}
