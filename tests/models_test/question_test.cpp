#include<iostream>
#include "..\..\models\question.h"

using namespace std;

int main(){
    Question a;
    string answers[4] = {"1", "2", "3", "4"};
    int correct[1] = {1};
    Subject subject;
    subject.initSubject(1, "Math", "Mathematics");
    // a.initQuestion(1, "What is 1 + 1?",answers, correct, "Because: 1 + 1 = 2", 1, &subject);
    // a.outputQuestion();
    // a.outputAnswer();
    return 0;
}