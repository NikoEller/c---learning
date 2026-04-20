# Lambdas

## Worum geht es?

Lambdas sind anonyme Funktionen.

Sie sind besonders praktisch, wenn du eine kleine Funktion nur an einer Stelle
brauchst und dafuer nicht extra eine eigene benannte Funktion schreiben willst.

## Grundsyntax

```cpp
auto add = [](int a, int b) {
    return a + b;
};
```

Diese Lambda-Funktion:

- hat keine Capture-Werte
- erwartet zwei `int`-Parameter
- gibt ihre Summe zurueck

## Warum sind Lambdas so nuetzlich?

- sie sind kurz und lokal
- sie passen perfekt zu STL-Algorithmen
- sie machen den Zusammenhang im Code direkter sichtbar
- sie vermeiden kleine Hilfsfunktionen, die nur an einer Stelle gebraucht werden

## Typische Verwendung mit Algorithmen

```cpp
std::sort(values.begin(), values.end(), [](int a, int b) {
    return a > b;
});
```

Hier wird die Vergleichslogik direkt an `std::sort` uebergeben.

## Die Capture-Liste

Der Teil in `[]` bestimmt, auf welche aeusseren Variablen die Lambda-Funktion
zugreifen darf.

Beispiele:

- `[]` nichts capturen
- `[x]` `x` per Wert capturen
- `[&x]` `x` per Referenz capturen
- `[=]` alles per Wert
- `[&]` alles per Referenz

## Wert-Capture gegen Referenz-Capture

Wenn du per Wert capturst, bekommt die Lambda ihre eigene Kopie.

Wenn du per Referenz capturst, arbeitet sie direkt mit der urspruenglichen
Variable.

Das ist wichtig, wenn du von innen heraus etwas veraendern willst.

## `mutable`

Normalerweise sind per Wert gecapturete Werte innerhalb einer Lambda nicht
veraenderbar.

Mit `mutable` kannst du die lokale Kopie innerhalb der Lambda trotzdem aendern:

```cpp
auto counter = [value = 0]() mutable {
    ++value;
    return value;
};
```

## Generische Lambdas

Mit `auto` in der Parameterliste kann eine Lambda auch fuer verschiedene Typen
arbeiten:

```cpp
auto print = [](const auto& value) {
    std::cout << value << '\n';
};
```

Das ist besonders praktisch fuer kleine Hilfsfunktionen im lokalen Kontext.

## Wo du Lambdas staendig sehen wirst

- `std::sort`
- `std::find_if`
- `std::count_if`
- `std::for_each`
- `std::transform`

## Was du dir merken solltest

Lambdas sind keine exotische Spezialfunktion, sondern ein ganz normaler Teil
modernen C++-Codes.

Gerade mit STL-Algorithmen gehoeren sie fast zum Standardwerkzeug.

## Merksatz

Lambdas sind kleine, direkte Hilfsfunktionen genau dort, wo man sie braucht.
