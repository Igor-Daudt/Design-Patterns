#ifndef BOOK_H
#define BOOK_H

#include "book.h"

class Library{
    public:
        virtual ~Library() = default;
        Book* buyBook();
    protected:
        virtual Book* createBook() = 0;
};

#endif