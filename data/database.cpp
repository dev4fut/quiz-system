#include <iostream>
#include "database.h"

using namespace std;

Database::Database()
{
    // init list of grades
    grades[0].init(1, "Math", "Mr. A", 2020);
    grades[1].init(2, "Literature", "Ms. b", 2020);
    grades[2].init(3, "English", "Mr. C", 2020);
    grades[3].init(4, "History", "Mr. D", 2020);
    grades[4].init(5, "Geography", "Mr. E", 2020);
    grades[5].init(6, "Biology", "Mr. F", 2020);
    grades[6].init(7, "Chemistry", "Mr. G", 2020);

    // init list of users
    users[0].init(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
    users[1].init(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[2].init(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
    users[3].init(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[1].init(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[2].init(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");

    // init list of subjects
    subjects[0].init(1, "Math", "Mathematics");
    subjects[1].init(2, "Literature", "Literature");
    subjects[2].init(3, "English", "English");
    subjects[3].init(4, "History", "History");
    subjects[4].init(5, "Geography", "Geography");
    subjects[5].init(6, "Biology", "Biology");
    subjects[6].init(7, "Chemistry", "Chemistry");

    // init list of questions
    // What is 1 + 1?
    string answers[4] = {"1", "2", "3", "4"};
    int correct[1] = {1};
    questions[0].init(1, "What is 1 + 1?",answers, correct, "Because: 1 + 1 = 2", 1, &subjects[0]);
    // What is red + blue?
    string answers1[4] = {"red", "blue", "green", "yellow"};
    int correct1[1] = {2};
    questions[1].init(2, "What is red + blue?",answers1, correct1, "Because: red + blue = blue", 1, &subjects[0]);
    // Why is the sky blue?
    string answers2[4] = {"Because it is", "Because it is not", "Because it is not red", "Because it is not green"};
    int correct2[1] = {1};
    questions[2].init(3, "Why is the sky blue?",answers2, correct2, "Because: it is", 2, &subjects[0]);
    // What is the capital of Vietnam?
    string answers3[4] = {"Hanoi", "Ho Chi Minh City", "Da Nang", "Hue"};
    int correct3[1] = {1};
    questions[3].init(4, "Where is the capital of Vietnam?",answers3, correct3, "Because: Hanoi is the capital of Vietnam", 2, &subjects[0]);
    // What is the capital of the USA?
    string answers4[4] = {"New York", "Washington DC", "Los Angeles", "Chicago"};
    int correct4[1] = {2};
    questions[4].init(5, "Where is the capital of the USA?",answers4, correct4, "Because: Washington DC is the capital of the USA", 2, &subjects[0]);
    // What is machine learning?
    string answers5[4] = {"A machine that can learn", "A machine that can think", "A machine that can do things", "A machine that can learn and think"};
    int correct5[1] = {4};
    questions[5].init(6, "What is machine learning?",answers5, correct5, "Because: A machine that can learn and think is machine learning", 1, &subjects[0]);
}

void Database::showListUser()
{
    cout << ">>>>>>>>>>List of users<<<<<<<<<<" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (users[i].id != 0)
        {
            cout << ">>>>>>ID: " << users[i].id << " Name: " << users[i].name << endl;
            cout << "Username: " << users[i].username << " Password: " << users[i].password << endl;
            cout << "Birthday: " << users[i].dob << ". Gender: " << users[i].gender << endl;
            cout << "Grade: " << users[i].grade->name << endl;
        }
    }
}

void Database::showListGrade()
{
    cout << ">>>>>>>>>>>List of grades<<<<<<<<<<<" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (grades[i].id != 0)
        {
            cout << "ID: " << grades[i].id << " Name: " << grades[i].name << endl;
        }
    }
}

void Database::showListSubject()
{
    cout << ">>>>>>>>>>>List of subjects<<<<<<<<<<<" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (subjects[i].id != 0)
        {
            cout << "ID: " << subjects[i].id << " Name: " << subjects[i].name << endl;
        }
    }
}

void Database::showListQuestion()
{
    cout << ">>>>>>>>>>>List of questions<<<<<<<<<<<" << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (questions[i].id != 0) questions[i].output();
    }
}