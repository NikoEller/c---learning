# Threads und Nebenlaeufigkeit

## Worum geht es?

Mit Threads kann ein Programm mehrere Aufgaben gleichzeitig oder scheinbar gleichzeitig bearbeiten. Das ist besonders nuetzlich, wenn unterschiedliche Arbeiten parallel laufen koennen.

## Einfaches Beispiel

```cpp
std::thread worker(task);
worker.join();
```

## Wichtige Begriffe

- Thread: eigener Ausfuehrungsstrang
- `join()`: warten, bis ein Thread fertig ist
- `detach()`: Thread laeuft unabhaengig weiter
- `mutex`: Schutz gemeinsamer Daten

## Warum ist das wichtig?

- manche Aufgaben koennen parallel abgearbeitet werden
- moderne Anwendungen nutzen oft mehrere Threads
- Netzwerke, GUIs und Server arbeiten haeufig nebenlaeufig

## Das zentrale Problem

Sobald mehrere Threads auf dieselben Daten zugreifen, entstehen leicht Fehler. Dann braucht man Synchronisation, zum Beispiel mit einem `std::mutex`.

## Beispielidee

Wenn zwei Threads gleichzeitig dieselbe Variable veraendern, kann das Ergebnis unvorhersehbar werden.

## Wichtige Regel fuer den Anfang

Erst verstehen:

- wie ein Thread gestartet wird
- warum `join()` wichtig ist
- warum gemeinsame Daten gefaehrlich sein koennen

## Merksatz

Nebenlaeufigkeit ist leistungsstark, aber gemeinsame Daten muessen sauber synchronisiert werden.
