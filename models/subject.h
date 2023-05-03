// header file for subject class
#ifndef SUBJECT_H
#define SUBJECT_H

using namespace std;

class Subject{
    public:
        int id;
        string name;
        string description;
        
        Subject();
        void initSubject(int id, string name, string description);
        void input_subject();
        void output_subject();
        void update_subject();
        void delete_subject();
};

#endif