#include <iostream>
#include "CFileManager.hpp"
#include "CLogger.hpp"

const char* CFileManager::PWD_COMMAND = "PWD"; 
const std::string CFileManager::DATA_FILE_NAME = "/data.txt";

CFileManager::CFileManager()
    : mFile()
    , mPathToFile( getenv( PWD_COMMAND ) )
{
    logInfo( "CFileManager - konstruktor" );
    mFile = std::ofstream{ mPathToFile + DATA_FILE_NAME };
}

CFileManager::~CFileManager()
{
    logInfo( "CFileManager - desktruktor" );
    mFile.close();
}
