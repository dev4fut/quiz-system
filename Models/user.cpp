#include "..\functions\helpio.h"
#include "..\functions\info.h"
#include "user.h"
#include <iostream>

using namespace std;

User::User()
{
    this->ID = 0;
    this->username = "";
    this->dateBirth = "";
    this->grade = new Grade();
}

User::User(int ID, string Username, string DateBirth, int Class){
    this->ID = ID;
    this->username = Username;
    this->dateBirth = DateBirth;
    this->grade = Class;
}

void User::input_user(){
    cout << "Enter ID: ";
    cin >> ID;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Date of Birth: ";
    cin >> dateBirth;
    cout << "Enter Class: ";
    cin >> grade;
}

void User::output_user(){
    cout << "ID: " << ID << endl;
    cout << "Username: " << Username << endl;
    cout << "Date of Birth: " << DateBirth << endl;
    cout << "Class: " << Class << endl;
}

void User::update_user(){
    cout << "Enter ID: ";
    cin >> ID;
    cout << "Enter Username: ";
    cin >> Username;
    cout << "Enter Date of Birth: ";
    cin >> DateBirth;
    cout << "Enter Class: ";
    cin >> Class;
}

void User::delete_user(){
    delete this;
}
