#ifndef FILEIO_H
#define FILEIO_H

#include <string>

using namespace std;

class FileIO{
    public:
        string gradeFile;
        string userFile;
        string subjectFile;
        string questionFile;
        string path;
        string extension;
        
        FileIO();

        FILE *openFile(string file_name);
        void closeFile(FILE *file);

        // write entity list from database to file
        void writeGradeFile();
        void writeUserFile();
        void writeSubjectFile();
        void writeQuestionFile();

        // read entity list from file to database
        void readGradeFile();
        void readUserFile();
        void readSubjectFile();
        void readQuestionFile();
        
};


#endif