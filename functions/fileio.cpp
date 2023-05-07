#include <iostream>
#include <fstream>
#include "fileio.h"

using namespace std;

FileIO::FileIO()
{
    this->users_file_name = "users.txt";
    this->files_path = "app/data/";
    this->files_extension = ".txt";
}

FILE *FileIO::open_file(string file_name)
{
    string path = this->files_path + file_name + this->files_extension;
    FILE *file = fopen(path.c_str(), "rb+");
    return file;
}

void FileIO::close_file(FILE *file)
{
    fclose(file);
}