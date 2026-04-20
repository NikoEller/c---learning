# OOP Grundlagen

## Was bedeutet OOP?

OOP steht fuer objektorientierte Programmierung.

Die Grundidee ist, Daten und passendes Verhalten gemeinsam in Klassen zu organisieren.

## Wichtige Begriffe

- Klasse: Bauplan
- Objekt: konkrete Instanz
- Vererbung: eine Klasse baut auf einer anderen auf
- Kapselung: Daten und Verhalten gehoeren zusammen
- Polymorphismus: gemeinsames Arbeiten mit verwandten Typen

## Einfaches Beispiel

```cpp
class Animal {};
class Dog : public Animal {};
```

`Dog` erbt hier von `Animal`.

## Warum ist das nuetzlich?

- Programme werden strukturierter
- verwandte Objekte koennen aehnlich behandelt werden
- grosse Programme werden besser organisierbar

## Merksatz

OOP ist ein Strukturwerkzeug, kein Selbstzweck.
