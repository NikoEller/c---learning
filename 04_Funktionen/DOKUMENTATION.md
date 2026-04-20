# Funktionen

## Warum Funktionen wichtig sind

Funktionen helfen dir, Code in kleine wiederverwendbare Bausteine aufzuteilen.

Vorteile:

- weniger Wiederholungen
- klarere Struktur
- leichteres Testen
- bessere Lesbarkeit

## Aufbau einer Funktion

```cpp
int add(int a, int b) {
    return a + b;
}
```

Bestandteile:

- Rueckgabetyp: `int`
- Name: `add`
- Parameter: `int a, int b`
- Funktionskoerper: alles zwischen `{ }`

## Rueckgabe und `void`

- Eine Funktion mit Rueckgabewert gibt etwas zurueck
- `void` bedeutet: Die Funktion gibt nichts zurueck

## Parameter

Parameter sind Eingaben fuer eine Funktion.

```cpp
void greet(const std::string& name) {
    std::cout << "Hallo " << name;
}
```

## Typische Fehler

- Rueckgabewert vergessen
- falschen Datentyp zurueckgeben
- Funktion benutzen, bevor sie bekannt ist

## Merksatz

Funktionen machen aus einem grossen Problem viele kleine Teilprobleme.
