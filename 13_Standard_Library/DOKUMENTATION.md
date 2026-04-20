# Standard Library

## Was ist die Standard Library?

Die C++ Standard Library ist eine Sammlung fertiger Werkzeuge, die du direkt benutzen kannst.

Sie enthaelt zum Beispiel:

- Container wie `std::vector` und `std::array`
- Strings mit `std::string`
- Hilfstypen wie `std::pair`

## Warum ist sie wichtig?

- spart viel eigene Arbeit
- ist getestet und standardisiert
- oft sicherer als selbst gebaute Low-Level-Loesungen

## Hauefige Beispiele

```cpp
std::vector<int> values;
std::array<int, 3> arr = {1, 2, 3};
std::pair<std::string, int> player = {"Alex", 10};
```

## Merksatz

Bevor du etwas selbst baust, lohnt sich fast immer ein Blick in die Standard Library.
