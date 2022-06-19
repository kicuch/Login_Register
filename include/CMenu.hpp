#include <map>

class CMenu
{
public:
    CMenu();

    void mainMenu();

    void loginMenu();

    void loggedMenu();

    void accountInformationMenu();

    void registerMenu();

private:
    std::map<std::string, std::string> mLoginPasswordMap;
};