#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>

int main() {
    std::cout << "=== std::map ===\n";
    std::map<std::string, int> ages;
    ages["Anna"] = 20;
    ages["Ben"] = 25;
    ages["Clara"] = 22;

    for (const auto& entry : ages) {
        std::cout << entry.first << ": " << entry.second << '\n';
    }

    std::cout << "\n=== std::set ===\n";
    std::set<int> uniqueNumbers = {3, 1, 3, 2, 2, 5};
    for (int number : uniqueNumbers) {
        std::cout << number << ' ';
    }
    std::cout << '\n';

    std::cout << "\n=== std::unordered_map ===\n";
    std::unordered_map<std::string, std::string> capitals;
    capitals["Deutschland"] = "Berlin";
    capitals["Frankreich"] = "Paris";
    capitals["Italien"] = "Rom";

    std::cout << "Hauptstadt von Deutschland: " << capitals["Deutschland"] << '\n';
    return 0;
}
