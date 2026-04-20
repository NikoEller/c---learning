#include <iostream>
#include <string>
#include <vector>

struct Message {
    std::string sender;
    std::string content;
};

void sendMessage(const std::string& from, const std::string& to, const std::string& content) {
    std::cout << from << " sendet an " << to << ": " << content << '\n';
}

int main() {
    std::cout << "=== Konzeptuelles Beispiel fuer Netzwerkkommunikation ===\n";

    std::string client = "Client";
    std::string server = "Server";

    sendMessage(client, server, "GET /index.html");
    sendMessage(server, client, "HTTP 200 OK");

    std::cout << "\n=== Beispiel fuer Nachrichtenobjekte ===\n";

    std::vector<Message> inbox = {
        {"Client", "Hallo Server"},
        {"Server", "Hallo Client"},
        {"Client", "Schicke mir Daten"}
    };

    for (const Message& message : inbox) {
        std::cout << message.sender << ": " << message.content << '\n';
    }

    std::cout << "\nIn einer echten Netzwerkbibliothek wuerde hier ueber Sockets oder eine Bibliothek kommuniziert.\n";
    return 0;
}
