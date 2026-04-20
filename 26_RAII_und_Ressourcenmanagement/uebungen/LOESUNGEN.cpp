#include <iostream>

class TimerGuard {
public:
    TimerGuard() {
        std::cout << "Timer gestartet.\n";
    }

    ~TimerGuard() {
        std::cout << "Timer beendet.\n";
    }
};

int main() {
    {
        TimerGuard timer;
        std::cout << "Arbeitsbereich aktiv.\n";
    }

    return 0;
}
