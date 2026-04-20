# Move Semantics und std::move

## Worum geht es?

Move Semantics helfen dabei, unnoetige Kopien zu vermeiden.

Statt Daten teuer zu kopieren, koennen Ressourcen von einem Objekt auf ein
anderes Objekt uebertragen werden.

## Die Grundidee

Ein Objekt, das ohnehin nicht mehr gebraucht wird, kann seine Ressourcen an ein
anderes Objekt abgeben.

Typisches Beispiel:

```cpp
std::string target = std::move(source);
```

## Was `std::move` wirklich macht

`std::move` verschiebt nicht selbst aktiv etwas.

Es macht nur deutlich:

- dieses Objekt darf als verschiebbar behandelt werden

Danach kann C++ den passenden Move-Konstruktor oder Move-Assignment-Operator
verwenden.

## Warum das wichtig ist

- grosse Objekte muessen nicht immer komplett kopiert werden
- Container koennen effizienter arbeiten
- Rueckgaben per Wert werden guenstiger
- moderner C++-Code wird performanter und klarer

## Typische Kandidaten fuer Move

- `std::string`
- `std::vector`
- `std::unique_ptr`
- eigene Typen mit grossen internen Puffern

## Zustand nach einem Move

Ein ganz wichtiger Punkt:

Nach einem Move ist das Quellobjekt noch gueltig, aber sein genauer Inhalt ist
oft nicht mehr derselbe wie vorher.

Man sagt haeufig:

- moved-from objects are valid but unspecified

Das bedeutet:

- du darfst sie zerstoeren
- du darfst ihnen neue Werte zuweisen
- du solltest dich nicht blind auf den alten Inhalt verlassen

## Copy gegen Move

Copy:

- Daten werden dupliziert
- Quelle und Ziel besitzen danach ihre eigenen Daten

Move:

- Besitz der Daten wird uebertragen
- die Quelle gibt den Besitz ab

## Wo du Move oft siehst

- `std::move(variable)`
- Rueckgaben grosser Objekte
- `push_back(std::move(obj))`
- Move-Konstruktoren und Move-Assignments in eigenen Klassen

## Wichtige Vorsicht

`std::move` ist kein "mach alles schneller"-Zauber.

Es ist ein Signal, dass ein Objekt seinen Besitz abgeben darf. Man sollte es
nur verwenden, wenn man das Objekt anschliessend nicht mehr in seiner alten
Bedeutung braucht.

## Merksatz

`std::move` signalisiert: dieses Objekt darf seine Ressourcen an ein anderes
Objekt abgeben.
