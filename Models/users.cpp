#include "helpio.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>

class User{
    public:
        int ID;
        string Username;
        string DateBirth;
        int Class;
        string Password;
        string Gender;
            
        User(int ID, string Username, string DateBirth, int Class, string Password, string Gender){
            this->ID = ID;
            this->Username = Username;
            this->DateBirth = DateBirth;
            this->Class = Class;
            this->Password = Password;
            this->Gender = Gender;
        }

        void input_user(){
            printf("Username: ");
            scanf("%s", &Username);
            printf("Password: ");
            scanf("%s", &Password);
            printf("Date of birth: ");
            this->DateBirth = input_date();
            printf("Class: ");
            scanf("%d", &Class);
            printf("Gender: ");
            scanf("%s", &Gender);
        }

        void output_user(int i = 0){
            printf("User %d: ", i + 1);
            printf("ID: %d\n, Username: %s\n, Gender: %s\n, Date of birth: %s\n, Class: %d\n, Password: %s\n", ID, Username, Gender, DateBirth, Class, Password);
        }

        void update_user(){
            // null entered is skipped change
            string temp;
            printf("Username: ");
            scanf("%s", &temp);
            if (temp != "") Username = temp;
            printf("Password: ");
            scanf("%s", &Password);
            if (temp != "") Password = temp;
            printf("Date of birth: ");
            temp = input_date();
            if (temp != "") DateBirth = temp;
            printf("Class: ");
            scanf("%s", &temp);
            if (temp != "") Class = stoi(temp);
            printf("Gender: ");
            scanf("%s", &Gender);
            if (temp != "") Gender = temp;
        }

        void delete_user(){
            // delete object user
            delete this;
        }
};