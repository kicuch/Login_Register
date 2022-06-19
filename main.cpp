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
    //auto menu = make_shared<CMenu>();

    // wyswietlanie menu z loginem:
    //  login:
    //  password:
    //  or
    //  create new account:
    //  exit
    // a po zalogowaniu mozliwosc usuniecia tego konta i potwierdzenie tego usunięcia i wylogowanie z konta

        std::map<std::string, std::string> mLoginPasswordMap{ "test", "test2" };
        std::string key1("test");
        std::string value1("test2");
        auto it = std::find_if( mLoginPasswordMap.cbegin(),
                            mLoginPasswordMap.cend(),
                            [&key1, &value1]( const auto& elem )
                            {
                                return ( key1 == elem.first && value1 == elem.second );
                            });

        if( it != mLoginPasswordMap.cend() )
        {
            std::cout << it->first << endl;
            std::cout << it->second << endl;
        }
        if( it == mLoginPasswordMap.cend() )
        {
            std::cout << "No pair in map" << endl;
        }
}