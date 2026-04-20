#include <iostream>
#include <string>

int main() {
    std::string city = "Berlin";
    std::string country = "Deutschland";
    std::string text = city + ", " + country;
    std::cout << text << '\n';
    std::cout << text.size() << '\n';
    return 0;
}
