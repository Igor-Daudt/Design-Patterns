#ifndef TREE_H
#define TREE_H

#include "iostream"

class Tree{
    public:
        virtual void showLeavesColor() = 0;

    protected:
        std::string color;
};

#endif