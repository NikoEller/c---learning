# Fehlerbehandlung

## Worum geht es?

Nicht jeder Fehler kann einfach mit `if` behandelt werden. C++ bietet dafuer Exceptions mit `try`, `catch` und `throw`.

## Grundidee

```cpp
try {
    throw std::runtime_error("Fehler");
} catch (const std::runtime_error& error) {
    std::cout << error.what();
}
```

## Wann sinnvoll?

- ungueltige Eingaben
- Datei konnte nicht geoeffnet werden
- logische Fehler in komplexeren Programmen

## Wichtige Punkte

- nur wirkliche Ausnahmefaelle sollten Exceptions sein
- `catch` faengt geworfene Fehler ab
- `what()` liefert bei Standard-Exceptions meist eine Fehlermeldung

## Merksatz

Exceptions trennen normale Programmlogik von wirklichen Fehlerfaellen.
