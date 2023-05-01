#include<iostream>
#include<fstream>
#include"fileio.h"

using namespace std;

void FileIO::create_file(){
    string files_content = "This is the content of the file";
    ofstream file;
    file.open(files_path + "filenametoopen" + files_extension);
    file << files_content;
    file.close();
}