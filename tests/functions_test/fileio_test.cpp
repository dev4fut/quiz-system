#include<iostream>
#include<fstream>
#include "..\..\app\data.h"
#include "..\..\functions\fileio.h"

using namespace std;

int main()
{
    FileIO fileio;
    initListUser();
    // fileio.write_list_users();
    // fileio.read_list_users();
    for (int i = 0; i < sizeof(users); i++)
    {
        cout << users[i]->username << endl;
    }
    return 0;
}