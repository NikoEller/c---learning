# Maps, Sets und Unordered Container

## Worum geht es?

Neben `std::vector` gibt es in der Standard Library noch weitere sehr wichtige
Container:

- `std::map`
- `std::set`
- `std::unordered_map`
- `std::unordered_set`

Sie loesen andere Probleme als ein linearer Vektor.

## `std::map`

Eine `map` speichert Schluessel-Wert-Paare.

```cpp
std::map<std::string, int> ages;
ages["Anna"] = 20;
```

Hier ist:

- `"Anna"` der Schluessel
- `20` der zugehoerige Wert

Wichtige Eigenschaft:

- Schluessel sind eindeutig
- die Eintraege sind nach dem Schluessel sortiert

## `std::set`

Ein `set` speichert eindeutige Werte.

```cpp
std::set<int> numbers = {3, 1, 3, 2};
```

Das Ergebnis enthaelt jeden Wert nur einmal und ebenfalls in sortierter
Reihenfolge.

## `std::unordered_map` und `std::unordered_set`

Diese Container verwenden Hashing.

Das bedeutet:

- keine sortierte Reihenfolge
- oft sehr schnelles Nachschlagen

Sie sind besonders gut, wenn dir die Reihenfolge egal ist und du hauptsaechlich
abfragen willst, ob etwas vorhanden ist.

## Wichtiger Unterschied zu `vector`

Ein `vector` ist gut, wenn:

- Reihenfolge wichtig ist
- du ueber alle Elemente laeufst
- du ueblicherweise per Index arbeitest

Eine `map` oder ein `set` ist gut, wenn:

- du nach Schluesseln suchen willst
- Eindeutigkeit wichtig ist
- Eintraege logisch ueber Schluessel organisiert sind

## `operator[]` bei `map`

Ein wichtiger Punkt:

```cpp
scores["Anna"] = 1;
```

`operator[]` fuegt bei Bedarf einen neuen Schluessel ein.

Das ist praktisch, aber man sollte wissen, dass damit stillschweigend neue
Eintraege entstehen koennen.

## `find`

Zum Nachschlagen benutzt man oft `find`:

```cpp
auto it = scores.find("Anna");
if (it != scores.end()) {
    std::cout << it->second << '\n';
}
```

Das gilt fuer `map`, `set` und auch die `unordered_*`-Varianten.

## Wann verwendet man was?

- `map`, wenn sortierte Schluessel sinnvoll sind
- `unordered_map`, wenn schnelles Nachschlagen wichtiger ist als Reihenfolge
- `set`, wenn du eindeutige sortierte Werte brauchst
- `unordered_set`, wenn du eindeutige Werte plus schnelles Nachschlagen willst

## Typische Anwendungen

- Punkte oder Noten pro Name speichern
- Worthaeufigkeiten zaehlen
- Tags ohne Duplikate speichern
- pruefen, ob ein Wert schon einmal gesehen wurde

## Merksatz

`map` verbindet Schluessel mit Werten, `set` speichert eindeutige Werte, und
`unordered_*` ist oft die schnelle Variante ohne garantierte Sortierung.
