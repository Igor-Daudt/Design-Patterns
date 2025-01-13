#include "sql.h"

std::string SQLServer::getDatabase(std::string databaseUrl){
    std::cout << "Getting database " << databaseUrl << " using sql" << std::endl;
    return databaseUrl.append(".com");
}

std::string SQLServer::getInfo(std::string id){
    std::cout << "Getting info with " << id << " using sql" << std::endl;
    return id.append("info");
}

