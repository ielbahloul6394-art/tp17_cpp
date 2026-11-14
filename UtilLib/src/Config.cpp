
#include "Config.h"
#include <fstream>
#include <stdexcept>

Config::Config(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw std::runtime_error("Impossible d'ouvrir le fichier JSON");
    }

    file >> data;
}

std::string Config::getString(const std::string& key) const {
    if (!data.contains(key)) {
        throw std::runtime_error("Cle introuvable");
    }

    return data.at(key).get<std::string>();
}
