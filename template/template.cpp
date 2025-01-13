#include "template.h"

void Template::getInfoDatabase(std::string id, std::string databaseUrl){
    this->getDatabase(databaseUrl);
    this->getInfo(id);
    std::cout << "done" << std::endl;
}