#include "CFileManager.hpp"
#include <iostream>

FileManager::FileManager()
    : mFile()
    , mPathToFile( getenv("PWD") )
{
    std::cout << "Constructor CFileManager" << std::endl;
    std::string test(mPathToFile + "/data.txt");
    std::cout << test << std::endl;
    mFile = std::ofstream{ test };
}
FileManager::~FileManager()
{

}
void FileManager::OpenFile()
{
    std::cout << "Open file" << std::endl;
}
void FileManager::CloseFile()
{
    std::cout << "Close file" << std::endl;
}
