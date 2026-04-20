# Debugging mit VS Code

## Worum geht es?

Debugging bedeutet, ein Programm kontrolliert zu untersuchen, waehrend es laeuft.

In VS Code sind dabei besonders wichtig:

- Breakpoints
- Step Over
- Step Into
- Step Out
- Variablenanzeige
- Watch-Fenster
- Call Stack

## Warum ist Debugging so wichtig?

Viele Fehler versteht man viel schneller im Debugger als nur mit `std::cout`.

Mit Ausgaben kannst du zwar Hinweise sammeln, aber im Debugger siehst du:

- den genauen aktuellen Wert einer Variablen
- welche Funktion gerade aktiv ist
- wie das Programm an diese Stelle gekommen ist

## Typischer Ablauf

1. Breakpoint setzen
2. Programm im Debug-Modus starten
3. an der Stelle stoppen
4. Variablen anschauen
5. Zeile fuer Zeile weitergehen
6. den Kontrollfluss nachverfolgen

## Wichtige Debug-Schritte

### Step Over

Fuehrt die aktuelle Zeile aus, ohne in Funktionsaufrufe hineinzuspringen.

### Step Into

Springt in die aufgerufene Funktion hinein.

### Step Out

Fuehrt die aktuelle Funktion zu Ende und geht zur aufrufenden Stelle zurueck.

## Gute Einsatzfaelle

- falsche Werte in Schleifen
- unerwartete Bedingungen
- Probleme mit Pointern oder Referenzen
- Logikfehler
- Off-by-one-Fehler

## Typische Debug-Fragen

- Welche Werte hat die Variable genau in dieser Zeile?
- Ist der Funktionsparameter wirklich das, was ich denke?
- Wie oft laeuft die Schleife?
- Warum wurde dieser Zweig betreten?

## Beispielidee

Wenn eine Summe falsch ist, setzt du einen Breakpoint in die Funktion und beobachtest:

- Startwert von `sum`
- aktuelles Schleifenelement
- Zwischenwerte nach jedem Schritt

## Merksatz

Debugging zeigt dir nicht nur, dass etwas falsch ist, sondern wo und wie es falsch wird.
