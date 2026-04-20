# Header und Quelldateien

## Warum trennt man Code auf?

Groessere Programme werden fast nie in nur einer Datei geschrieben.

Typische Aufteilung:

- Header-Datei `.h` oder `.hpp` fuer Deklarationen
- Quelldatei `.cpp` fuer Definitionen

## Deklaration vs. Definition

Deklaration:

```cpp
int add(int a, int b);
```

Definition:

```cpp
int add(int a, int b) {
    return a + b;
}
```

## Wozu ist das gut?

- bessere Struktur
- Wiederverwendung in mehreren Dateien
- klarere Projekte

## Typische Fehler

- Funktion nur deklarieren, aber nie definieren
- Header nicht mit `#include` einbinden

## Merksatz

Im Header steht oft, was existiert. In der `.cpp`-Datei steht, wie es gemacht wird.
