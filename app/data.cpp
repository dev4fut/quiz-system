#include <iostream>
#include "data.h"
#include "..\models\subject.h"

using namespace std;

void initListUser()
{
    Grade grade1;
    Grade* grade = &grade1;
    grade->initGrade(1, "Math", "Mr. A", 2020);
    users[0]->initUser(1, "Daniel", "dan", "Abc123", "01/01/2000", grade, "Male");
    cout << "HXXXXXXXXXXX" << endl;
    users[1]->initUser(2, "Mary", "mary", "Abc123", "01/01/2000", grade, "Female");
    users[2]->initUser(3, "Mary", "mary", "Abc123", "01/01/2000", grade, "Female");
    users[3]->initUser(4, "Daniel", "dan", "Abc123", "01/01/2000", grade, "Male");
    users[4]->initUser(5, "Mary", "mary", "Abc123", "01/01/2000", grade, "Female");
    users[5]->initUser(6, "Mary", "mary", "Abc123", "01/01/2000", grade, "Female");
}

void initListSubject()
{
    subjects[0]->initSubject(1, "Math", "prove 1 + 1 = 2");
    subjects[1]->initSubject(2, "English", "i'm fine thank you and you");
    subjects[2]->initSubject(3, "German", "Oui");
    subjects[3]->initSubject(4, "Chinese", "Ching Chong bing bing ling ling");
    subjects[4]->initSubject(5, "VietNamese", "You know english?");
}