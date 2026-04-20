# Schleifen ueber Container

## Warum ist das wichtig?

Sobald du mit Arrays, `std::vector` oder anderen Containern arbeitest, musst du
oft ueber alle Elemente laufen.

Das ist eine der haeufigsten Alltagsaufgaben in C++.

## Zwei typische Varianten

### Klassische Schleife

```cpp
for (std::size_t i = 0; i < values.size(); i++) {
    std::cout << values[i];
}
```

Hier arbeitest du mit einem Index.

### Range-based for

```cpp
for (int value : values) {
    std::cout << value;
}
```

Hier bekommst du die Elemente direkt.

## Lesen gegen Veraendern

Bei range-based Schleifen gibt es drei typische Formen:

- `for (int value : values)` kopiert jedes Element
- `for (const int& value : values)` liest ohne Kopie
- `for (int& value : values)` erlaubt Aenderungen direkt im Container

## Wann welche Form?

- klassische Schleife, wenn du den Index brauchst
- range-based Schleife, wenn du einfach nur ueber alle Elemente laufen willst
- Referenz-Variante, wenn du Werte direkt aendern willst

## Typische Fehler

- mit `i <= values.size()` zu weit laufen
- glauben, dass `for (int value : values)` die Originalwerte veraendert

## Merksatz

Wenn du keinen Index brauchst, ist die range-based Schleife oft klarer.
