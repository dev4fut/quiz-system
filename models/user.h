// header file for user class
#ifndef USER_H
#define USER_H
#include <string>
#include "grade.h"
using namespace std;

class User{
    public:
        int id;
        string name;
        string username;
        string password;
        string dob;
        Grade *grade;
        string gender;
            
        User();
        void init(int id, string name, string username, string password, string dob, Grade *grade, string gender);
        void input();
        void output();
        void update();
        void remove();
};
#endif