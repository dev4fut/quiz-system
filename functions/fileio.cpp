#include<iostream>
#include<fstream>
#include"fileio.h"
// read questions, users, subjects
using namespace std;

void FileIO::create_file(){
    string files_content = "This is the content of the file";
    ofstream file;
    file.open(files_path + "filenametoopen" + files_extension);
    file << files_content;
    file.close();
}

void FileIO::read_file(){
    ifstream file;
    file.open(files_path + "filenametoopen" + files_extension);
    string file_content;
    file >> file_content;
    file.close();
    cout << file_content << endl;
}