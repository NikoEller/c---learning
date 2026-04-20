# Operatoren und Ausdruecke

## Was ist ein Operator?

Ein Operator verarbeitet Werte. Zum Beispiel addiert `+` zwei Zahlen oder vergleicht `>` zwei Werte.

Ein Ausdruck ist eine Kombination aus Werten, Variablen und Operatoren. Zum Beispiel:

```cpp
a + b
age >= 18
```

## Wichtige Gruppen

- Rechenoperatoren: `+`, `-`, `*`, `/`, `%`
- Vergleichsoperatoren: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logische Operatoren: `&&`, `||`, `!`
- Zuweisung: `=`

## Wichtige Details

- `int / int` ergibt in C++ wieder einen ganzzahligen Wert
- `%` liefert den Rest einer Ganzzahldivision
- Vergleiche liefern `true` oder `false`
- `&&` bedeutet "und", `||` bedeutet "oder"

## Beispiel

```cpp
int a = 10;
int b = 3;

int sum = a + b;
bool larger = a > b;
```

## Typische Fehler

- `=` und `==` verwechseln
- bei `int / int` versehentlich eine Kommazahl erwarten
- komplizierte Ausdruecke ohne Klammern schreiben

## Merksatz

Operatoren berechnen nicht nur Zahlen, sondern oft auch logische Aussagen.
