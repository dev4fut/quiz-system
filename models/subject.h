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
        void inputSubject();
        void outputSubject();
        void updateSubject();
        void deleteSubject();
};

#endif