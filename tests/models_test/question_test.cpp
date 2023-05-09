#include<iostream>
#include "..\..\models\question.h"

using namespace std;

int main(){
    string answers[4] = {"1", "2 ", "3", "4"};
    int correct[1] = {1};
    Subject subject;
    subject.init(1, "Math", "Mathematics");
    Question a;
    a.init(1, "What is 1 + 1?",answers,4, correct,1, "Because: 1 + 1 = 2", 1, &subject);
    a.doQuest();
    return 0;
}