#include <iostream>
#include <thread>

void printTask() {
    std::cout << "Hallo aus dem Thread.\n";
}

int main() {
    std::thread thread(printTask);
    thread.join();
    return 0;
}
