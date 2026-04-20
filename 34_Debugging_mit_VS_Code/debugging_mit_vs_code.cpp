#include <iostream>
#include <vector>

int normalize_score(int raw_score) {
    if (raw_score < 0) {
        return 0;
    }

    if (raw_score > 100) {
        return 100;
    }

    return raw_score;
}

double calculate_average(const std::vector<int>& scores) {
    int sum = 0;

    for (std::size_t index = 0; index < scores.size(); ++index) {
        const int normalized = normalize_score(scores[index]);
        sum += normalized;
    }

    return static_cast<double>(sum) / static_cast<double>(scores.size());
}

int count_scores_above(const std::vector<int>& scores, int threshold) {
    int count = 0;

    for (int score : scores) {
        if (normalize_score(score) > threshold) {
            ++count;
        }
    }

    return count;
}

int main() {
    const std::vector<int> scores = {120, 95, 67, -5, 88};

    std::cout << "Setze Breakpoints in normalize_score, calculate_average und count_scores_above.\n";
    std::cout << "Durchschnitt der normalisierten Werte: " << calculate_average(scores) << '\n';
    std::cout << "Anzahl Werte ueber 80: " << count_scores_above(scores, 80) << '\n';
    return 0;
}
