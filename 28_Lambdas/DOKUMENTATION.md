# Lambdas

## Worum geht es?

Lambdas sind anonyme Funktionen. Sie sind besonders praktisch, wenn man eine kleine Funktion nur an einer Stelle braucht.

## Einfaches Beispiel

```cpp
auto add = [](int a, int b) {
    return a + b;
};
```

## Warum sind Lambdas nuetzlich?

- sie sind kurz und lokal
- sie passen perfekt zu STL-Algorithmen
- sie machen Code oft direkter lesbar

## Typische Verwendung

```cpp
std::sort(values.begin(), values.end(), [](int a, int b) {
    return a > b;
});
```

Hier wird eine kleine Vergleichsfunktion direkt an `std::sort` uebergeben.

## Capture-Liste

Der Teil in `[]` bestimmt, auf welche aeusseren Variablen die Lambda-Funktion zugreifen darf.

Beispiele:

- `[]` nichts capturen
- `[x]` `x` per Wert capturen
- `[&x]` `x` per Referenz capturen
- `[=]` alles per Wert
- `[&]` alles per Referenz

## Merksatz

Lambdas sind kleine, direkte Hilfsfunktionen genau dort, wo man sie braucht.
