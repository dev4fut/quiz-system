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
    gender = gender;
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
    cout << "Enter user's name: ";
    getline(cin, name);
    cout << "Enter user's username: ";
    getline(cin, username);
    cout << "Enter user's password: ";
    getline(cin, password);
    cout << "Enter user's date of birth: ";
    dob = inputdate();
}

void User::output()
{
    cout <<"User %d: " << endl;
    cout <<"ID: "<< id << "\nUsername: " << username << "\nGender: " << gender << "\nDate of birth: " << "\nClass: " << grade << "\nPassword: " << password << endl;
}

void User::update()
{
    // null entered is skipped change
    string temp;
    cout <<"Username: " << endl;
    cin >> temp;
    if (temp != "")
        username = temp;
    cout <<"Password: " << endl;
    cin >> password;
    if (temp != "")
        password = temp;
    cout <<"Date of birth: " << endl;
    temp = inputdate();
    if (temp != "")
        dob = temp;
    cout <<"Gender: " << endl;
    cin >> gender;
    if (temp != "")
        gender = temp;
}

void User::remove()
{
    // delete object user
    delete this;
}