#include <iostream>
#include "CFileManager.hpp"

using namespace std;

int main()
{   
    FileManager *fileManager = new FileManager();
    fileManager->OpenFile();
    fileManager->CloseFile();
}
