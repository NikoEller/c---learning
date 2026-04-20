#include <iostream>
#include <string>

int main() {
    std::string name = "Anna";
    int age = 19;
    double height = 1.70;
    bool isStudent = true;

    std::cout << name << ", " << age << ", " << height << ", "
              << std::boolalpha << isStudent << '\n';
    return 0;
}
