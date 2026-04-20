# Move Semantics und std::move

## Worum geht es?

Move Semantics helfen dabei, unnoetige Kopien zu vermeiden. Statt Daten teuer zu kopieren, koennen Ressourcen von einem Objekt auf ein anderes uebertragen werden.

## Die Grundidee

Ein Objekt, das sowieso nicht mehr gebraucht wird, kann seine Ressourcen "abgeben".

Dafuer wird oft `std::move` verwendet:

```cpp
std::string target = std::move(source);
```

## Was macht `std::move`?

`std::move` verschiebt nicht direkt etwas selbst. Es sagt nur: behandle dieses Objekt als etwas, das bewegt werden darf.

Dann kann der passende Move-Konstruktor oder Move-Assignment-Operator verwendet werden.

## Warum wichtig?

- bessere Performance
- weniger unnoetige Kopien
- modernere C++-Programmierung

## Haeufiges Beispiel

Besonders bei grossen Objekten wie `std::string` oder `std::vector` ist Move oft deutlich billiger als Copy.

## Merksatz

`std::move` signalisiert: dieses Objekt darf seine Ressourcen an ein anderes Objekt abgeben.
