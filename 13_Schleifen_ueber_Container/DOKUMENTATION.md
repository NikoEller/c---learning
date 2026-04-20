# Schleifen ueber Container

## Warum ist das wichtig?

Sobald du mit Arrays, `std::vector` oder anderen Containern arbeitest, musst du oft ueber alle Elemente laufen.

## Zwei typische Varianten

### Klassische Schleife

```cpp
for (std::size_t i = 0; i < values.size(); i++) {
    std::cout << values[i];
}
```

Hier arbeitest du mit einem Index.

### Range-based for

```cpp
for (int value : values) {
    std::cout << value;
}
```

Hier bekommst du die Elemente direkt.

## Wann welche Form?

- klassische Schleife, wenn du den Index brauchst
- range-based Schleife, wenn du einfach nur ueber alle Elemente laufen willst

## Merksatz

Wenn du keinen Index brauchst, ist die range-based Schleife oft klarer.
