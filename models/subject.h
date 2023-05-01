// header file for subject class
#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>
using namespace std;

class Subject{
    public:
        int id;
        string name;
        string description;
            
        Subject(int ID, string Name, string Teacher, int Year);
        void input_subject();
        void output_subject();
        void update_subject();
        void delete_subject();
};

#endif