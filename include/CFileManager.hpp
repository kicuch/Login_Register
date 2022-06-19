#ifndef CFILEMANAGER_HPP
#define CFILEMANAGER_HPP

#include <string>
#include <fstream>

class CFileManager
{
    public:
        CFileManager();
        ~CFileManager();

    private:
        std::ofstream mFile;
        std::string mPathToFile;

        static const char* PWD_COMMAND;
        static const std::string DATA_FILE_NAME;
};
#endif //CFILEMANAGER_HPP