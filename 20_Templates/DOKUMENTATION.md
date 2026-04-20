# Templates

## Worum geht es?

Templates erlauben es, denselben Code fuer mehrere Datentypen zu verwenden. Statt also eine Funktion fuer `int`, eine fuer `double` und noch eine fuer `float` zu schreiben, kann man eine allgemeine Vorlage definieren.

## Einfaches Funktions-Template

```cpp
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
```

Diese Funktion funktioniert dann fuer viele Typen, solange der Operator `>` definiert ist.

## Klassen-Templates

Templates gibt es nicht nur fuer Funktionen, sondern auch fuer Klassen. Ein bekanntes Beispiel ist:

```cpp
std::vector<int>
std::vector<double>
```

`std::vector` selbst ist eine Template-Klasse.

## Warum ist das wichtig?

- weniger doppelter Code
- flexiblere Programme
- Grundlage vieler moderner Bibliotheken

## Typische Syntax

```cpp
template <typename T>
```

Statt `typename` wird manchmal auch `class` verwendet:

```cpp
template <class T>
```

Beides ist hier fast immer gleichwertig.

## Grenzen von Templates

Templates funktionieren nicht automatisch mit jedem Typ. Der Typ muss die benoetigten Operationen unterstuetzen.

Wenn deine Template-Funktion zum Beispiel `a + b` nutzt, dann muss der Typ `+` unterstuetzen.

## Merksatz

Templates machen Code allgemeiner, ohne dass du ihn fuer jeden Datentyp neu schreiben musst.
