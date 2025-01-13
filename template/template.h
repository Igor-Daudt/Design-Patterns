#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>

class Template{
    public:
        void getInfoDatabase(std::string id, std::string databaseUrl);
    protected:
        virtual std::string getDatabase(std::string databaseUrl) = 0;
        virtual std::string getInfo(std::string id) = 0;
};

#endif