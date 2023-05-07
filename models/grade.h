// header file for class class
#ifndef GRADE_H
#define GRADE_H
#include <string>

using namespace std;

class Grade{
    public:
        int id;
        string name;
        string teacher;
        int year;

        Grade();     
        void init(int id, string Name, string Teacher, int Year);
        void input();
        void output();
        void update();
        void remove();
};
#endif