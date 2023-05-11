#include<iostream>
#include<fstream>
#include "..\..\functions\fileio.h"

using namespace std;

int main()
{
    FileIO fileio;
    fileio.writeAll();
    fileio.readAll();
    return 0;
}