# Fehlerbehandlung

## Worum geht es?

Nicht jeder Fehler laesst sich bequem mit einem einfachen `if` behandeln. Manche Probleme sollen aus einer Funktion "nach oben" gemeldet werden, damit eine andere Stelle entscheidet, wie damit umgegangen wird.

C++ bietet dafuer Exceptions mit:

- `throw`
- `try`
- `catch`

## Die Grundidee

Eine Funktion wirft einen Fehler:

```cpp
throw std::runtime_error("Etwas ist schiefgelaufen");
```

Eine andere Stelle faengt ihn ab:

```cpp
try {
    riskyFunction();
} catch (const std::runtime_error& error) {
    std::cout << error.what();
}
```

## Wann sind Exceptions sinnvoll?

- Division durch 0
- Datei konnte nicht geladen werden
- ungueltige Eingabedaten
- ein Objekt ist in einem ungueltigen Zustand

## Wann eher nicht?

- fuer normale Ablaufsteuerung
- fuer Situationen, die haeufig und erwartet sind

## Beispiel

```cpp
double divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Division durch 0");
    }
    return a / b;
}
```

## Wichtige Begriffe

- `throw`: wirft eine Exception
- `try`: prueft einen gefaehrdeten Codeblock
- `catch`: faengt die Exception ab
- `what()`: liefert bei vielen Standard-Exceptions die Fehlermeldung

## Haeufige Fehler

- Exceptions werfen, obwohl ein normaler Rueckgabewert reichen wuerde
- Exceptions gar nicht abfangen
- zu allgemein `catch (...)` verwenden, ohne zu wissen warum

## Merksatz

Exceptions trennen normale Programmlogik von aussergewoehnlichen Fehlerfaellen.
