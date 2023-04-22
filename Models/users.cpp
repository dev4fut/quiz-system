#include "helpio.h"
#include <stdio.h>
#include <string.h>

class User{
    public:
        int ID;
        string Username;
        string DateBirth;
        int Class;
            
        User(int ID, string Username, string DateBirth, int Class){
            this->ID = ID;
            this->Username = Username;
            this->DateBirth = DateBirth;
            this->Class = Class;
        }

        void input_user(){
            printf("Username: ");
            scanf("%s", &Username);
            printf("Date of birth: ");
            this->DateBirth = input_date();
            printf("Class: ");
            scanf("%d", &Class);
        }

        void output_user(){
            printf("ID: %d, Username: %s, Date of birth: %s, Class: %d", ID, Username, DateBirth, Class);
        }

        void update_user(){
            // null entered is skipped change
            string temp;
            printf("Username: ");
            scanf("%s", &temp);
            if (temp != "") Username = temp;
            printf("Date of birth: ");
            input_date(temp);
            if (temp != "") DateBirth = temp;
            printf("Class: ");
            scanf("%s", &temp);
            if (temp != "") Class = stoi(temp);
        }

        void delete_user(){
            // delete object user
            delete this;
        }
};