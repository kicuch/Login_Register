#include <string>
#include <fstream>

class FileManager
{
    public:
        FileManager();
        ~FileManager();
        void OpenFile();
        void CloseFile();

    private:
        std::ofstream mFile;
        std::string mPathToFile;
};