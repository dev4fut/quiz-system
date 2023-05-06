#include"info.h"
#include"../data/database.h"
#include"../models/grade.h"
#include"../models/subject.h"
#include"../models/user.h"
#include<iostream>

using namespace std;

void welcome()
{
    cout << "Welcome to the Quiz Game"
            "This program is developed by Hero Team (Dev4Fut)"
            "You need to login to start the game"
            "If you don't have an account, please register"
            "Good luck!"
         << endl;
}

void choose_menu(int n)
{
    cout << "--------------------MENU OPTIONS--------------------"
            "1. Dashboard"
            "2. Start Quiz"
            "3. Exit Program"
         << endl;
    switch (n)
    {
        case 1:
        void dashboard(); break;
        case 2:
        void start_quiz(); break;
        case 3:
        system("exit"); break;
        default:
        system("cls"); break;
    }
}

void dashboard(User *user)
{
    cout << "DASHBOARD"
            "Information users: "
         << user->name << endl;
    cout << "Date of Birth: " << user->dob << endl;
    cout << "Class: " << user->grade << endl;
    cout << "Gender: " << user->gender << endl;
    cout << "*********** SCORE ***********" << endl;
}

void menu_Subject()
{
    int i = 0;
    cout << "Choose a subject" << endl;
    // print all subject from database db.getListSubject()
    
}