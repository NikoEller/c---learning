#include <chrono>
#include <iostream>
#include <thread>

void workerTask() {
    std::cout << "Worker startet.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Worker beendet.\n";
}

int main() {
    std::cout << "Main startet Thread.\n";
    std::thread worker(workerTask);
    worker.join();
    std::cout << "Main ist fertig.\n";
    return 0;
}
