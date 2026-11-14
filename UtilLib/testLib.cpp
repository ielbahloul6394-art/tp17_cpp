
#include <iostream>
#include "Logger.h"
#include "Config.h"

using namespace std;

int main() {
    Logger::getInstance().log("Demarrage du programme");

    try {
        Config config("config.json");

        cout << "Nom : "
             << config.getString("nom") << endl;

        cout << "Version : "
             << config.getString("version") << endl;
    }
    catch (const exception& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
