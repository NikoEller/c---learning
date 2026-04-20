# OOP Grundlagen

## Was bedeutet OOP?

OOP steht fuer objektorientierte Programmierung.

Die Grundidee ist, Daten und passendes Verhalten gemeinsam in Klassen zu
organisieren.

## Wichtige Begriffe

- Klasse: Bauplan
- Objekt: konkrete Instanz
- Attribut: gespeicherter Zustand eines Objekts
- Methode: Verhalten eines Objekts
- Vererbung: eine Klasse baut auf einer anderen auf
- Kapselung: Daten und Verhalten gehoeren zusammen
- Polymorphismus: gemeinsames Arbeiten mit verwandten Typen

## Warum ist das nuetzlich?

- Programme werden strukturierter
- verwandte Objekte koennen aehnlich behandelt werden
- grosse Programme werden besser organisierbar

## Einfache Denkweise

Statt Daten und Funktionen lose zu verteilen, fasst OOP beides zusammen:

- ein Objekt hat einen Zustand
- und passende Operationen auf diesem Zustand

## Einfaches Beispiel

```cpp
class Animal {};
class Dog : public Animal {};
```

`Dog` erbt hier von `Animal`.

## Wichtige Grenze

OOP ist nicht automatisch immer besser.

Es ist ein Strukturwerkzeug. Man sollte es dort einsetzen, wo Klassen und
Objekte die Domäne wirklich klarer machen.

## Merksatz

OOP ist ein Strukturwerkzeug, kein Selbstzweck.
