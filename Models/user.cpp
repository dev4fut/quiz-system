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
}

User::User(int id, string name, string username, string password, string dob, Grade *grade)
{
    this->id = id;
    this->name = name;
    this->username = username;
    this->password = password;
    this->dob = dob;
    this->grade = grade;
}

void User::input_user()
{
    cout << "Enter user's name: ";
    getline(cin, name);
    cout << "Enter user's username: ";
    getline(cin, username);
    cout << "Enter user's password: ";
    getline(cin, password);
    cout << "Enter user's date of birth: ";
    dob = input_date();
    cout << "Enter user's grade: " << endl;
    grade->input_grade();
}