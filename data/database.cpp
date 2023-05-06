#include <iostream>
#include "database.h"

using namespace std;

void Database::initListGrade()
{
    grades[0].initGrade(1, "Math", "Mr. A", 2020);
    grades[1].initGrade(2, "Literature", "Ms. b", 2020);
    grades[2].initGrade(3, "English", "Mr. C", 2020);
    grades[3].initGrade(4, "History", "Mr. D", 2020);
    grades[4].initGrade(5, "Geography", "Mr. E", 2020);
    grades[5].initGrade(6, "Biology", "Mr. F", 2020);
    grades[6].initGrade(7, "Chemistry", "Mr. G", 2020);
}

void Database::initListUser()
{
    users[0].initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
    users[1].initUser(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[2].initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
    users[3].initUser(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[1].initUser(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[2].initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
}

void Database::initListSubject()
{
    subjects[0].initSubject(1, "Math", "Mathematics");
    subjects[1].initSubject(2, "Literature", "Literature");
    subjects[2].initSubject(3, "English", "English");
    subjects[3].initSubject(4, "History", "History");
    subjects[4].initSubject(5, "Geography", "Geography");
    subjects[5].initSubject(6, "Biology", "Biology");
    subjects[6].initSubject(7, "Chemistry", "Chemistry");
}

void Database::initListQuestion()
{
    // What is 1 + 1?
    string answers[4] = {"1", "2", "3", "4"};
    int correct[1] = {1};
    questions[0].initQuestion(1, "What is 1 + 1?",answers, correct, "Because: 1 + 1 = 2", 1, &subjects[0]);
    // What is red + blue?
    string answers1[4] = {"red", "blue", "green", "yellow"};
    int correct1[1] = {2};
    questions[1].initQuestion(2, "What is red + blue?",answers1, correct1, "Because: red + blue = blue", 1, &subjects[0]);
    // Why is the sky blue?
    string answers2[4] = {"Because it is", "Because it is not", "Because it is not red", "Because it is not green"};
    int correct2[1] = {1};
    questions[2].initQuestion(3, "Why is the sky blue?",answers2, correct2, "Because: it is", 2, &subjects[0]);
    // What is the capital of Vietnam?
    string answers3[4] = {"Hanoi", "Ho Chi Minh City", "Da Nang", "Hue"};
    int correct3[1] = {1};
    questions[3].initQuestion(4, "Where is the capital of Vietnam?",answers3, correct3, "Because: Hanoi is the capital of Vietnam", 2, &subjects[0]);
    // What is the capital of the USA?
    string answers4[4] = {"New York", "Washington DC", "Los Angeles", "Chicago"};
    int correct4[1] = {2};
    questions[4].initQuestion(5, "Where is the capital of the USA?",answers4, correct4, "Because: Washington DC is the capital of the USA", 2, &subjects[0]);
    // What is machine learning?
    string answers5[4] = {"A machine that can learn", "A machine that can think", "A machine that can do things", "A machine that can learn and think"};
    int correct5[1] = {4};
    questions[5].initQuestion(6, "What is machine learning?",answers5, correct5, "Because: A machine that can learn and think is machine learning", 1, &subjects[0]);
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
        if (questions[i].id != 0) questions[i].outputQuestion();
    }
}