#include <iostream>
#include "data.h"

using namespace std;

void initListGrade()
{
    grades[0].initGrade(1, "Math", "Mr. A", 2020);
    grades[1].initGrade(2, "Literature", "Ms. b", 2020);
    grades[2].initGrade(3, "English", "Mr. C", 2020);
    grades[3].initGrade(4, "History", "Mr. D", 2020);
    grades[4].initGrade(5, "Geography", "Mr. E", 2020);
    grades[5].initGrade(6, "Biology", "Mr. F", 2020);
    grades[6].initGrade(7, "Chemistry", "Mr. G", 2020);
}

void initListUser()
{
    users[0].initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
    users[1].initUser(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[2].initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
    users[3].initUser(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[1].initUser(2, "Mary", "mary", "Abc123", "01/01/2000", &grades[2], "Female");
    users[2].initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", &grades[0], "Male");
}

void initListSubject()
{
    subjects[0].initSubject(1, "Math", "Mathematics");
    subjects[1].initSubject(2, "Literature", "Literature");
    subjects[2].initSubject(3, "English", "English");
    subjects[3].initSubject(4, "History", "History");
    subjects[4].initSubject(5, "Geography", "Geography");
    subjects[5].initSubject(6, "Biology", "Biology");
    subjects[6].initSubject(7, "Chemistry", "Chemistry");
}

void initListQuestion()
{
    
    questions[0].initQuestion(1, "What is 1 + 1?",{"1", "2", "3", "4"}, {1}, 1, &subjects[0]);
}

void showListUser()
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

void showListGrade()
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
