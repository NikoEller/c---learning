# Const

## Was bedeutet `const`?

`const` bedeutet: Dieser Wert soll nach der Initialisierung nicht mehr
veraendert werden.

```cpp
const int maxValue = 100;
```

## Warum ist `const` wichtig?

- verhindert ungewollte Aenderungen
- macht Code klarer
- zeigt Absicht sehr deutlich
- hilft dem Compiler, fehlerhafte Aenderungen frueher zu erkennen

## Hauefige Einsatzorte

- konstante Variablen
- Referenzen auf Werte, die nicht veraendert werden sollen
- Methoden, die ein Objekt nicht aendern

## `const` bei Variablen

```cpp
const double pi = 3.14159;
```

Das ist sinnvoll fuer Werte, die sich im Programm nicht aendern sollen.

## `const` bei Referenzen

```cpp
void printValue(const int& value) {
    std::cout << value;
}
```

Hier darf `value` in der Funktion nicht veraendert werden.

Das ist besonders praktisch, wenn etwas nur gelesen werden soll.

## `const` bei Methoden

```cpp
class Counter {
public:
    int get() const;
};
```

Das `const` hinter der Methode bedeutet:

- diese Methode soll das Objekt nicht veraendern

Gerade bei Klassen ist das ein sehr wichtiger Teil sauberer Schnittstellen.

## Typische Fehler

- `const` zu spaet oder gar nicht verwenden
- denken, dass `const` nur "optional schoen" ist
- vergessen, Lesefunktionen bei Klassen als `const` zu markieren

## Merksatz

`const` macht Programme sicherer, klarer und lesbarer.
