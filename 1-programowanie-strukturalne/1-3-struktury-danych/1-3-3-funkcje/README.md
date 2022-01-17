# Programming-course-cpp

`Jakub Piskorowski on 03/01/2022 wersja: 1.0`

## Temat: Funkcje

Przedstawienie czym są funkcje oraz jak ich używać.

Kod źródłowy: [funkcje.cpp](funkcje.cpp)

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2`

Lista zadań: [133-zadania](133-zadania/README.md) \
&emsp;Zadanie 1 - [Wizytówka](133-zadania/README.md#zadanie-1---wizytowka) ![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) \
&emsp;Zadanie 2 - [Netto - brutto](133-zadania/README.md#zadanie-2---netto---brutto) \
&emsp;Zadanie 3 - Znajdź max wartość \
&emsp;Zadanie 4 - Paczkomat - skrytka \
&emsp;Zadanie 5 - [Malo - duzo](133-zadania/README.md#zadanie-5-malo---duzo)

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Objaśnienie

**Funkcja** jest to fragment programu, któremu nadano nazwę i który możemy wykonać poprzez podanie jego nazwy oraz ewentualnych argumentów (o ile istnieją). Argumentami są natomiast dane przekazywane do funkcji.

Przed funkcją główną `main()` deklarujemy wszystkie funkcje, tworzymy ich prototypy. `Funkcja1()`, `Funkkcja2()`, `Funkcja3()`. Pamiętamy aby nazwy funkcji zaczynać z dużej litery.

Przed nazwą funkcji określamy jaki typ danych będzie zwracany `return` przez funkcję, natomiast w nawiasach określamy jakie dane będziemy przekazywać do funkcji.

```cpp
#include <iostream>
using namespace std;

int Funkcja1(int a, int b);     
void Funkcja2();
void Funkcja3(float a);

int main() {

}
```

`Funkcja1()` zwróci dane typu `int` oraz przyjmuje dwa argumenty `int` oraz `int` (dwie zmienne) i zapisze je do nowych zmiennych lokalnych nazwanych `A` oraz `B`.

```cpp
int Funkcja1(int A, int B) {
    int wynik;
    wynik = A + B;
    return wynik;
}
```

`Funkcja2()` nie zwróci nic ponieważ jest typu `void` oraz nie przyjmuje żadnych argumentów. Funkcja wykona tylko to co jest w środku. W tym przypadku wyswietli tekst "Funkcja pusta" a następnie wyjdzie z funkcji.

```cpp
void Funkcja2() {
    cout << "Funkcja pusta" << endl;
}
```

`Funkcja3()` nie zwróci nic ponieważ jest typu `void` jednak przyjmuje jeden argument typu `float`. Funkcja wykona operacje dodawania na zmiennej lokalnej `liczba` a następnie wyświetli ją. Funkcja nic nie zwróci (typ `void`) więc wykona tylko to co jest w środku i wyjdzie z funkcji.

```cpp
void Funkcja3(float liczba) {
    liczba += 10;
    cout << "Wpisales liczbe: " << liczba;
}
```

W funkcji `main()` użyjemy wcześniej zadeklarowanych funkcji. \
Po wywoładniu `Funkcja1(4, 6)` z parametrami "4" oraz "6" (przekazanie wartosci 4 oraz 6) zwróci nam ona dane typu `int`. To co zwróci funkcja możemy przypisać do nowej zmiennej lub od razu wyświetlić to co ona zwróci.

```cpp
int main() {
    int wynik = Funkcja1(4, 6);
    cout << "Wynik: " << wynik << endl;
    cout << "Ten sam wynik" << Funkcja1(4, 6) << endl;
}
```

`Funkcja2();` nic nie zwróci więc wystarczy że ją wywołamy (wykonamy). W tym miejscu wejdzie do funkcji, wykona to co jest w środku i wyjdzie z niej.

```cpp
int main() {

    Funkcja2();
}
```

`Funkcja3();` również jest typu `void` więc nic nam nie zwróci jednak przekazujemy do niej jeden parametr (liczbę zmiennoprzecinkową). \
Zostanie przekazany parametr do funkcji, wykona się zawartość funkcji i wyjdzie z niej.

```cpp
int main() {

    Funkcja3(4.7);
}
```
