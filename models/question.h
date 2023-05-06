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
        string explanation;
        int level;
        Subject *subject;
            
        Question();
        void initQuestion(int id, string question, string answer[], int correct[], string explanation, int level, Subject *subject);
        void inputQuestion();
        void outputQuestion();
        bool checkAnswer(int answer);
        bool inputAnswer();
        void outputAnswer();
        bool doQuestion();
        void updateQuestion();
        void deleteQuestion();
};

#endif