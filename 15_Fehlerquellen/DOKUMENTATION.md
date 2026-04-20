# Fehlerquellen

## Warum dieses Thema wichtig ist

Viele Fehler in C++ entstehen nicht durch komplizierte Algorithmen, sondern
durch kleine Unsauberkeiten.

Gerade am Anfang ist es wichtig, typische Problemstellen frueh zu erkennen.

## Typische Fehlerquellen

- uninitialisierte Variablen
- Zugriff ausserhalb eines Arrays oder Vektors
- Division durch 0
- ungueltige Pointer oder Referenzen
- logische Fehler in Bedingungen und Schleifen
- Off-by-one-Fehler bei Schleifen

## Beispiel fuer eine sichere Division

```cpp
if (divisor != 0) {
    std::cout << a / divisor;
}
```

## Beispiel fuer sicheren Indexzugriff

Vor jedem Zugriff solltest du sicher sein, dass der Index gueltig ist:

```cpp
if (index < values.size()) {
    std::cout << values[index];
}
```

## Gute Gewohnheiten

- Variablen direkt initialisieren
- Grenzen von Arrays und Vektoren beachten
- kleine Programme oft testen
- Compiler-Warnungen ernst nehmen
- Zwischenschritte mit einfachen Beispielen pruefen

## Merksatz

Sauberer Code, Compiler-Warnungen und viele kleine Tests sparen spaeter viel Zeit.
