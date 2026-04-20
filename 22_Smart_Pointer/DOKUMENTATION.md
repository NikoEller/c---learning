# Smart Pointer

## Worum geht es?

Smart Pointer helfen beim sicheren Umgang mit dynamischem Speicher.

Die wichtigsten Typen:

- `std::unique_ptr`
- `std::shared_ptr`
- `std::weak_ptr`

## Warum wichtig?

Sie ersetzen viele manuelle `new`- und `delete`-Aufrufe und machen Programme sicherer.

## Beispiel

```cpp
auto ptr = std::make_unique<int>(42);
```

## Merksatz

In modernem C++ sind Smart Pointer meist die bessere Wahl als rohe Pointer fuer Besitzverhaeltnisse.
