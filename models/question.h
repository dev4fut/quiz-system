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
        string answer[10];
        int correct[10];
        int level;
        Subject *subject;
            
        Question();
        void initQuestion(int id, string question, string answer[], int correct[], int level, Subject *subject);
        void input_question();
        void output_question();
        void update_question();
        void delete_question();
};

#endif