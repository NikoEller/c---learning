#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

class ScopedConnection {
public:
    explicit ScopedConnection(std::string connectionName)
        : name(std::move(connectionName)) {
        std::cout << "[open] " << name << '\n';
    }

    ~ScopedConnection() {
        std::cout << "[close] " << name << '\n';
    }

    void send(const std::string& message) const {
        std::cout << "[" << name << "] " << message << '\n';
    }

private:
    std::string name;
};

void success_case() {
    std::cout << "\n=== Erfolgsfall ===\n";

    ScopedConnection connection("Datei-Handle");
    connection.send("Lese Daten aus der Datei.");
    connection.send("Verarbeite die eingelesenen Inhalte.");
}

void early_return_case(bool should_return_early) {
    std::cout << "\n=== Fruehes return ===\n";

    ScopedConnection connection("Datenbank-Verbindung");
    connection.send("Starte Anfrage.");

    if (should_return_early) {
        std::cout << "Die Funktion verlaesst den Scope vorzeitig.\n";
        return;
    }

    connection.send("Fuehre weitere Schritte aus.");
}

void exception_case() {
    std::cout << "\n=== Exception-Fall ===\n";

    ScopedConnection connection("Netzwerk-Socket");
    connection.send("Sende Anfrage an den Server.");

    throw std::runtime_error("Simulierter Fehler waehrend der Verarbeitung.");
}

int main() {
    std::cout << "RAII bindet Ressourcen an Objekte und nicht an manuelle Aufraeumlogik.\n";

    success_case();
    early_return_case(true);

    try {
        exception_case();
    } catch (const std::exception& exception) {
        std::cout << "Exception abgefangen: " << exception.what() << '\n';
    }

    std::cout << "\nBeachte: Alle Ressourcen wurden trotzdem sauber freigegeben.\n";
    return 0;
}
