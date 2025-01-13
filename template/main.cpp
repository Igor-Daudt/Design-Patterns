#include <iostream>
#include "oracle.h"
#include "sql.h"
#include "template.h"

int main(){
    Template *database = new SQLServer();
    database->getInfoDatabase("76", "www.databasetositethatdoesnotexist.com");
}