#include <iostream>
#include <fstream>
#include "fileio.h"
#include "../app/data.h"

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

void FileIO::write_list_users()
{
    string path = this->files_path + this->users_file_name + this->files_extension;
    ofstream wf(path, ios::out | ios::binary);
    if (!wf)
    {
        cout << "Cannot open file!" << endl;
        return;
    }
    for (int i = 0; i < sizeof(users); i++)
    {
        wf.write((char *)&users[i], sizeof(User));
    }
    wf.close();
}

void FileIO::read_list_users()
{
    string path = this->files_path + this->users_file_name + this->files_extension;
    ifstream rf(path, ios::in | ios::binary);
    if (!rf)
    {
        cout << "Cannot open file!" << endl;
        return;
    }
    for (int i = 0; i < sizeof(users); i++)
    {
        rf.read((char *)&users[i], sizeof(User));
    }
    rf.close();
}