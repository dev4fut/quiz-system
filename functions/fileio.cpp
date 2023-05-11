#include <iostream>
#include <fstream>
#include "fileio.h"

using namespace std;

FileIO::FileIO()
{
    this->path = "data/file/";
    this->extension = ".txt";
    this->gradeFile = "grade";
    this->userFile = "user";
    this->subjectFile = "subject";
    this->questionFile = "question";
}

FILE *FileIO::openFile(string file_name)
{
    string file_path = this->path + file_name + this->extension;
    FILE *file = fopen(file_path.c_str(), "wb+");
    return file;
}

void FileIO::closeFile(FILE *file)
{
    fclose(file);
}


/** 
 * @brief Write all entities from database to binary file
 * only write if ID != 0
*/

void FileIO::writeAll()
{
    FILE *file = this->openFile(this->gradeFile);
    Grade *listGrade = db.getListGrade();
    for (int i = 0; i < 10; i++)
    {
        if (listGrade[i].id != 0)
        {
            fwrite(&listGrade[i], sizeof(Grade), 1, file);
        }
    }
    this->closeFile(file);

    file = this->openFile(this->userFile);
    User *listUser = db.getListUser();
    for (int i = 0; i < 10; i++)
    {
        if (listUser[i].id != 0)
        {
            fwrite(&listUser[i], sizeof(User), 1, file);
        }
    }
    this->closeFile(file);

    file = this->openFile(this->subjectFile);
    Subject *listSubject = db.getListSubject();
    for (int i = 0; i < 10; i++)
    {
        if (listSubject[i].id != 0)
        {
            fwrite(&listSubject[i], sizeof(Subject), 1, file);
        }
    }
    this->closeFile(file);

    file = this->openFile(this->questionFile);
    Question *listQuestion = db.getListQuestion();
    for (int i = 0; i < 1000; i++)
    {
        if (listQuestion[i].id != 0)
        {
            fwrite(&listQuestion[i], sizeof(Question), 1, file);
        }
    }
    this->closeFile(file);
}

/** 
 * @brief Read all entities from binary file to database
 * only read if ID != 0
*/
void FileIO::readAll()
{
    db.cleanGrade();
    db.cleanUser();
    db.cleanSubject();
    db.cleanQuestion();

    FILE *file = this->openFile(this->gradeFile);
    Grade grade;
    while (fread(&grade, sizeof(Grade), 1, file))
    {
        db.addGrade(grade);
    }
    this->closeFile(file);

    file = this->openFile(this->userFile);
    User user;
    while (fread(&user, sizeof(User), 1, file))
    {
        db.addUser(user);
    }
    this->closeFile(file);

    file = this->openFile(this->subjectFile);
    Subject subject;
    while (fread(&subject, sizeof(Subject), 1, file))
    {
        db.addSubject(subject);
    }
    this->closeFile(file);

    file = this->openFile(this->questionFile);
    Question question;
    while (fread(&question, sizeof(Question), 1, file))
    {
        db.addQuestion(question);
    }
    this->closeFile(file);

    // db.showListGrade();
    // db.showListUser();
    // db.showListSubject();
    // db.showListQuestion();
}