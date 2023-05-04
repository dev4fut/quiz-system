#include "info.h"
#include "../app/data.h"
#include "../models/grade.h"
#include "../models/subject.h"
#include "../models/user.h"
#include <iostream>

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

void options_question(int n)
{
    cout << "------------------MENU OPTIONS QUESTION ------------------" 
            "1. Create question"
            "2. Show list of question"
            "3. update question"
            "4. delete question"
            "5. Exit program"
         << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        void input_question(); break;
    case 2:
        void output_question(); break;
    case 3:
        void update_question(); break;
    case 4:
        void delete_question(); break;
    default:
        system("exit"); break;
    }
}

void start_quiz()
{
    cout << "Ready to Start quiz"
            "You have 5 minutes to finish this quiz"
            "Goodluck for you"
            "Press any key to start quiz"
         << endl;

}