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

void Grade::initGrade(int id, string name, string teacher, int year)
{
    this->id = id;
    this->name = name;
    this->teacher = teacher;
    this->year = year;
}

void Grade::inputgrade()
{
    cout << "Enter grade's ID: " << endl;
    cin >> id;
    cout << "Enter class name: " << endl;
    getline(cin, name);
    cout << "Enter teacher name: " << endl;
    getline(cin, teacher);
    cout << "Enter year of grade: " << endl;
    cin >> year;
}

void Grade::outputgrade()
{
    cout << "Grade's ID: " << id << endl;
    cout << "Class Name: " << name << endl;
    cout << "Teacher's Name: " << teacher << endl;
    cout << "Year: " << year << endl;
}

void Grade::updategrade()
{
    string temp;
    int temp2;
    cout << "Enter New Grade's ID: " << endl;
    cin >> temp2;
    if (temp2 != 0) id = temp2;

    cout << "Enter New Class Name: " << endl;
    getline(cin, temp);
    if (temp != "")
        name = temp;

    cout << "Enter New Teacher's Name: " << endl;
    getline(cin, temp);
    if (temp != "")
        teacher = temp;

    cout << "Enter New Year: " << endl;
    if (temp2 != 0) year = temp2;
}

void Grade::deletegrade()
{
    delete this;
}