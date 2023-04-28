// header file for user class
#ifndef USER_H
#define USER_H
#include <string>
#include "grade.h"
using namespace std;

class User{
    public:
        int ID;
        string username;
        string dateBirth;
        Grade grade;
            
        User();
        User(int ID, string Username, string DateBirth, int Class);
        void input_user();
        void output_user();
        void update_user();
        void delete_user();
};
#endif