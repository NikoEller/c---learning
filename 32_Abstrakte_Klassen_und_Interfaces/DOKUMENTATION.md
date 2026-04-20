# Abstrakte Klassen und Interfaces

## Worum geht es?

Eine abstrakte Klasse ist eine Klasse, von der man nicht direkt Objekte erzeugen kann. Sie definiert oft nur eine gemeinsame Schnittstelle.

Das ist in C++ die naechste Idee nach Vererbung und Polymorphismus.

## Reine virtuelle Funktion

```cpp
virtual void draw() const = 0;
```

Das `= 0` macht die Funktion rein virtuell.

## Was bedeutet das?

- die Basisklasse sagt: jede abgeleitete Klasse muss diese Funktion selbst bereitstellen
- die Basisklasse ist dadurch abstrakt

## Interface-Idee

In vielen Faellen verwendet man abstrakte Klassen wie Interfaces:

- sie beschreiben, was eine Klasse koennen muss
- aber nicht unbedingt, wie genau es gemacht wird

## Typisches Beispiel

```cpp
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};
```

## Merksatz

Abstrakte Klassen definieren eine gemeinsame Schnittstelle, konkrete Klassen liefern die echte Umsetzung.
