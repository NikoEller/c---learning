# Header und Quelldateien

## Warum trennt man Code auf?

Groessere Programme werden fast nie in nur einer Datei geschrieben.

Typische Aufteilung:

- Header-Datei `.h` oder `.hpp` fuer Deklarationen
- Quelldatei `.cpp` fuer Definitionen

## Deklaration gegen Definition

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

Die Deklaration sagt:

- diese Funktion existiert

Die Definition sagt:

- so funktioniert sie konkret

## Warum ist diese Trennung nuetzlich?

- bessere Struktur
- Wiederverwendung in mehreren Dateien
- klarere Projekte
- schnellere Orientierung in groesseren Codebasen

## Was oft in einen Header kommt

- Funktionsdeklarationen
- Klassendeklarationen
- Konstanten und Typdefinitionen

## Was oft in eine `.cpp`-Datei kommt

- Funktionsdefinitionen
- Methodenimplementierungen
- interne Hilfsfunktionen

## Include Guards

Header-Dateien brauchen oft Schutz davor, mehrfach eingebunden zu werden:

```cpp
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);

#endif
```

Spaeter sieht man auch oft `#pragma once`.

## Typische Fehler

- Funktion nur deklarieren, aber nie definieren
- Header nicht mit `#include` einbinden
- dieselbe Definition mehrfach in verschiedenen Dateien unterbringen

## Merksatz

Im Header steht oft, was existiert. In der `.cpp`-Datei steht, wie es gemacht wird.
