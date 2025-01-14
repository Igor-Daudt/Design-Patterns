#include "library.h"

Book* Library::buyBook(){
    Book* book = this->createBook();
    return book;
}