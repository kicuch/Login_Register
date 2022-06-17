#include "CFileManager.hpp"
#include <fstream>
#include <iostream>

FileManager::FileManager( std::string pathToFile )
    : mFile( pathToFile )
{
    std::cout << "DUPA w FileManager" << std::endl;
    std::cout << mFile << std::endl;
}
FileManager::~FileManager()
{

}
void FileManager::OpenFile()
{

}
void FileManager::CloseFile()
{

}
