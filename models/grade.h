// header file for class class
#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class Grade{
    public:
        int ID;
        string name;
        string teacher;
        int year;

        Grade();     
        Grade(int ID, string Name, string Teacher, int Year);
        void input_class();
        void output_class();
        void update_class();
        void delete_class();
};