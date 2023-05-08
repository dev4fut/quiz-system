#include<iostream>
#include "..\..\models\grade.h"

using namespace std;

int main(void)
{ 
    Grade a;
    a.init(1, "A", "Mr. A", 2023);
    a.output();
    a.input();
    a.output();
    a.update();
    a.output();
    a.remove();
    a.output();
    return 0;
}