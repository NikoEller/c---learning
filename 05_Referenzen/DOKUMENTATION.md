# Referenzen

## Was ist eine Referenz?

Eine Referenz ist ein zweiter Name fuer eine bestehende Variable.

```cpp
int x = 10;
int& ref = x;
```

`ref` ist hier keine neue eigene Variable mit eigenem Wert, sondern ein Alias fuer `x`.

## Wichtige Eigenschaften

- Referenzen muessen sofort initialisiert werden
- sie koennen spaeter nicht auf ein anderes Objekt umgebogen werden
- sie sind oft einfacher und sicherer als Pointer

## Warum sind Referenzen praktisch?

- man kann Funktionen Werte ohne Kopie geben
- die Funktion kann direkt mit dem Originalwert arbeiten
- Syntax ist oft angenehmer als bei Pointern

## Beispiel

```cpp
void addTen(int& value) {
    value += 10;
}
```

## Typische Fehler

- glauben, dass eine Referenz spaeter auf eine andere Variable gesetzt werden kann
- Referenzen und Pointer gedanklich vermischen

## Merksatz

Eine Referenz ist wie ein zweiter Name fuer dasselbe Objekt.
