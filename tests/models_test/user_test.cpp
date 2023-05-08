#include<iostream>
#include"../../models/user.h"

using namespace std;

int main()
{
    Grade grade;
    grade.init(1, "10A1", "Mr. A",2018);

    User user;
    user.init(1,"Daniel", "danthienphuc", "@Bc123","01/01/1998", &grade,"Male");
    user.output();
    user.input();
    user.output();
    user.update();
    user.output();
    user.remove();
    user.output();
    return 0;
}