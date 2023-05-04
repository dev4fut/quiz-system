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
        void initGrade(int id, string Name, string Teacher, int Year);
        void input_grade();
        void output_grade();
        void update_grade();
        void delete_grade();
};
#endif