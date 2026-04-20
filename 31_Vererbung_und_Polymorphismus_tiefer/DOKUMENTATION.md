# Vererbung und Polymorphismus tiefer

## Worum geht es?

Vererbung erlaubt es, gemeinsame Eigenschaften und Verhalten in einer
Basisklasse zu sammeln.

Polymorphismus bedeutet, dass ueber einen Basisklassen-Zugriff unterschiedliche
abgeleitete Klassen verschieden reagieren koennen.

## Die Grundidee

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

Wenn du spaeter ueber `Animal&` oder `Animal*` arbeitest, kann trotzdem die
konkrete `Dog`-Implementierung aufgerufen werden.

## Warum `virtual` so wichtig ist

Ohne `virtual` wird bei einem Basisklassen-Zeiger oder einer
Basisklassen-Referenz meist die Basisklassen-Version verwendet.

Mit `virtual` entscheidet C++ zur Laufzeit, welche ueberschriebene Funktion
zur echten Objektart passt.

## `override`

`override` ist eine sehr gute Gewohnheit.

Der Compiler prueft damit, ob wirklich eine virtuelle Funktion der Basisklasse
ueberschrieben wird. Das verhindert viele Tipp- und Signaturfehler.

## Virtueller Destruktor

Wenn du polymorph ueber Basisklassenzeiger arbeitest, sollte die Basisklasse
fast immer einen virtuellen Destruktor haben:

```cpp
virtual ~Animal() = default;
```

Sonst kann das Zerstoeren ueber einen Basisklassenzeiger gefaehrlich werden.

## Typischer Nutzen

Polymorphismus ist stark, wenn viele konkrete Typen dieselbe gemeinsame
Schnittstelle teilen.

Beispiele:

- verschiedene Tierarten
- verschiedene Formen
- verschiedene Zahlungsarten
- verschiedene Dateiformate

## Basisklassen-Referenzen statt Typabfragen

Oft ist der grosse Vorteil von Polymorphismus:

Du musst nicht staendig fragen:

- "Ist das ein Hund?"
- "Ist das eine Katze?"

Stattdessen definierst du gemeinsames Verhalten in der Basisklasse und laesst
jedes konkrete Objekt selbst passend reagieren.

## Wichtiger Begriff: Object Slicing

Wenn du abgeleitete Objekte als Basisklassenobjekte per Wert kopierst, gehen
abgeleitete Teile verloren. Das nennt man Object Slicing.

Darum arbeitet man bei Polymorphismus meist mit:

- Referenzen
- Zeigern
- `std::unique_ptr<Base>`

## Merksatz

Vererbung organisiert Gemeinsamkeiten, Polymorphismus erlaubt unterschiedliches
Verhalten ueber denselben Basistyp.
