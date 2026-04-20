# Vererbung und Polymorphismus tiefer

## Worum geht es?

Vererbung erlaubt es, gemeinsame Eigenschaften in einer Basisklasse zu sammeln. Polymorphismus bedeutet, dass ueber einen Basisklassen-Zugriff unterschiedliche abgeleitete Klassen unterschiedlich reagieren koennen.

## Basisklasse und abgeleitete Klasse

```cpp
class Animal {
public:
    virtual void speak() const;
};

class Dog : public Animal {
public:
    void speak() const override;
};
```

## Warum `virtual` wichtig ist

Ohne `virtual` wird bei einem Basisklassen-Zeiger oder einer Basisklassen-Referenz oft die Basisklassen-Version aufgerufen.

Mit `virtual` entscheidet C++ zur Laufzeit, welche konkrete Version passend ist.

## Polymorphismus in der Praxis

Wenn du verschiedene Objekte ueber denselben Basistyp behandelst, kannst du gemeinsamen Code schreiben und trotzdem unterschiedliches Verhalten erhalten.

## `override`

`override` ist eine sehr gute Gewohnheit, weil der Compiler dann prueft, ob wirklich eine virtuelle Funktion der Basisklasse ueberschrieben wird.

## Merksatz

Vererbung organisiert Gemeinsamkeiten, Polymorphismus erlaubt unterschiedliches Verhalten ueber denselben Basistyp.
