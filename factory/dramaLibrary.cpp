#include "dramaLibrary.h"
#include "dramaBook.h"

Book* DramaLibrary::createBook(){
    return new DramaBook();
}