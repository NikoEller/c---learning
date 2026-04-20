# CMake tiefer

## Worum geht es?

CMake ist ein Werkzeug, mit dem Build-Prozesse fuer C++-Projekte beschrieben werden. Es hilft dabei, Quell-Dateien, Header, Bibliotheken und Executables sauber zu organisieren.

## Warum ist CMake wichtig?

- Projekte werden schneller strukturierbar
- mehrere Dateien und Targets werden leichter verwaltbar
- Build-Konfigurationen fuer verschiedene Systeme werden einfacher
- Bibliotheken und Tests lassen sich sauber anbinden

## Typische Begriffe

- `project(...)`
- `add_executable(...)`
- `add_library(...)`
- `target_include_directories(...)`
- `target_link_libraries(...)`

## Einfaches Beispiel

```cmake
cmake_minimum_required(VERSION 3.14)
project(example LANGUAGES CXX)

add_executable(example main.cpp)
```

## Etwas realistischere Struktur

Viele Projekte trennen:

- `include/` fuer Header
- `src/` fuer Implementierungen
- die eigentliche `main.cpp`

Beispiel:

```text
35_CMake_tiefer/
|- CMakeLists.txt
|- cmake_tiefer.cpp
|- include/
|  `- message.h
`- src/
   `- message.cpp
```

## Bibliothek plus Executable

Ein haeufiges Muster ist:

1. eigene Bibliothek definieren
2. Include-Pfade festlegen
3. Executable anlegen
4. Bibliothek mit dem Executable verlinken

Beispiel:

```cmake
add_library(message_lib
  src/message.cpp
)

target_include_directories(message_lib
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(cmake_tiefer
  cmake_tiefer.cpp
)

target_link_libraries(cmake_tiefer
  PRIVATE
    message_lib
)
```

## Warum ist das besser als nur eine Datei?

- Projekte wachsen kontrollierter
- Funktionen koennen sauber ausgelagert werden
- Tests koennen dieselbe Bibliothek wiederverwenden

## Typischer Ablauf mit CMake

Wenn du das Beispiel manuell bauen willst, ist der typische Ablauf:

```bash
cmake -S 35_CMake_tiefer -B 35_CMake_tiefer/build
cmake --build 35_CMake_tiefer/build
```

Danach liegt das gebaute Programm im Build-Ordner.

## Was man spaeter oft macht

- Bibliotheken und Executables trennen
- Tests einbinden
- externe Abhaengigkeiten integrieren
- Compiler-Optionen zentral pflegen
- Plattformunterschiede abfangen

## Merksatz

CMake ist fuer viele moderne C++-Projekte der Standardweg, um Builds sauber, wiederverwendbar und professionell zu beschreiben.
