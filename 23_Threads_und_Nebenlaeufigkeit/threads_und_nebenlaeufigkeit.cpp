#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex outputMutex;

void workerTask(const std::string& name, int pauseMs) {
    {
        std::lock_guard<std::mutex> lock(outputMutex);
        std::cout << name << " startet.\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(pauseMs));

    {
        std::lock_guard<std::mutex> lock(outputMutex);
        std::cout << name << " beendet sich.\n";
    }
}

int main() {
    std::cout << "=== Threads starten ===\n";

    std::thread first(workerTask, "Thread A", 120);
    std::thread second(workerTask, "Thread B", 80);

    std::cout << "Main wartet auf beide Threads.\n";
    first.join();
    second.join();

    std::cout << "Alle Threads sind fertig.\n";
    return 0;
}
