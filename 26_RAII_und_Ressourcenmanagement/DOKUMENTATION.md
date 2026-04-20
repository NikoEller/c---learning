# RAII und Ressourcenmanagement

## Worum geht es?

RAII steht fuer `Resource Acquisition Is Initialization`.

Die Grundidee ist:

- eine Ressource wird beim Erzeugen eines Objekts uebernommen
- diese Ressource gehoert dann genau diesem Objekt
- beim Zerstoeren des Objekts wird die Ressource automatisch wieder freigegeben

Eine Ressource kann zum Beispiel sein:

- dynamischer Speicher
- eine Datei
- ein Socket
- ein Mutex
- eine Datenbankverbindung

## Warum ist RAII so wichtig?

RAII gehoert zu den wichtigsten Denkweisen in C++, weil es gleich mehrere
haeufige Fehler verhindert:

- vergessenes `delete`
- vergessenes `close`
- Ressourcenverlust bei fruehem `return`
- Ressourcenverlust bei Exceptions

Ohne RAII muss man oft an vielen Stellen manuell aufraeumen. Mit RAII wird das
Aufraeumen an die Lebensdauer eines Objekts gekoppelt.

## Das Problem ohne RAII

Stell dir vor, du oeffnest eine Ressource manuell:

```cpp
open_resource();

if (something_went_wrong) {
    return;
}

close_resource();
```

Wenn die Funktion vorher zurueckkehrt oder eine Exception wirft, wird
`close_resource()` vielleicht nie erreicht.

## Die Idee mit RAII

Statt lose Funktionen fuer "oeffnen" und "schliessen" zu verwenden, kapselst du
die Ressource in ein Objekt:

```cpp
class ResourceGuard {
public:
    ResourceGuard() {
        // Ressource uebernehmen
    }

    ~ResourceGuard() {
        // Ressource freigeben
    }
};
```

Sobald das Objekt den Gueltigkeitsbereich verlaesst, laeuft der Destruktor und
raeumt auf.

## Einfaches Beispiel aus der Standard Library

```cpp
{
    std::ofstream file("log.txt");
    file << "Hallo";
}
```

Hier schliesst `std::ofstream` die Datei automatisch, wenn das Objekt zerstoert
wird.

## RAII bei fruehem `return`

Das ist einer der grossen Vorteile:

```cpp
void process() {
    ResourceGuard guard;

    if (something_went_wrong) {
        return;
    }
}
```

Auch wenn die Funktion frueh endet, wird `guard` trotzdem sauber zerstoert.

## RAII bei Exceptions

Das gilt auch bei Fehlern:

```cpp
void process() {
    ResourceGuard guard;
    throw std::runtime_error("Fehler");
}
```

Bevor die Exception weitergereicht wird, zerstoert C++ alle lokalen Objekte im
aktuellen Scope. Genau dadurch ist RAII so robust.

## Typische RAII-Typen aus modernem C++

- `std::string`
- `std::vector`
- `std::unique_ptr`
- `std::shared_ptr`
- `std::lock_guard`
- `std::ifstream`
- `std::ofstream`

Viele moderne C++-Typen basieren im Kern genau auf dieser Idee.

## Zusammenhang mit Destruktoren

RAII funktioniert, weil C++ Objekte automatisch zerstoert, wenn sie ihren
Gueltigkeitsbereich verlassen.

Deshalb ist der Destruktor der natuerliche Ort fuer Aufraeumarbeiten.

## RAII und Rule of Zero

Oft ist die beste Form von RAII sogar: gar keinen eigenen Destruktor zu
schreiben, sondern Standardtypen zu verwenden, die das Aufraeumen schon selbst
koennen.

Beispiele:

- `std::vector<int>` statt rohes `new[]`
- `std::unique_ptr<T>` statt rohem Zeiger
- `std::string` statt manuell verwaltetem Textpuffer

Das fuehrt direkt zur sogenannten Rule of Zero: wenn Standardtypen die
Ressourcen uebernehmen, musst du viele Spezialfunktionen gar nicht selbst
schreiben.

## Was du dir merken solltest

- Ressourcen sollten an Objekte gebunden sein
- Aufraeumen gehoert in die Lebensdauer des Objekts
- manuelles Aufraeumen an vielen Stellen ist fehleranfaellig
- RAII ist eine Kernidee von modernem, sicherem C++

## Merksatz

RAII bedeutet: Ressourcen gehoeren Objekten, und Objekte raeumen beim
Zerstoeren automatisch auf.
