#include <iostream>
#include <memory>
#include <map>
#include <algorithm>
#include "CFileManager.hpp"
#include "CLogger.hpp"
#include "CMenu.hpp"

using namespace std;

int main()
{
    auto menu = make_shared<CMenu>();

    // wyswietlanie menu z loginem:
    //  login:
    //  password:
    //  or
    //  create new account:
    //  exit
    // a po zalogowaniu mozliwosc usuniecia tego konta i potwierdzenie tego usunięcia i wylogowanie z konta
}