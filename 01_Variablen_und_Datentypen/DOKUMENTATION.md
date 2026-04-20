# Variablen und Datentypen

## Was ist die Grundidee?

Variablen sind benannte Speicherplaetze. In ihnen legt dein Programm Werte ab, damit es mit ihnen weiterarbeiten kann.

Der Datentyp sagt dem Compiler:

- welche Art von Wert gespeichert wird
- wie viel Speicher gebraucht wird
- welche Operationen erlaubt sind

## Wichtige Datentypen

- `int` fuer ganze Zahlen wie `5` oder `-12`
- `double` fuer Kommazahlen wie `3.14`
- `char` fuer einzelne Zeichen wie `'A'`
- `bool` fuer `true` oder `false`
- `std::string` fuer Texte wie `"Hallo"`

## Beispiel

```cpp
int age = 21;
double height = 1.82;
char grade = 'A';
bool isStudent = true;
std::string name = "Niko";
```

## Was ist wichtig zu verstehen?

- `int` speichert keine Nachkommastellen
- `double` kann Nachkommastellen speichern
- `char` benutzt einfache Hochkommas
- `std::string` benutzt doppelte Anfuehrungszeichen
- `bool` ist oft das Ergebnis von Vergleichen

## Typische Fehler

- Variable ohne Initialisierung anlegen und direkt benutzen
- `char` und `std::string` verwechseln
- annehmen, dass `int` auch Kommazahlen sauber speichert

## Merksatz

Erst der Datentyp, dann der Variablenname, dann optional der Startwert.
