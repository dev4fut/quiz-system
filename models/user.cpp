#include "..\functions\helpio.h"
#include "..\functions\info.h"
#include "user.h"
#include "grade.h"
#include "..\functions\helpio.h"
#include <iostream>

using namespace std;

User::User()
{
    id = 0;
    name = "";
    username = "";
    password = "";
    dob = "";
    grade = new Grade();
    gender = "";
}

void User::init(int id, string name, string username, string password, string dob, Grade *grade, string gender)
{
    this->id = id;
    this->name = name;
    this->username = username;
    this->password = password;
    this->dob = dob;
    this->grade = grade;
    this->gender = gender;
}

void User::input()
{
    cout << "Enter fullname: ";
    getline(cin, name);
    cout << "Enter username: ";
    getline(cin, username);
    cout << "Enter password: ";
    getline(cin, password);
    cout << "Enter date of birth: ";
    dob = inputdate();
    cout << "Enter grade: ";
    grade->input();
    cout << "Enter gender (Male,Female,...): ";
    getline(cin, gender);
}

void User::output()
{
    cout <<"User %d: " << endl;
    cout <<"ID: "<< id <<" - " << name << " (" << gender << ")"
         << "\nUsername: " << username << " (******)\nDate of birth: " << dob
         << "\nClass: " << grade->name << endl;
}

void User::update()
{
    // null entered is skipped change
    string temp;
    cout <<"Username ("<< username <<"): ";
    cin >> temp;
    if (temp != "")
        username = temp;
    cout <<"Password: ";
    cin >> password;
    if (temp != "")
        password = temp;
    cout <<"Date of birth: " << endl;
    temp = inputdate();
    if (temp != "")
        dob = temp;
    cout <<"Class: " << endl;
    grade->update();
    cout <<"Gender: ";
    cin >> gender;
}

void User::remove()
{
    id = 0;
    name = "";
    username = "";
    password = "";
    dob = "";
    grade = new Grade();
    gender = "";
}