# Programming-course-cpp

`Jakub Piskorowski on 03/01/2022 wersja: 1.0`

## Temat: Funkcje w zadaniach

Przedstawienie czym są funkcje oraz jak ich używać.

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2` \
![#fd646e](https://via.placeholder.com/15/fd646e/000000?text=+) `Poziom 3`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Dział 133 - Funkcje

[Funkcje](/1-programowanie-strukturalne/1-3-struktury-danych/1-3-3-funkcje/README.md) (powrót) \
Zadanie 1 - [Wizytówka](#zadanie-1---wizytowka) ![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) \
Zadanie 2 - Netto - brutto \
Zadanie 3 - Znajdź max wartość \
Zadanie 4 - Paczkomat - skrytka

---

### Zadanie 1 - Wizytowka

Zadanie polega na zaimplementowaniu funkcji `Przywitanie()`, która wyświetli przywitanie użytkownika wyorzystując jego imię i nazwisko.

```cpp
#include <iostream>
using namespace std;

int main()
{   
    string imie, nazwisko;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    Przywitanie(imie, nazwisko);
}
```

Rozwiązanie zadania: [wizytowka.cpp](1-wizytowka/1-wizytowka.cpp)
