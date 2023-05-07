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
        void initUser(int id, string name, string username, string password, string dob, Grade *grade, string gender);
        void inputuser();
        void outputuser();
        void updateuser();
        void deleteuser();
};
#endif