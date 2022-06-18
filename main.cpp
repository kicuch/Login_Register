#include <iostream>
#include <memory> 
#include "CFileManager.hpp"
#include "CLogger.hpp"

using namespace std;

int main()
{   
    auto fileManager = make_shared<CFileManager>();

    //dodac definy

    //wyswietlanie menu z loginem:
    // login:
    // password:
    // or
    // create new account:
    // exit
    //a po zalogowaniu mozliwosc usuniecia tego konta i potwierdzenie tego usunięcia i wylogowanie z konta

}