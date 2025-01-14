#include <iostream>
#include "terrorLibrary.h"
#include "dramaLibrary.h"
#include "book.h"
#include "library.h"

using namespace std;

int main(){
    Library *dramaLib = new DramaLibrary();
    Book *dramaBook = dramaLib->buyBook();
    dramaBook->check();

    Library *terrorLib = new TerrorLibrary();
    Book *terrorBook = terrorLib->buyBook();
    terrorBook->check();
}