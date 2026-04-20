#include <iostream>

void doubleValue(int* ptr) {
    if (ptr != nullptr) {
        *ptr *= 2;
    }
}

int main() {
    std::cout << "=== Loesung 1 ===\n";
    int age = 21;
    int* ptrAge = &age;
    std::cout << "Wert von age: " << age << '\n';
    std::cout << "Adresse von age: " << &age << '\n';
    std::cout << "Adresse im Pointer: " << ptrAge << '\n';
    std::cout << "Wert ueber *ptrAge: " << *ptrAge << "\n\n";

    std::cout << "=== Loesung 2 ===\n";
    int number = 10;
    int* ptrNumber = &number;
    *ptrNumber = 50;
    std::cout << "number = " << number << "\n\n";

    std::cout << "=== Loesung 3 ===\n";
    int value = 15;
    doubleValue(&value);
    std::cout << "Verdoppelter Wert: " << value << "\n\n";

    std::cout << "=== Loesung 4 ===\n";
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        std::cout << "Pointer ist nullptr und wird nicht dereferenziert.\n\n";
    }

    std::cout << "=== Loesung 5 ===\n";
    int arr[5] = {2, 4, 6, 8, 10};
    int* arrPtr = arr;
    std::cout << *arrPtr << '\n';
    std::cout << *(arrPtr + 1) << '\n';
    std::cout << *(arrPtr + 2) << "\n\n";

    std::cout << "=== Loesung 6 ===\n";
    int a = 5;
    int b = 9;
    int* switchPtr = &a;
    std::cout << "Zuerst: " << *switchPtr << '\n';
    switchPtr = &b;
    std::cout << "Danach: " << *switchPtr << "\n\n";

    std::cout << "=== Loesung 7 ===\n";
    const int constValue = 100;
    const int* ptr1 = &constValue;

    int editable = 20;
    int* const ptr2 = &editable;
    *ptr2 = 25;

    const int fixed = 300;
    const int* const ptr3 = &fixed;

    std::cout << "*ptr1 = " << *ptr1 << '\n';
    std::cout << "*ptr2 = " << *ptr2 << '\n';
    std::cout << "*ptr3 = " << *ptr3 << "\n\n";

    std::cout << "=== Loesung 8 ===\n";
    int* safePtr = nullptr;
    if (safePtr != nullptr) {
        std::cout << *safePtr << '\n';
    } else {
        std::cout << "safePtr ist nullptr.\n";
    }
    std::cout << '\n';

    std::cout << "=== Loesung 9 ===\n";
    int shared = 11;
    int* p1 = &shared;
    int* p2 = &shared;
    *p1 = 42;
    std::cout << "Wert ueber p2: " << *p2 << '\n';

    return 0;
}
