#include "book.hpp"
#include <iostream>

Book::Book(
        std::string title,
        std::string author
    ) :
    title_(title),
    author_(author)
    {

    }


void Book::show()
{
    std::cout << "Title: " << title_ << std::endl;
    std::cout << "Author: " << author_ << std::endl;
}