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
Zadanie 1 - [Wizytówka](#zadanie-1---wizytowka) \
Zadanie 2 - [Netto - brutto](#zadanie-2---netto---brutto) \
Zadanie 3 - [Znajdź max wartość](#zadanie-3---znajdz-max-wartosc) \
Zadanie 4 - [Paczkomat - skrytka](#zadanie-4---paczkomat---skrytka) \
Zadanie 5 - [Malo - duzo](#zadanie-5-malo---duzo)

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

Rozwiązanie zadania: [1-wizytowka.cpp](1-wizytowka.cpp)

### Zadanie 2 - Netto - brutto

Napisać funcję `Brutto()`, która po jej wywołaniu z parametrem kwoty `netto` zwróci nam obliczoną kwotę "Brutto". Oraz analogicznie zaimplementować funkcję `Netto()`, która z parametrem `brutto` zwróci kwotę "Netto".

```cpp
#include <iostream>
using namespace std;

int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 1:
            cout << "Podaj kwote netto: ";
            cin >> netto;
            cout << "Brutto: " << Brutto(netto) << " zl" << endl;
            break;
        case 2:
            cout << "Podaj kwote brutto: ";
            cin >> brutto;
            cout << "Netto: " << Netto(brutto) << " zl" << endl;
            break;
    }
}
```

Rozwiązanie zadania: [2-netto-brutto.cpp](2-netto-brutto.cpp)

### Zadanie 3 - Znajdz max wartosc

Napisz funcję `MaxFun()` do której przekażesz tablicę z 5 liczbami całkkowitymi podanymi przez użytkkownika. Funkcja ma przechodzic po elementach tablicy i zwrócić największą wartość z tablicy.


```cpp
#include <iostream>
using namespace std;

int main()
{
    
    int liczby[5];
    cout << "Podaj 5 liczb: ";
    for(int i=0; i<5; i++)
        cin >> liczby[i];
    
    cout << "Najwieksza liczba: " << MaxFun(liczby) << endl;

    system("pause");
    return 0;
}
```

Rozwiązanie zadania: [3-max-war.cpp](3-max-war.cpp)

### Zadanie 4 - Paczkomat - skrytka

Zadanie polega na stworzeniu 3 funkcji:

- `SprawdzWymiary()`, która po sprawdzeniu 3 warunków, zwróci informację czy paczka o parametrach podanych przez użytkownika wejdzie do **małej skrytki, dużej skrytki** albo **nie zmieści się do paczkomatu**.
- `MalaSkrytka()` oraz `DuzaSkrytka()`, następujące funkcje mają sprawdzać wymiary paczki czy są zgodne zwracając wartość ``true`` lub ``false``. Funkcje powinny zostać użyte w funkcji `SprawdzWymiary()`.

```cpp
#include <iostream>
using namespace std;

void SprawdzWymiary(float szer, float wys);
bool MalaSkrytka(float width, float height);
bool DuzaSkrytka(float width, float height);

int main()
{
    float szerokosc, wysokosc;
    cout << "Podaj wymiary paczki " << endl;
    cout << "Szerokosc (cm): ";
    cin >> szerokosc;
    cout << "Wysokosc (cm): ";
    cin >> wysokosc;
    SprawdzWymiary(szerokosc, wysokosc);
}
```

Rozwiązanie zadania: [4-paczkomat-skrytka.cpp](4-paczkomat-skrytka.cpp)

### Zadanie 5 Malo - duzo

„Za mało za dużo” — proszę napisać program pozwalający użytkownikowi na odgadnięcie liczby wylosowanej przez komputer. Program losuje nieznaną użytkownikowi liczbę (zakładamy np. przedział 1..100), użytkownik typuje liczbę, program odpowiada użytkownikowi czy to dobra liczba, czy też za mała, lub za duża. Gra trwa tak długo, aż użytkownik odgadnie wylosowaną liczbę.

Zadanie polega na zaimplementowaniu dwóch funkcji `DuzaMala()`, `CheckLiczba()` użytych w funkcji **main()** tab aby program spełniał wyżej wymienione założenia.

```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int wylosowanaLiczba = (rand() % 99) + 1;

    int liczba;
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba;

        DuzaMala(liczba, wylosowanaLiczba);

    }while( !(CheckLiczba(liczba, wylosowanaLiczba)) );
}
```

Rozwiązanie zadania: [5-malo-duzo.cpp](5-malo-duzo.cpp)
