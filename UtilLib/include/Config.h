
#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <nlohmann/json.hpp>

class Config {
private:
    nlohmann::json data;

public:
    Config(const std::string& filename);
    std::string getString(const std::string& key) const;
};

#endif
