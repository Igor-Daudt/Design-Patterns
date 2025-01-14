#include "terrorLibrary.h"
#include "terrorBook.h"

Book* TerrorLibrary::createBook(){
    return new TerrorBook();
}