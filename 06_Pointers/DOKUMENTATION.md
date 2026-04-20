# Pointer

## Hinweis zur Struktur

Dieser Themenordner wurde frueher etwas anders aufgebaut als die spaeteren Themen.
Damit die Gesamtstruktur des Repositories jetzt wieder einheitlich ist, gibt es
auch hier eine `DOKUMENTATION.md`.

Die ausfuehrliche Langfassung liegt weiterhin in:

- `POINTERS_DOKUMENTATION.md`

## Worum geht es bei Pointern?

Pointer speichern nicht direkt einen Wert, sondern die Adresse einer anderen
Variable im Speicher.

Beispiel:

```cpp
int number = 42;
int* ptr = &number;
```

Hier gilt:

- `number` speichert den eigentlichen Wert
- `&number` liefert die Adresse von `number`
- `ptr` speichert genau diese Adresse
- `*ptr` greift wieder auf den Wert an dieser Adresse zu

## Warum sind Pointer wichtig?

Pointer sind eine der Grundlagen von C++, weil sie eng mit diesen Themen
verbunden sind:

- Speicher und Lebensdauer
- Arrays
- dynamischer Speicher
- Funktionen mit Adressen
- moderne Alternativen wie `std::unique_ptr`

## Was du in diesem Themenordner findest

- `POINTERS_DOKUMENTATION.md`
  Die ausfuehrliche Erklaerung mit vielen Unterpunkten, Beispielen und
  typischen Fehlerquellen.
- `pointers.cpp`
  Ein direkt ausfuehrbares Lernbeispiel mit Kommentaren.
- `uebungen/AUFGABEN.md`
  Uebungen zum selbst Ausprobieren.
- `uebungen/LOESUNGEN.cpp`
  Beispielhafte Loesungen zu den Aufgaben.

## Empfohlene Reihenfolge

1. Lies zuerst diese Kurzuebersicht.
2. Gehe dann in `POINTERS_DOKUMENTATION.md` die Details durch.
3. Starte danach `pointers.cpp` und lies den Code abschnittsweise.
4. Loese zum Schluss die Uebungen.

## Merksatz

Pointer zeigen auf Adressen. Wer Pointer verstehen will, versteht in C++ auch
viel besser, wie Speicher, Referenzen und Ressourcen zusammenhaengen.
