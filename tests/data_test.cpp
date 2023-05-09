#include <iostream>
#include "../data/database.h"

using namespace std;

int main()
{
    db.showListGrade();
    db.showListUser();
    db.showListSubject();
    db.showListQuestion();

    Grade* grade = db.getGradeById(1);
    Subject* subject = db.getSubjectById(1);
    User* user = db.getUserById(1);
    Question* question = db.getQuestionById(1);

    cout << "Grade: " << grade->id << " " << grade->name << endl;
    cout << "Subject: " << subject->id << " " << subject->name << endl;
    cout << "User: " << user->id << " " << user->name << endl;
    cout << "Question: " << question->id << " " << question->question << endl;

    return 0;
}