#include <iostream>
#include <string>

class Book {
public:
    std::string title;
    int pages;
};

int main() {
    Book book;
    book.title = "C++ Basics";
    book.pages = 180;
    std::cout << book.title << ", " << book.pages << '\n';
    return 0;
}
