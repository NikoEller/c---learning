#include <iostream>
#include <string>

class ResourceGuard {
public:
    explicit ResourceGuard(std::string resourceName)
        : name(std::move(resourceName)) {
        std::cout << "Ressource uebernommen: " << name << '\n';
    }

    ~ResourceGuard() {
        std::cout << "Ressource freigegeben: " << name << '\n';
    }

private:
    std::string name;
};

void useResource() {
    // Der Guard uebernimmt die Ressource beim Erzeugen.
    ResourceGuard guard("Datei-Handle");
    std::cout << "Arbeite mit der Ressource innerhalb der Funktion.\n";
}

int main() {
    std::cout << "=== RAII Beispiel ===\n";

    {
        ResourceGuard guard("Temporäre Ressource");
        std::cout << "Innerhalb des Blocks ist die Ressource gueltig.\n";
    }

    std::cout << "\nNach dem Block wurde automatisch aufgeraeumt.\n\n";

    useResource();

    std::cout << "\nAuch nach dem Funktionsende wird automatisch aufgeraeumt.\n";
    return 0;
}
