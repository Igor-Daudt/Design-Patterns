#include "template.h"

class SQLServer : public Template{
    std::string getDatabase(std::string databaseUrl);
    std::string getInfo(std::string id);
};