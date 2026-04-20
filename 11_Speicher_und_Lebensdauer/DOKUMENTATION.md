# Speicher und Lebensdauer

## Worum geht es hier?

Jede Variable lebt nur fuer einen bestimmten Zeitraum. Diesen Zeitraum nennt man Lebensdauer.

Die wichtigste Einsteiger-Idee:

- lokale Variablen leben nur in ihrem Block oder ihrer Funktion
- danach sind sie nicht mehr gueltig

## Einfaches Beispiel

```cpp
void example() {
    int x = 5;
}
```

`x` existiert nur innerhalb von `example`.

## Warum ist das wichtig?

Weil man sonst leicht auf Speicher zugreift, der nicht mehr gueltig ist.

Gefaehrliches Muster:

```cpp
int* bad() {
    int x = 5;
    return &x;
}
```

Nach dem Ende der Funktion existiert `x` nicht mehr. Der Rueckgabepointer waere also ungueltig.

## Begriffe

- Geltungsbereich: Wo im Code eine Variable sichtbar ist
- Lebensdauer: Wie lange die Variable wirklich existiert

## Typische Fehler

- Adresse einer lokalen Variable zurueckgeben
- Pointer auf zerstorte Objekte weiterverwenden
- annehmen, dass ein Objekt "einfach weiterlebt"

## Merksatz

Nicht nur der Wert ist wichtig, sondern auch wie lange er lebt.
