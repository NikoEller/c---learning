# Kontrollstrukturen

## Was machen Kontrollstrukturen?

Kontrollstrukturen steuern, welcher Code wann ausgefuehrt wird.

Damit kannst du:

- Entscheidungen treffen
- Code wiederholen
- verschiedene Faelle behandeln

## Die wichtigsten Bausteine

- `if` und `else` fuer Bedingungen
- `switch` fuer mehrere feste Faelle
- `for` fuer Schleifen mit Zaehler
- `while` fuer Schleifen mit Bedingung

## Beispielidee

```cpp
if (number % 2 == 0) {
    std::cout << "gerade";
} else {
    std::cout << "ungerade";
}
```

## Wann benutzt man was?

- `if`, wenn du flexible Bedingungen pruefen willst
- `switch`, wenn du genau auf feste Werte reagierst
- `for`, wenn du weisst, wie oft etwas laufen soll
- `while`, wenn eine Schleife laeuft, solange etwas wahr ist

## Typische Fehler

- Semikolon versehentlich direkt hinter `if (...)`
- Endlosschleifen durch fehlende Aenderung der Bedingung
- falsche Grenzen in Schleifen, zum Beispiel `<=` statt `<`

## Merksatz

Kontrollstrukturen sind die Grundlage fuer Programmlogik.
