#ifndef FILEIO_H
#define FILEIO_H

#include <string>

using namespace std;

class FileIO{
    public:
        string files_name[10];
        string files_path;
        string files_extension;
        
        FileIO();
        FileIO(string file_name, string file_path, string file_extension, string file_full_path, string file_content);
        void create_file();
        void read_file();
        void update_file();
        void delete_file();
};


#endif