#ifndef USER_H
#define USER_H

class User
{
public:
    int ID;
    string Username;
    string DateBirth;
    int Class;

    User(int ID, string Username, string DateBirth, int Class);
    void input_user();

    void output_user();

    void update_user();

    void delete_user();
};

#endif