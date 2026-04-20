# CMake tiefer

## Worum geht es?

CMake ist ein Werkzeug, mit dem Build-Prozesse fuer C++-Projekte beschrieben werden. Es hilft dabei, Quell-Dateien, Header, Bibliotheken und Executables sauber zu organisieren.

## Warum ist CMake wichtig?

- Projekte werden schneller strukturierbar
- mehrere Dateien und Targets werden leichter verwaltbar
- Build-Konfigurationen fuer verschiedene Systeme werden einfacher

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

## Was man spaeter oft macht

- Bibliotheken und Executables trennen
- Tests einbinden
- externe Abhaengigkeiten integrieren
- Compiler-Optionen zentral pflegen

## Merksatz

CMake ist fuer viele moderne C++-Projekte der Standardweg, um Builds sauber zu beschreiben.
