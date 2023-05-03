#include <iostream>
#include "wardoc.h"
// Working On Progress
using namespace std;

void open(){
    FILE *open;
    open = fopen("general.txt", "ab");
    
    fclose(open);
}

void close(){
    FILE *close;
    close = fopen("general.txt", "r");

    fclose(close);
}

void write(){
    FILE *write;
    write = fopen("general.txt", "w");
    
    cout << "Username";
    fclose(write);
}

void append(){
    FILE *append;
    append = fopen("general.txt", "ab+");

    fclose(append);
}

void read(){
    FILE *read;
    read = fopen("general.txt", "r");

    fclose(read);
}

void del(){
    if(remove("general.txt") == 0)
    {
        cout << "Remmove Success";
    }
    else
    {
        cout << "Unable to remove file";
    }
}
