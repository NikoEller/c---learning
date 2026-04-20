# Uebungen

## Aufgabe 1

Erweitere `calculator.h` und `calculator.cpp` um eine Funktion:

```cpp
int divide(int a, int b);
```

Ueberlege dir, wie du damit umgehen willst, wenn `b == 0`.

## Aufgabe 2

Schreibe mindestens zwei GoogleTest-Testfaelle fuer `divide`:

- ein normaler Fall
- ein Randfall

## Aufgabe 3

Fuege eine neue Funktion hinzu:

```cpp
int absolute_value(int value);
```

Schreibe dazu Tests fuer:

- positive Zahl
- negative Zahl
- `0`

## Aufgabe 4

Erklaere in eigenen Worten den Unterschied zwischen:

- `EXPECT_EQ`
- `ASSERT_EQ`
