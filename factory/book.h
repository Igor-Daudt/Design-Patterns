#pragma once

#include <iostream>

class Book{
    public:
        virtual void check() = 0;
        virtual ~Book() = default;
};