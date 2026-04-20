# Fehlerquellen

## Warum dieses Thema wichtig ist

Viele Fehler in C++ entstehen nicht durch komplizierte Algorithmen, sondern durch kleine Unsauberkeiten.

## Typische Fehlerquellen

- uninitialisierte Variablen
- Zugriff ausserhalb eines Arrays oder Vektors
- Division durch 0
- ungueltige Pointer
- logische Fehler in Bedingungen und Schleifen

## Beispiel fuer eine sichere Division

```cpp
if (divisor != 0) {
    std::cout << a / divisor;
}
```

## Gute Gewohnheiten

- Variablen direkt initialisieren
- Grenzen von Arrays und Vektoren beachten
- kleine Programme oft testen
- Compiler-Warnungen ernst nehmen

## Merksatz

Sauberer Code und viele kleine Tests sparen spaeter viel Zeit.
