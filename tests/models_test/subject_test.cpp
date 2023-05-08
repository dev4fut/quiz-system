#include<iostream>
#include "..\..\models\subject.h"

using namespace std;

int main(){
    Subject subject;
    subject.init(1, "Math", "Mathematics");
    subject.output();
    subject.update();
    subject.output();
    subject.remove();
    subject.output();
    return 0;
}