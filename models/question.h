// header file for user class
#ifndef QUESTION_H
#define QUESTION_H
#include <string>
#include "subject.h"

using namespace std;

class Question{
    public:
        int id;
        string question;
        string answers[10];
        int corrects[10];
        string explanation;
        int level;
        Subject *subject;
            
        Question();
        void init(int id, string question, string* answers, int numAns, int* corrects, int numCor, string explanation, int level, Subject *subject);
        void input();
        void output();
        bool checkAns(int answer);
        bool inputAns();
        void outputAns();
        bool doQuest();
        void update();
        void remove();
};

#endif