#include <iostream>
#include <fstream>
#include "../data/database.h"
#include "fileio.h"

using namespace std;

FileIO::FileIO()
{
    this->path = "data\\";
    this->extension = ".txt";
    this->gradeFile = "grade";
    this->userFile = "user";
    this->subjectFile = "subject";
    this->questionFile = "question";
}

FILE *FileIO::openFile(string file_name)
{
    string path = this->path + file_name + this->extension;
    FILE *file = fopen(path.c_str(), "wb");
    return file;
}

void FileIO::closeFile(FILE *file)
{
    fclose(file);
}

void FileIO::writeGradeFile()
{
    FILE *file = this->openFile(this->gradeFile);
    Grade *grade = db.getListGrade();
    // write to file if grade id is not 0
    while (grade->id != 0)
    {
        fwrite(grade, sizeof(Grade), 1, file);
        grade++;
    }
    this->closeFile(file);
}

void FileIO::readGradeFile()
{
    FILE *file = this->openFile(this->gradeFile);
    Grade *grade = db.getListGrade();
    // read from file if grade id is not 0
    while (grade->id != 0)
    {
        fread(grade, sizeof(Grade), 1, file);
        grade++;
    }
    this->closeFile(file);
}