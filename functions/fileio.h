#ifndef FILEIO_H
#define FILEIO_H

#include <string>

using namespace std;

class FileIO{
    public:
        string users_file_name;
        string files_path;
        string files_extension;
        
        FileIO();

        FILE *open_file(string file_name);
        void close_file(FILE *file);

        // write list entities to file
        // write list users to file
        void write_list_users();


        // read list entities from file
        // read list users from file and save to users in app/data.h
        void read_list_users();

        
};


#endif