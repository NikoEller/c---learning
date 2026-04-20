#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Notifier {
public:
    virtual ~Notifier() = default;

    virtual std::string channel_name() const = 0;
    virtual void send(const std::string& receiver, const std::string& message) const = 0;

    void print_header() const {
        std::cout << "Sende ueber Kanal: " << channel_name() << '\n';
    }
};

class EmailNotifier : public Notifier {
public:
    std::string channel_name() const override {
        return "E-Mail";
    }

    void send(const std::string& receiver, const std::string& message) const override {
        std::cout << "E-Mail an " << receiver << ": " << message << '\n';
    }
};

class SmsNotifier : public Notifier {
public:
    std::string channel_name() const override {
        return "SMS";
    }

    void send(const std::string& receiver, const std::string& message) const override {
        std::cout << "SMS an " << receiver << ": " << message << '\n';
    }
};

class PushNotifier : public Notifier {
public:
    std::string channel_name() const override {
        return "Push";
    }

    void send(const std::string& receiver, const std::string& message) const override {
        std::cout << "Push an " << receiver << ": " << message << '\n';
    }
};

void send_welcome_message(const Notifier& notifier, const std::string& receiver) {
    notifier.print_header();
    notifier.send(receiver, "Willkommen im System.");
}

int main() {
    std::cout << "=== Abstrakte Klassen und Interfaces ===\n";

    std::vector<std::unique_ptr<Notifier>> notifiers;
    notifiers.push_back(std::make_unique<EmailNotifier>());
    notifiers.push_back(std::make_unique<SmsNotifier>());
    notifiers.push_back(std::make_unique<PushNotifier>());

    for (const auto& notifier : notifiers) {
        send_welcome_message(*notifier, "niko@example.com");
        std::cout << "---\n";
    }

    return 0;
}
