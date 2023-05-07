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
        void init(int id, string name, string description);
        void input();
        void output();
        void update();
        void remove();
};

#endif