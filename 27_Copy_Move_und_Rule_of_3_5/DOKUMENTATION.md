# Copy, Move und Rule of 3/5

## Worum geht es?

Sobald eine Klasse eigene Ressourcen verwaltet, wird wichtig, was beim

- Kopieren
- Zuweisen
- Verschieben
- Zerstoeren

passiert.

Genau dafuer gibt es in C++ die sogenannten Spezialfunktionen.

## Die wichtigen Spezialfunktionen

- Destruktor
- Copy-Konstruktor
- Copy-Assignment-Operator
- Move-Konstruktor
- Move-Assignment-Operator

Diese Funktionen bestimmen, wie sich ein Objekt verhaelt, wenn es kopiert,
verschoben oder zerstoert wird.

## Rule of 3

Die Rule of 3 sagt:

Wenn du eine dieser Funktionen selbst definieren musst,

- Destruktor
- Copy-Konstruktor
- Copy-Assignment

dann brauchst du oft auch die anderen beiden.

Das gilt vor allem bei Klassen, die rohen Speicher oder andere rohe Ressourcen
verwalten.

## Rule of 5

Seit modernem C++ kommen noch zwei Move-Funktionen dazu:

- Move-Konstruktor
- Move-Assignment

Darum spricht man heute oft von der Rule of 5.

## Copy bedeutet etwas anderes als Move

`Copy` bedeutet:

- es entsteht ein neues, unabhaengiges Objekt
- beide Objekte besitzen danach ihre eigenen Daten

`Move` bedeutet:

- die Ressourcen werden an ein neues Objekt uebertragen
- das Quellobjekt bleibt gueltig, besitzt die Ressource danach aber meist nicht mehr

## Warum ist das wichtig?

Wenn eine Klasse zum Beispiel einen rohen Zeiger auf Speicher besitzt und du
Copy nicht sauber definierst, koennen mehrere Objekte auf denselben Speicher
zeigen.

Das fuehrt schnell zu Problemen wie:

- Double Delete
- Speicherverlust
- Zugriff auf ungueltige Daten

## Tiefes Kopieren statt flaches Kopieren

Gerade bei dynamischem Speicher ist die entscheidende Frage:

- soll nur die Adresse kopiert werden?
- oder soll wirklich ein neuer Speicherblock mit denselben Werten entstehen?

In der Regel braucht man hier ein sogenanntes Deep Copy.

## Move als Effizienzwerkzeug

Move ist oft deutlich billiger als Copy, weil nicht alle Daten neu angelegt und
kopiert werden muessen.

Stattdessen wird der Besitz uebertragen.

Das spielt besonders bei grossen Puffern, Containern oder Strings eine Rolle.

## Rule of Zero

Noch besser als selbst alles zu schreiben ist oft die Rule of Zero:

Wenn deine Klasse nur Standardtypen wie `std::vector`, `std::string` oder
`std::unique_ptr` verwendet, dann kann der Compiler viele Spezialfunktionen
korrekt selbst erzeugen.

Deshalb sollte man rohe Ressourcen nur dann selbst verwalten, wenn es wirklich
einen guten Grund gibt.

## Woran du erkennst, dass das Thema relevant ist

Sobald deine Klasse etwas selbst "besitzt", zum Beispiel:

- `new` / `delete`
- ein Handle
- einen Dateideskriptor
- eine externe Ressource

musst du ueber Copy und Move bewusst nachdenken.

## Merksatz

Sobald eine Klasse selbst Ressourcen besitzt, sollte sie bewusst definieren,
wie Kopieren, Verschieben und Zerstoeren funktionieren.
