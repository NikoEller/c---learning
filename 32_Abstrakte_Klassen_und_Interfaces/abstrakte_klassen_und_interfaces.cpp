#include <iostream>
#include <memory>
#include <vector>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Zeichne einen Kreis.\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Zeichne ein Rechteck.\n";
    }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>());
    shapes.push_back(std::make_unique<Rectangle>());

    std::cout << "=== Abstrakte Klassen ===\n";
    for (const auto& shape : shapes) {
        shape->draw();
    }

    return 0;
}
