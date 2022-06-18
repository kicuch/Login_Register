#include "CFileManager.hpp"
#include <iostream>

const char* CFileManager::PWD_COMMAND = "PWD"; 
const std::string CFileManager::DATA_FILE_NAME = "/data.txt";

CFileManager::CFileManager()
    : mFile()
    , mPathToFile( getenv( PWD_COMMAND ) )
{
    std::cout << "Constructor CFileManager" << std::endl;
    std::string test( mPathToFile + DATA_FILE_NAME );
    mFile = std::ofstream{ test };
}

CFileManager::~CFileManager()
{
    std::cout << "Destructor CFileManager" << std::endl;
    mFile.close();
}
