# RAII und Ressourcenmanagement

## Worum geht es?

RAII steht fuer `Resource Acquisition Is Initialization`. Die Idee ist:

- eine Ressource wird beim Erzeugen eines Objekts uebernommen
- die Ressource wird beim Zerstoeren des Objekts automatisch wieder freigegeben

Eine Ressource kann sein:

- Speicher
- Datei-Handle
- Mutex
- Netzwerkverbindung

## Warum ist RAII so wichtig?

RAII ist eines der wichtigsten Konzepte in modernem C++. Es sorgt dafuer, dass Ressourcen auch dann sauber freigegeben werden, wenn:

- eine Funktion frueh `return` macht
- eine Exception geworfen wird
- ein komplexerer Kontrollfluss entsteht

## Einfaches Beispiel

```cpp
{
    std::ofstream file("log.txt");
    file << "Hallo";
}
```

Wenn der Block endet, wird das Dateiobjekt zerstoert und die Datei sauber geschlossen.

## Der Kerngedanke

Nicht das Programm "denkt spaeter an das Aufraeumen", sondern das Objekt selbst kuemmert sich darum.

Das ist deutlich sicherer als:

- `new` ohne passendes `delete`
- manuelles `open` und spaeter vielleicht vergessenes `close`

## Typische RAII-Beispiele in der Standard Library

- `std::string`
- `std::vector`
- `std::unique_ptr`
- `std::lock_guard`
- Dateistreams wie `std::ifstream`

## Zusammenhang zu Destruktoren

RAII funktioniert, weil Objekte in C++ beim Verlassen ihres Geltungsbereichs automatisch zerstoert werden. Der Destruktor ist der Ort, an dem das Aufraeumen passiert.

## Merksatz

RAII bedeutet: Ressourcen gehoeren Objekten, und Objekte raeumen beim Zerstoeren automatisch auf.
