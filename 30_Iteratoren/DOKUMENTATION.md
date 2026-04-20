# Iteratoren

## Worum geht es?

Iteratoren sind Objekte, die auf Elemente in einem Container zeigen. Viele Teile der Standard Library arbeiten nicht direkt mit Containern, sondern mit Iteratoren.

## Grundidee

```cpp
auto it = values.begin();
```

`it` zeigt hier auf das erste Element von `values`.

## Typische Operationen

- `begin()` Iterator auf das erste Element
- `end()` Iterator hinter das letzte Element
- `*it` Wert lesen
- `++it` zum naechsten Element gehen

## Warum wichtig?

Iteratoren sind die Verbindung zwischen:

- Containern
- STL-Algorithmen
- allgemeinen Bereichen von Elementen

## Beispiel

```cpp
for (auto it = values.begin(); it != values.end(); ++it) {
    std::cout << *it << '\n';
}
```

## Wichtiger Punkt

`end()` ist kein echtes Element. Es zeigt auf die Position hinter dem letzten Element.

## Merksatz

Iteratoren sind wie allgemeine Zeiger auf Container-Elemente und die Standardsprache vieler STL-Funktionen.
