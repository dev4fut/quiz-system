#include<iostream>
#include"HelpMe\helpinput.h"
#include<string.h>

int main(){
    string date;
    input_date(date);
    std::cout << date;
    return 0;
}