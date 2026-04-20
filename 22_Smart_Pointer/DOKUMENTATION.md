# Smart Pointer

## Worum geht es?

Smart Pointer helfen beim sicheren Umgang mit dynamischem Speicher. Sie kapseln rohe Pointer und kuemmern sich um Besitzverhaeltnisse und Aufraeumen.

Die wichtigsten Typen sind:

- `std::unique_ptr`
- `std::shared_ptr`
- `std::weak_ptr`

## Warum ist das wichtig?

Rohe Pointer mit `new` und `delete` sind fehleranfaellig. Typische Probleme sind:

- Memory Leaks
- Double Delete
- unklare Besitzverhaeltnisse

Smart Pointer loesen genau diese Probleme in vielen Faellen deutlich besser.

## `std::unique_ptr`

Ein `unique_ptr` hat genau einen Besitzer.

```cpp
auto ptr = std::make_unique<int>(42);
```

Der Speicher wird automatisch freigegeben, wenn der `unique_ptr` zerstoert wird.

## `std::shared_ptr`

Ein `shared_ptr` erlaubt mehrere Besitzer desselben Objekts.

```cpp
auto ptr = std::make_shared<int>(99);
```

Erst wenn der letzte Besitzer verschwindet, wird der Speicher freigegeben.

## `std::weak_ptr`

Ein `weak_ptr` besitzt das Objekt nicht selbst. Er wird oft verwendet, um Referenzzyklen mit `shared_ptr` zu vermeiden.

## Wann welchen Typ?

- `unique_ptr`, wenn ein Objekt genau einen Besitzer hat
- `shared_ptr`, wenn mehrere Objekte denselben Besitz teilen sollen
- `weak_ptr`, wenn man nur beobachten will, ohne Besitz zu uebernehmen

## Merksatz

In modernem C++ sind Smart Pointer oft die bessere Wahl als rohe Pointer fuer Besitzverhaeltnisse.
