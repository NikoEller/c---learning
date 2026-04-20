# Pointer Uebungsaufgaben

## Aufgabe 1: Adresse und Wert

Schreibe ein Programm mit:

- einer `int`-Variable `age`
- einem Pointer `ptr`, der auf `age` zeigt

Gib dann aus:

- den Wert von `age`
- die Adresse von `age`
- die im Pointer gespeicherte Adresse
- den Wert ueber `*ptr`

## Aufgabe 2: Wert ueber Pointer aendern

Lege eine Variable `number` mit dem Wert `10` an.

- Erstelle einen Pointer darauf.
- Aendere den Wert mit dem Pointer auf `50`.
- Gib `number` aus.

Frage:
Warum aendert sich die Originalvariable?

## Aufgabe 3: Funktion mit Pointer

Schreibe eine Funktion:

```cpp
void doubleValue(int* ptr);
```

Die Funktion soll den uebergebenen Wert verdoppeln.

Teste sie mit einer Variable aus `main`.

## Aufgabe 4: nullptr absichern

Lege einen Pointer an, der zuerst `nullptr` ist.

- Pruefe mit `if`, ob er `nullptr` ist.
- Gib eine sichere Meldung aus.
- Dereferenziere ihn nicht.

## Aufgabe 5: Array und Pointer

Lege ein Array mit 5 Ganzzahlen an.

- Speichere die Adresse des ersten Elements in einem Pointer.
- Gib das erste, zweite und dritte Element ueber Pointer-Arithmetik aus.

Verwende:

```cpp
*ptr
*(ptr + 1)
*(ptr + 2)
```

## Aufgabe 6: Pointer umbiegen

Lege zwei Variablen `a` und `b` an.

- Ein Pointer soll zuerst auf `a` zeigen.
- Danach soll er auf `b` zeigen.
- Gib beide Zustande aus.

Ziel:
Den Unterschied zwischen "Wert aendern" und "Adresse aendern" verstehen.

## Aufgabe 7: const Pointer verstehen

Probiere die folgenden drei Varianten aus und schreibe jeweils dazu, was erlaubt ist:

```cpp
const int* ptr1;
int* const ptr2 = ...;
const int* const ptr3 = ...;
```

Beantworte:

- Darf der Wert veraendert werden?
- Darf der Pointer auf eine neue Adresse zeigen?

## Aufgabe 8: Fehler finden

Was ist an diesem Code problematisch?

```cpp
int* ptr;
std::cout << *ptr << std::endl;
```

Schreibe die sichere Variante.

## Aufgabe 9: Mehrere Pointer auf dieselbe Variable

Lege eine Variable `value` an und zwei Pointer, die beide auf diese Variable zeigen.

- Aendere den Wert ueber den ersten Pointer.
- Gib den Wert ueber den zweiten Pointer aus.

Was beobachtest du?

## Aufgabe 10: Eigene Erklaerung

Schreibe in 3 bis 5 Saetzen deine eigene Erklaerung zu:

- Was ist ein Pointer?
- Was macht `&`?
- Was macht `*`?

Wenn du das sauber in eigenen Worten erklaeren kannst, sitzt das Thema schon viel besser.
