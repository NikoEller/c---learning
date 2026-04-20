# STL Algorithmen

## Worum geht es?

Die C++ Standard Library enthaelt in `<algorithm>` viele fertige Algorithmen, die direkt mit Containern wie `std::vector` arbeiten koennen.

Statt vieles selbst zu programmieren, kann man oft auf bewaehrte Standardfunktionen zurueckgreifen.

## Typische Algorithmen

- `std::sort` sortiert einen Bereich
- `std::find` sucht ein Element
- `std::count` zaehlt Vorkommen
- `std::for_each` fuehrt fuer jedes Element eine Aktion aus
- `std::reverse` dreht die Reihenfolge um

## Beispiel

```cpp
std::sort(values.begin(), values.end());
```

Wichtig:

- viele Algorithmen arbeiten mit Iteratoren
- bei `std::vector` sind `begin()` und `end()` die typischen Grenzen

## Warum ist das wichtig?

- spart viel eigenen Code
- ist oft lesbarer
- gehoert zu modernem C++ dazu
- ist oft besser getestet als selbst geschriebene Loesungen

## Iterator-Idee kurz erklaert

Ein Iterator beschreibt eine Position in einem Container. Viele STL-Algorithmen wollen keinen ganzen Container, sondern nur einen Bereich:

```cpp
values.begin(), values.end()
```

Das bedeutet sinngemaess: vom ersten Element bis hinter das letzte Element.

## Haeufige Fehler

- `end()` mit einem echten Element verwechseln
- vergessen, dass `std::find` einen Iterator zurueckgibt
- meinen, man muesse einfache Dinge immer selbst schleifen

## Merksatz

Bevor du einen eigenen Algorithmus schreibst, lohnt sich fast immer ein Blick in `<algorithm>`.
