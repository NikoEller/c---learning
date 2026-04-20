# Klassen und Objekte

## Was ist eine Klasse?

Eine Klasse ist ein Bauplan fuer Objekte.

Eine Klasse beschreibt:

- welche Daten ein Objekt hat
- welche Funktionen ein Objekt ausfuehren kann

## Was ist ein Objekt?

Ein Objekt ist eine konkrete Instanz einer Klasse.

```cpp
Car car;
```

## Beispiel

```cpp
class Car {
public:
    std::string brand;
    int year;
};
```

## Methoden

Methoden sind Funktionen innerhalb einer Klasse.

```cpp
void print() const {
    std::cout << brand;
}
```

## `public` und `private`

- `public`: von aussen zugreifbar
- `private`: nur innerhalb der Klasse direkt nutzbar

## Merksatz

Klassen fassen Daten und passendes Verhalten zusammen.
