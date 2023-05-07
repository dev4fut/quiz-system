#include<iostream>
#include"subject.h"

using namespace std;

Subject::Subject()
{
    id = 0;
    name = "";
    description = "";
}

void Subject::init(int id, string name, string description)
{
    this->id = id;
    this->name = name;
    this->description = description;
}

void Subject::input()
{
    cout << "Enter subject's name: ";
    getline(cin, name);
    cout << "Enter subject's description: ";
    getline(cin, description);
}

void Subject::output()
{
    cout << "Subject's name: " << name << endl;
    cout << "Subject's description: " << description << endl;
}

void Subject::update()
{
    string temp;
    cout << "Enter subject's name (Enter to skip): ";
    getline(cin, temp);
    if (temp != "")


    
        name = temp;
    cout << "Enter subject's description (Enter to skip): ";
    getline(cin, temp);
    if (temp != "")
        description = temp;
}

void Subject::remove()
{
    id = 0;
    name = "";
    description = "";
}