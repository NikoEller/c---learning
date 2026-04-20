# Threads und Nebenlaeufigkeit

## Worum geht es?

Mit Threads kann ein Programm mehrere Aufgaben gleichzeitig oder scheinbar gleichzeitig bearbeiten.

## Einfaches Beispiel

```cpp
std::thread worker(task);
worker.join();
```

## Wichtige Begriffe

- Thread: eigener Ausfuehrungsstrang
- `join()`: warten, bis ein Thread fertig ist
- `mutex`: Schutz gemeinsamer Daten

## Warum wichtig?

- schnellere Programme in manchen Situationen
- wichtig fuer moderne Anwendungen

## Merksatz

Nebenlaeufigkeit ist leistungsstark, aber gemeinsame Daten muessen sauber synchronisiert werden.
