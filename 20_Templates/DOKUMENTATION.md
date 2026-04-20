# Templates

## Worum geht es?

Templates erlauben es, generischen Code fuer mehrere Datentypen zu schreiben.

## Funktions-Template

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

Die Funktion kann dann mit `int`, `double` oder anderen passenden Typen benutzt werden.

## Klassen-Template

Templates gibt es auch fuer Klassen, zum Beispiel `std::vector<T>`.

## Vorteile

- weniger doppelter Code
- flexiblere Programme
- wichtige Grundlage moderner C++-Bibliotheken

## Merksatz

Templates machen Code allgemeiner, ohne dass du ihn fuer jeden Typ neu schreiben musst.
