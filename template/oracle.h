#include "template.h"

class OracleServer : public Template{
    std::string getDatabase(std::string databaseUrl);
    std::string getInfo(std::string id);
};