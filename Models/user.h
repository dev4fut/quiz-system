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
            
        User();
        User(int id, string name, string username, string password, string dob, Grade *grade);
        void input_user();
        void output_user();
        void update_user();
        void delete_user();
};
#endif