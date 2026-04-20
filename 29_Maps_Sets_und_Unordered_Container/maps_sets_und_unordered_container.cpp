#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int main() {
    std::cout << "=== std::map ===\n";
    std::map<std::string, int> scores;

    // operator[] legt neue Eintraege an oder ueberschreibt vorhandene.
    scores["Anna"] = 1;
    scores["Ben"] = 2;
    scores["Clara"] = 1;
    scores["Ben"] = 3;

    for (const auto& entry : scores) {
        std::cout << entry.first << ": Note " << entry.second << '\n';
    }

    auto score_it = scores.find("Clara");
    if (score_it != scores.end()) {
        std::cout << "Claras Note gefunden: " << score_it->second << '\n';
    }

    std::cout << "\n=== std::set ===\n";
    std::set<std::string> tags = {"cpp", "git", "cpp", "algorithmen"};
    for (const auto& tag : tags) {
        std::cout << tag << ' ';
    }
    std::cout << '\n';

    std::cout << "\n=== std::unordered_map ===\n";
    const std::vector<std::string> words = {"rot", "blau", "rot", "gruen", "rot", "blau"};
    std::unordered_map<std::string, int> frequency;

    for (const auto& word : words) {
        ++frequency[word];
    }

    for (const auto& entry : frequency) {
        std::cout << entry.first << ": " << entry.second << '\n';
    }

    std::cout << "\n=== std::unordered_set ===\n";
    std::unordered_set<int> seen_numbers = {4, 1, 4, 2, 9};

    if (seen_numbers.find(2) != seen_numbers.end()) {
        std::cout << "Die Zahl 2 ist im Set enthalten.\n";
    }

    std::cout << "Anzahl eindeutiger Werte: " << seen_numbers.size() << '\n';
    return 0;
}
