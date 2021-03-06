#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "CMenu.hpp"
#include "CLogger.hpp"

using namespace std;

CMenu::CMenu()
{
    mainMenu();
}

void CMenu::mainMenu()
{
    int result = 0;
    do
    {
        cout << "LOGIN AND REGISTER" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Exit" << endl;
        cout << "$: ";
        cin >> result;
        if (result == 1)
        {
            loginMenu();
        }
        else if (result == 2)
        {
            registerMenu();
        }
        else if (result == 3)
        {
            cout << "Exiting..." << endl;
            exit(0);
        }
        else
        {
            cout << "Please, correct your choice!" << endl;
            system("clear");
        }
    } while (result != 1 || result != 2 || result != 3);
}

void CMenu::loginMenu()
{
    std::string login(""), password("");
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    auto it = std::find_if( mLoginPasswordMap.cbegin(),
                            mLoginPasswordMap.cend(),
                            [&login, &password]( std::pair<std::string, std::string> const& elem )
                            {
                                return ( login == elem.first && password == elem.second );
                            });
    if( it != mLoginPasswordMap.cend() )
    {
        system("clear");
        cout << "You are logged in! Welcome!" << endl;
        loggedMenu();
    }
    else
    {
        system( "clear" );
        cout << "Incorrect login or password" << endl;
        loginMenu();
    }
}

void CMenu::loggedMenu()
{
    int result = 0;
    cout << "1. Check account information" << endl;
    cout << "2. Logout" << endl;
    cout << "$: ";
    cin >> result;
    switch (result)
    {
    case 1:
        accountInformationMenu();
        break;
    case 2:
        mainMenu();
        break;
    default:
        cout << "Prosze wybierz inna opcje!" << endl;
        break;
    }
}

void CMenu::accountInformationMenu()
{
    cout << "Account Information!" << endl;
    int result = 0;
    cout << "1. Return" << endl;
    cout << "$: ";
    cin >> result;
    switch (result)
    {
    case 1:
        loggedMenu();
        break;
    default:
        cout << "Prosze wybierz inna opcje!" << endl;
        accountInformationMenu();
        break;
    }
}

void CMenu::registerMenu()
{
    cout << "Witamy w rejestracji konta!" << endl;
    cout << "Prosz?? wpisz login i haslo: " << endl;
    std::string login(""), password("");
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    cout << "Konto za??o??one, prosz?? zaloguj si?? :) " << endl;
    // operacja zapisania loginu i has??a
    mainMenu();
}
