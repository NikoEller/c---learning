# Dateien und Fstreams

## Worum geht es?

Programme arbeiten oft nicht nur mit Daten im Arbeitsspeicher, sondern muessen Informationen auch dauerhaft speichern oder spaeter wieder laden. Genau dafuer gibt es Dateistreams.

Mit `fstream` kann ein C++-Programm:

- Dateien schreiben
- Dateien lesen
- zeilenweise Inhalte verarbeiten
- einfache Daten persistent speichern

## Die wichtigsten Klassen

- `std::ifstream` zum Lesen aus Dateien
- `std::ofstream` zum Schreiben in Dateien
- `std::fstream` fuer Lesen und Schreiben

## Einfaches Schreibbeispiel

```cpp
std::ofstream outFile("notes.txt");
outFile << "Erste Zeile\n";
outFile << "Zweite Zeile\n";
```

## Einfaches Lesebeispiel

```cpp
std::ifstream inFile("notes.txt");
std::string line;

while (std::getline(inFile, line)) {
    std::cout << line << '\n';
}
```

## Was ist wichtig zu verstehen?

Ein Dateistream funktioniert aehnlich wie `std::cin` und `std::cout`, nur dass die Quelle oder das Ziel nicht die Konsole, sondern eine Datei ist.

## Typische Anwendungsfaelle

- Konfigurationsdateien
- gespeicherte Ergebnisse
- kleine Textdaten
- Export und Import
- Logs

## Haeufige Fehler

- Datei wird nicht erfolgreich geoeffnet
- Pfad ist falsch
- Datei wird ueberschrieben, obwohl man nur anhaengen wollte
- man vergisst, den Dateistatus zu pruefen

## Gute Gewohnheiten

- immer direkt pruefen, ob die Datei geoeffnet werden konnte
- bei Textdateien oft `std::getline` benutzen
- bei Ausgabedateien bewusst entscheiden: neu schreiben oder anhaengen

## Merksatz

Dateistreams machen aus fluechtigen Programmdaten dauerhafte Informationen.
