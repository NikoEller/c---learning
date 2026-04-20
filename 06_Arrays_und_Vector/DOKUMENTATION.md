# Arrays und Vector

## Die Grundidee

Sowohl Arrays als auch `std::vector` speichern mehrere Werte desselben Typs.

Beide eignen sich also zum Beispiel fuer:

- Listen von Zahlen
- mehrere Namen
- Messwerte

## Array

Ein Array hat eine feste Groesse.

```cpp
int arr[3] = {1, 2, 3};
```

Das bedeutet:

- es gibt genau 3 Elemente
- die Groesse ist nachtraeglich nicht flexibel
- der Zugriff erfolgt ueber Indizes wie `arr[0]`

## Vector

Ein `std::vector` ist ein Container aus der Standard Library.

```cpp
std::vector<int> values = {1, 2, 3};
values.push_back(4);
```

Vorteile:

- kann wachsen
- hat praktische Funktionen wie `.size()`
- ist in modernem C++ oft die bessere Standardwahl

## Zugriff per Index

```cpp
arr[0]
values[0]
```

Der erste Index ist immer `0`.

## Typische Fehler

- ausserhalb des gueltigen Bereichs zugreifen
- vergessen, dass Arrays feste Groesse haben
- `std::vector` nicht mit `#include <vector>` einbinden

## Merksatz

Array = feste Groesse, `std::vector` = flexibel und in der Praxis oft bequemer.
