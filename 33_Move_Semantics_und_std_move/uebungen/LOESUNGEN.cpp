#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string text = "Hallo Move";
    std::string target = std::move(text);

    std::cout << "target = " << target << '\n';
    std::cout << "text = " << text << '\n';
    return 0;
}
