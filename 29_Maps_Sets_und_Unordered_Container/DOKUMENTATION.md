# Maps, Sets und Unordered Container

## Worum geht es?

Neben `std::vector` gibt es in der Standard Library weitere sehr wichtige Container:

- `std::map`
- `std::set`
- `std::unordered_map`
- `std::unordered_set`

## `map`

Eine `map` speichert Schluessel-Wert-Paare.

```cpp
std::map<std::string, int> ages;
ages["Anna"] = 20;
```

Hier ist `"Anna"` der Schluessel und `20` der Wert.

## `set`

Ein `set` speichert eindeutige Werte.

```cpp
std::set<int> numbers = {3, 1, 3, 2};
```

Das Ergebnis enthaelt jeden Wert nur einmal.

## `unordered_*`

Diese Container arbeiten hashbasiert und nicht sortiert:

- `std::unordered_map`
- `std::unordered_set`

Sie sind oft schneller fuer reines Nachschlagen, garantieren aber keine sortierte Reihenfolge.

## Wann was?

- `map`, wenn sortierte Schluessel sinnvoll sind
- `unordered_map`, wenn schnelles Nachschlagen wichtiger ist als Reihenfolge
- `set`, wenn du eindeutige Werte brauchst
- `unordered_set`, wenn du eindeutige Werte plus schnelles Nachschlagen willst

## Merksatz

`map` verbindet Schluessel mit Werten, `set` speichert eindeutige Werte, `unordered_*` ist meist fuer schnelles Nachschlagen gedacht.
