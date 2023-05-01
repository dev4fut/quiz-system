// header file for user class
#ifndef QUESTION_H
#define QUESTION_H
#include <string>

using namespace std;

class Question{
    public:
        int id;
        string question;
        string answer[10];
        int correct[10];
        int level;
            
        Question();
        Question(int id, string question, string answer, int correct, int level);
        void input_question();
        void output_question();
        void update_question();
        void delete_question();
};

#endif