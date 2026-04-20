#include <iostream>

class PaymentMethod {
public:
    virtual ~PaymentMethod() = default;
    virtual void pay() const = 0;
};

class CardPayment : public PaymentMethod {
public:
    void pay() const override {
        std::cout << "Bezahle mit Karte.\n";
    }
};

class CashPayment : public PaymentMethod {
public:
    void pay() const override {
        std::cout << "Bezahle bar.\n";
    }
};

int main() {
    CardPayment card;
    CashPayment cash;
    card.pay();
    cash.pay();
    return 0;
}
