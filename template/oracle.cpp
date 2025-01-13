#include "oracle.h"

std::string OracleServer::getDatabase(std::string databaseUrl){
    std::cout << "Getting database " << databaseUrl << " using oracle" << std::endl;
    return databaseUrl.append(".or");
}

std::string OracleServer::getInfo(std::string id){
    std::cout << "Getting info with " << id << " using oracle" << std::endl;
    return id.append("inforacle");
}
