#include <string>

class FileManager
{
    public:
        FileManager(std::string pathToFile);
        ~FileManager();
        void OpenFile();
        void CloseFile();

    private:
        std::string mFile;
};