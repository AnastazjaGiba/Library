#pragma once
#include <string>

class Book
{
public:
    Book(
        std::string title,
        std::string author
    );
    void show();


private:
    std::string title_;
    std::string author_;    
};