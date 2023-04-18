#include <stdio.h>
#include <HelpMe/helpinput.h>
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
            input_date(DateBirth);
            printf("Class: ");
            scanf("%d", &Class);
        }

        void output_user(){
            printf("ID: %d, Username: %s, Date of birth: %s, Class: %d", ID, Username, DateBirth, Class);
        }

        void update_user(){
            // null entered is skipped change
            string Username;
            string DateBirth;
            int Class;
            printf("Username: ");
            scanf("%s", &Username);
            if(Username != ""){
                this->Username = Username;
            }
            printf("Date of birth: ");
            input_date(DateBirth);
            if(DateBirth != ""){
                this->DateBirth = DateBirth;
            }
            printf("Class: ");
            scanf("%d", &Class);
            if(Class != ""){
                this->Class = Class;
            }
        }
};

void updateUser(user &u){
    // null entered is skipped change
    char Username[50];
    char DateBirth[10];
    int Class;
    printf("Username: ");
    scanf("%s", &Username);
    if(Username != ""){
        u->Username = Username;
    }
    printf("Date of birth: ");
    &DateBirth = input_date();
    if(DateBirth != ""){
        u.DateBirth = DateBirth;
    }
    printf("Class: ");
    scanf("%d", &Class);
    if(Class != ""){
        u.Class = Class;
    }
}