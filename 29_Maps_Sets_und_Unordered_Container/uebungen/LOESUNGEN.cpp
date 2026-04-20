#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
    std::map<std::string, int> scores;
    scores["Niko"] = 10;
    scores["Anna"] = 15;

    for (const auto& entry : scores) {
        std::cout << entry.first << ": " << entry.second << '\n';
    }

    std::set<int> values = {1, 2, 2, 3};
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
