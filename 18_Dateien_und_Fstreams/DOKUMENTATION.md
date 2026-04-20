# Dateien und Fstreams

## Worum geht es?

Mit `fstream` kann ein C++-Programm Dateien lesen und schreiben. Das ist wichtig, wenn Daten nicht nur waehrend der Programmlaufzeit existieren sollen.

## Wichtige Klassen

- `std::ifstream` zum Lesen
- `std::ofstream` zum Schreiben
- `std::fstream` fuer beides

## Beispiel

```cpp
std::ofstream out("example.txt");
out << "Hallo Datei!";
```

## Typische Anwendungsfaelle

- Konfigurationsdateien
- Logs
- gespeicherte Ergebnisse
- kleine Datenbanken oder Textlisten

## Wichtige Punkte

- immer pruefen, ob die Datei erfolgreich geoeffnet wurde
- Dateien nach Benutzung schliessen, auch wenn das oft automatisch passiert
- `std::getline` ist praktisch zum zeilenweisen Lesen

## Merksatz

Mit Dateistreams kann dein Programm Daten dauerhaft speichern und spaeter wieder laden.
