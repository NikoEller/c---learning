# Abstrakte Klassen und Interfaces

## Worum geht es?

Eine abstrakte Klasse ist eine Klasse, von der man nicht direkt Objekte
erzeugen kann.

Sie dient oft dazu, eine gemeinsame Schnittstelle festzulegen, die konkrete
Klassen spaeter umsetzen muessen.

## Reine virtuelle Funktion

```cpp
virtual void draw() const = 0;
```

Das `= 0` macht die Funktion rein virtuell.

Dadurch gilt:

- die Funktion hat in der Basisklasse keine vollstaendige Implementierung
- jede konkrete abgeleitete Klasse muss sie selbst bereitstellen
- die Basisklasse wird abstrakt

## Warum ist das nuetzlich?

Abstrakte Klassen sind stark, wenn du sagen willst:

- "Alle diese Klassen muessen dieselben Faehigkeiten haben"
- aber nicht: "Alle machen es exakt gleich"

## Interface-Idee in C++

In vielen Faellen verwendet man abstrakte Klassen wie Interfaces:

- sie beschreiben, was eine Klasse koennen muss
- aber nicht unbedingt, wie genau das umgesetzt wird

Beispiele:

- `Shape` muss `draw()` koennen
- `Notifier` muss `send()` koennen
- `PaymentMethod` muss `pay()` koennen

## Typisches Beispiel

```cpp
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};
```

## Unterschied zu normaler Vererbung

Eine normale Basisklasse kann schon viel gemeinsames Verhalten mitbringen.

Eine abstrakte Klasse konzentriert sich staerker auf den gemeinsamen Vertrag:

- welche Funktionen muessen vorhanden sein?
- welche Typen sollen ueber denselben Basistyp ansprechbar sein?

## Abstrakte Klassen duerfen auch normale Funktionen haben

Wichtig:

Eine abstrakte Klasse darf durchaus auch schon gemeinsame konkrete Funktionen
enthalten.

Sie ist nicht nur "leer", sondern kann:

- gemeinsame Hilfslogik bereitstellen
- Standardverhalten anbieten
- trotzdem einzelne Kernfunktionen offenlassen

## Wo das in echten Projekten vorkommt

- Plugin-Systeme
- Benachrichtigungskanaele
- Parser fuer verschiedene Dateiformate
- grafische Oberflaechenelemente
- austauschbare Strategien

## Merksatz

Abstrakte Klassen definieren eine gemeinsame Schnittstelle, konkrete Klassen
liefern die echte Umsetzung.
