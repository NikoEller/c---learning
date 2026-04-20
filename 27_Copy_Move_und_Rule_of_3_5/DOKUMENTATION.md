# Copy, Move und Rule of 3/5

## Worum geht es?

Sobald eine Klasse selbst Ressourcen verwaltet, wird wichtig, wie Objekte kopiert, verschoben und zerstoert werden.

Hier kommen diese Spezialfunktionen ins Spiel:

- Destruktor
- Copy-Konstruktor
- Copy-Assignment-Operator
- Move-Konstruktor
- Move-Assignment-Operator

## Rule of 3

Wenn du einen von diesen drei selbst definierst, brauchst du oft auch die anderen:

- Destruktor
- Copy-Konstruktor
- Copy-Assignment

Das gilt besonders dann, wenn die Klasse rohe Ressourcen wie dynamischen Speicher selbst verwaltet.

## Rule of 5

Seit Move-Semantik in modernem C++ dazugekommen ist, spricht man oft von der Rule of 5:

- Destruktor
- Copy-Konstruktor
- Copy-Assignment
- Move-Konstruktor
- Move-Assignment

## Warum ist das wichtig?

Wenn Copy und Move nicht sauber definiert sind, koennen Fehler entstehen:

- Double Delete
- Speicherverlust
- ungueltige Zustaende

## Der praktische Gedanke

- Copy bedeutet: erstelle ein echtes neues, unabhaengiges Objekt
- Move bedeutet: uebernimm die Ressourcen eines anderen Objekts

## Merksatz

Sobald eine Klasse selbst Ressourcen besitzt, muss man bewusst ueber Copy und Move nachdenken.
