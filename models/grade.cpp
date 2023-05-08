#include<iostream>
#include<string.h>
#include"grade.h"

using namespace std;

Grade::Grade()
{
    id = 0;
    name = "";
    teacher = "";
    year = 0;
}

void Grade::init(int id, string name, string teacher, int year)
{
    this->id = id;
    this->name = name;
    this->teacher = teacher;
    this->year = year;
}

void Grade::input()
{
    cout << "Enter grade's ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter class name: ";
    getline(cin, name);
    cout << "Enter teacher name: ";
    getline(cin, teacher);
    cout << "Enter year of grade: ";
    cin >> year;
    cin.ignore();
}

void Grade::output()
{
    cout << "Grade's ID: " << id << endl;
    cout << "Class Name: " << name << endl;
    cout << "Teacher's Name: " << teacher << endl;
    cout << "Year: " << year << endl;
}

void Grade::update()
{
    cout << ">>> Update Grade's Information <<<"
            "\n(Enter nothing or 0 to skip change)\n" << endl;
    string temp;
    int temp2;
    cout << "Class Name ("<< name <<"): " << endl;
    getline(cin, temp);
    if (temp != "")
        name = temp;

    cout << "Enter New Teacher's Name ("<< teacher <<"): " << endl;
    getline(cin, temp);
    if (temp != "")
        teacher = temp;

    cout << "Enter New Year("<< year <<"): " << endl;
    cin >> temp2;
    if (temp2 != 0) year = temp2;
}

void Grade::remove()
{
    id = 0;
    name = "";
    teacher = "";
    year = 0;
}