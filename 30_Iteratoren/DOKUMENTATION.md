# Iteratoren

## Worum geht es?

Iteratoren sind Objekte, die auf Elemente in einem Container zeigen.

Viele Teile der Standard Library arbeiten nicht direkt mit Containern, sondern
mit Bereichen aus Iteratoren.

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

## Warum Iteratoren wichtig sind

Iteratoren sind die Verbindung zwischen:

- Containern
- STL-Algorithmen
- allgemeinen Bereichen von Elementen

Darum sehen viele Algorithmen so aus:

```cpp
std::find(values.begin(), values.end(), 30);
```

Der Algorithmus muss nur wissen, wo der Bereich beginnt und wo er endet.

## `end()` ist kein echtes Element

Das ist ein ganz wichtiger Punkt:

- `begin()` zeigt auf das erste Element
- `end()` zeigt hinter das letzte Element

Man darf `end()` nicht dereferenzieren.

## Klassisches Schleifenmuster

```cpp
for (auto it = values.begin(); it != values.end(); ++it) {
    std::cout << *it << '\n';
}
```

## Const-Iteratoren

Wenn du Elemente nur lesen und nicht veraendern willst, sind `cbegin()` und
`cend()` sinnvoll:

```cpp
for (auto it = values.cbegin(); it != values.cend(); ++it) {
    std::cout << *it << '\n';
}
```

## Reverse-Iteratoren

Mit `rbegin()` und `rend()` kannst du rueckwaerts ueber einen Container laufen.

## Iteratoren und Algorithmen

Viele Algorithmen geben ebenfalls Iteratoren zurueck:

```cpp
auto it = std::find(values.begin(), values.end(), 30);
```

Wenn `it != values.end()` gilt, wurde das Element gefunden.

## Wichtiger Praxispunkt: Iterator-Invalidierung

Je nach Container koennen Iteratoren ungueltig werden, wenn der Container
geaendert wird, zum Beispiel durch:

- `push_back`
- `insert`
- `erase`

Das ist ein wichtiges Thema fuer spaeter, aber man sollte es frueh einmal
gehoert haben.

## Merksatz

Iteratoren sind wie allgemeine Zeiger auf Container-Elemente und die gemeinsame
Sprache vieler STL-Funktionen.
