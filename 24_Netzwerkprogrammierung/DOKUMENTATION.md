# Netzwerkprogrammierung

## Worum geht es?

Netzwerkprogrammierung bedeutet, dass Programme ueber ein Netzwerk miteinander kommunizieren. Ein Programm sendet Daten, ein anderes empfaengt und verarbeitet sie.

## Typische Konzepte

- Client und Server
- TCP und UDP
- Verbindungen und Ports
- Nachrichten senden und empfangen

## Client und Server

- Ein Client stellt Anfragen
- Ein Server wartet auf Anfragen und beantwortet sie

Ein Webbrowser ist zum Beispiel ein Client. Ein Webserver liefert die Antworten.

## TCP und UDP

### TCP

- verbindungsorientiert
- zuverlaessig
- richtige Reihenfolge der Daten
- eher fuer HTTP, Chat, Logins, Dateiuebertragung

### UDP

- verbindungslos
- schneller und einfacher
- keine Garantie fuer Reihenfolge oder Ankunft
- eher fuer Spiele, Streaming oder schnelle Statusdaten

## Warum ist das ein Aufbauthema?

Netzwerkprogrammierung baut auf vielen Grundlagen auf:

- Speicherverstaendnis
- Fehlerbehandlung
- Klassen
- Threads
- Dateiverarbeitung

## Wichtiger Hinweis

Reine Netzwerkprogrammierung ist in C++ oft plattformabhaengig oder nutzt Bibliotheken wie Boost.Asio oder plattformspezifische Socket-APIs.

Deshalb ist dieses Thema hier zuerst konzeptionell aufgebaut.

## Typische Beispiele aus der Praxis

- Browser und Webserver
- Multiplayer-Spiele
- Chat-Anwendungen
- APIs und Microservices

## Merksatz

Netzwerkprogrammierung verbindet viele vorherige C++-Grundlagen zu echten kommunizierenden Systemen.
