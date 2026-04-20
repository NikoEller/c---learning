# Unit Tests mit GoogleTest

## Worum geht es?

GoogleTest, oft kurz `gtest`, ist ein Test-Framework fuer C++. Es spielt in C++ eine aehnliche Rolle wie JUnit in Java:

- du schreibst Testfaelle fuer Funktionen und Klassen
- du pruefst erwartete Ergebnisse automatisch
- du kannst spaeter schnell sehen, ob etwas kaputtgegangen ist

## Warum ist das wichtig?

Unit Tests helfen dir dabei:

- Fehler frueh zu finden
- Code sicher umzubauen
- Randfaelle gezielt zu pruefen
- Vertrauen in deine Funktionen aufzubauen

Gerade wenn Projekte groesser werden, sind automatisierte Tests ein grosser Unterschied zwischen "es funktioniert gerade" und "es ist verlässlich".

## Vergleich zu JUnit

GoogleTest ist nicht identisch zu JUnit, aber die Grundidee ist sehr aehnlich.

Gemeinsamkeiten:

- einzelne Tests schreiben
- Erwartungen formulieren
- Tests zusammenfassen
- Testlaeufe automatisiert ausfuehren

Unterschiede:

- in C++ muss man das Build-Setup haeufig expliziter einrichten
- oft nutzt man dafuer CMake
- Includes, Compiler und Build-Konfiguration spielen eine groessere Rolle als in vielen Java-Projekten

## Die wichtigsten GoogleTest-Bausteine

### `TEST`

Mit `TEST` definierst du einen Testfall:

```cpp
TEST(CalculatorTest, AddsPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}
```

Der erste Name ist meist die Test-Suite, der zweite der konkrete Testname.

### `EXPECT_*`

`EXPECT_*` prueft etwas, aber der Test laeuft weiter, auch wenn die Erwartung fehlschlaegt.

Beispiele:

- `EXPECT_EQ(a, b)` Gleichheit
- `EXPECT_NE(a, b)` Ungleichheit
- `EXPECT_TRUE(value)`
- `EXPECT_FALSE(value)`

### `ASSERT_*`

`ASSERT_*` bricht den aktuellen Test sofort ab, wenn die Bedingung nicht stimmt.

Das ist sinnvoll, wenn die restlichen Pruefungen ohne diese Bedingung keinen Sinn mehr machen.

Beispiel:

```cpp
ASSERT_NE(pointer, nullptr);
EXPECT_EQ(*pointer, 42);
```

### Exceptions und Gleitkommazahlen testen

GoogleTest kann nicht nur einfache Ganzzahlen vergleichen. Sehr haeufig braucht
man auch:

- `EXPECT_THROW(...)` fuer erwartete Exceptions
- `EXPECT_NO_THROW(...)` wenn etwas ohne Fehler laufen soll
- `EXPECT_DOUBLE_EQ(...)` fuer `double`-Werte

Beispiele:

```cpp
EXPECT_THROW(divide(10, 0), std::invalid_argument);
EXPECT_DOUBLE_EQ(average(values), 5.0);
```

## Beispiel mit mehreren Tests

```cpp
TEST(CalculatorTest, AddsPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalculatorTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(CalculatorTest, RecognizesEvenNumbers) {
    EXPECT_TRUE(is_even(8));
    EXPECT_FALSE(is_even(7));
}
```

## Test Fixtures mit `TEST_F`

Wenn mehrere Tests dieselbe gemeinsame Vorbereitung brauchen, verwendet man oft eine Fixture:

```cpp
class CalculatorFixture : public ::testing::Test {
protected:
    int base = 10;
};

TEST_F(CalculatorFixture, UsesSharedValue) {
    EXPECT_EQ(base + 5, 15);
}
```

Das ist besonders hilfreich, wenn:

- dieselben Objekte mehrfach gebraucht werden
- Tests einen gemeinsamen Startzustand haben sollen
- mehrere Tests mit denselben Beispieldaten arbeiten

## Typische Projektstruktur

Ein Testprojekt trennt oft:

- eigentlichen Code
- Header-Dateien
- Tests

Beispiel:

```text
25_Unit_Tests_mit_GoogleTest/
|- CMakeLists.txt
|- CMakePresets.json
|- include/
|  `- calculator.h
|- src/
|  `- calculator.cpp
|- tests/
|  `- calculator_test.cpp
`- uebungen/
```

## Warum hier CMake benutzt wird

GoogleTest braucht normalerweise eine saubere Build-Konfiguration. In diesem Themenordner ist das direkt mit CMake vorbereitet, weil das in VS Code sehr gut funktioniert.

Die Konfiguration nutzt `FetchContent`, wie es die offizielle GoogleTest-CMake-Quickstart-Doku vormacht. Dabei wird GoogleTest beim Konfigurieren automatisch als Abhaengigkeit eingebunden.

Nach der offiziellen GoogleTest-Quickstart-Doku kann man GoogleTest per `FetchContent` und einer URL einbinden; dort wird ausserdem empfohlen, den verwendeten Commit-Hash regelmaessig auf einen neueren Stand zu aktualisieren.

## VS Code Workflow

Am einfachsten funktioniert es so:

1. Installiere die VS-Code-Erweiterungen:
   - `C/C++`
   - `CMake Tools`
2. Oeffne den Repo-Ordner in VS Code.
3. CMake Tools erkennt ueber `.vscode/settings.json`, dass `25_Unit_Tests_mit_GoogleTest` das aktive CMake-Projekt sein soll.
4. Waehle einen Compiler/Kit.
5. Lasse konfigurieren und bauen.
6. Fuehre die Tests ueber CMake Tools oder `ctest` aus.

## Typischer Konsolenablauf mit CMake

```bash
cmake -S 25_Unit_Tests_mit_GoogleTest -B 25_Unit_Tests_mit_GoogleTest/build
cmake --build 25_Unit_Tests_mit_GoogleTest/build
ctest --test-dir 25_Unit_Tests_mit_GoogleTest/build --output-on-failure
```

## Wichtige Dateien in diesem Themenordner

- `CMakeLists.txt`: beschreibt das Build- und Test-Setup
- `CMakePresets.json`: vereinfacht das Konfigurieren
- `include/calculator.h`: Header fuer die Beispiel-Funktionen
- `src/calculator.cpp`: Implementierung
- `tests/calculator_test.cpp`: eigentliche GoogleTest-Testfaelle

## Was du hier lernst

Mit diesem Themenordner lernst du nicht nur "wie schreibe ich einen Test", sondern auch:

- wie man Code testbarer strukturiert
- wie Header und Implementierung getrennt werden
- wie CMake Tests einbindet
- wie Test-Executables aufgebaut sind
- wie Erwartungen und Assertions unterschiedlich wirken

## Merksatz

GoogleTest ist fuer C++ das, was JUnit in Java oft fuer viele Projekte ist: ein Standardwerkzeug, um Code verlässlich pruefbar zu machen.

## Quellen

- GoogleTest Quickstart mit CMake: https://google.github.io/googletest/quickstart-cmake.html
- GoogleTest User's Guide: https://google.github.io/googletest/
