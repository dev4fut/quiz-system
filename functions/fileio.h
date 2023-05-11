#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include "../data/database.h"

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

        // write all entities from database to binary file
        void writeAll();

        // read all entities from binary file to database
        void readAll();
        
};


#endif