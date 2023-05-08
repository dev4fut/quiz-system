#include<iostream>
#include "..\..\models\question.h"

using namespace std;

int main(){
    Question a;
    string answers[4] = {"1", "2", "3", "4"};
    int correct[1] = {1};
    Subject subject;
    subject.init(1, "Math", "Mathematics");
    a.init(1, "What is 1 + 1?",answers, correct, "Because: 1 + 1 = 2", 1, &subject);
    a.output();
    a.outputAns();
    return 0;
}