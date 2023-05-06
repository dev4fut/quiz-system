#include<iostream>
#include "..\..\models\subject.h"

using namespace std;

int main(){
    Subject subject;
    subject.initSubject(1, "Math", "Mathematics");
    subject.outputSubject();
    subject.updateSubject();
    subject.outputSubject();
    subject.deleteSubject();
    subject.outputSubject();
    return 0;
}