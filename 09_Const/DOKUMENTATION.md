# Const

## Was bedeutet `const`?

`const` bedeutet: Dieser Wert soll nach der Initialisierung nicht mehr veraendert werden.

```cpp
const int maxValue = 100;
```

## Warum ist `const` wichtig?

- verhindert ungewollte Aenderungen
- macht Code klarer
- zeigt Absicht sehr deutlich

## Hauefige Einsatzorte

- konstante Variablen
- Referenzen auf Werte, die nicht veraendert werden sollen
- Methoden, die ein Objekt nicht aendern

## Beispiel

```cpp
void printValue(const int& value) {
    std::cout << value;
}
```

Hier darf `value` in der Funktion nicht veraendert werden.

## Typische Fehler

- `const` zu spaet oder gar nicht verwenden
- denken, dass `const` nur "optional schoen" ist

## Merksatz

`const` macht Programme sicherer und lesbarer.
