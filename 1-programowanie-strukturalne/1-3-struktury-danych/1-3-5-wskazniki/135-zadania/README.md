# Programming-course-cpp

`Jakub Piskorowski on 10/01/2022 wersja: 1.2`

## Temat: Wskazniki w zadaniach

Przedstawienie czym są wskkazniki oraz jak ich używać.

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2` \
![#fd646e](https://via.placeholder.com/15/fd646e/000000?text=+) `Poziom 3`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Dział 135 - Wskazniki

[Wskazniki](/1-programowanie-strukturalne/1-3-struktury-danych/1-3-5-wskazniki/README.md) (powrót) \
Zadanie 1 - [zmienna wskaźnikowa](#zadanie-1---zmienna-wskaznikowa) \
Zadanie 2 - [zmienna wskaznikowa](#zadanie-2---zmienna-wskaznikowa) \
Zadanie 3 - [Funkcje](#zadanie-3---funkcje) \
Zadanie 4 - [Funkcje - tablice](#zadanie-4---funkcje---tablice) \
Zadanie 5 - [Funkcje - tablice](#zadanie-5---funkcje---tablice) \
Zadanie 6 - [Funkcje - tablice](#zadanie-6---funkcje---tablice)

---

### Zadanie 1 - zmienna wskaznikowa

Stworz wskaźnik na zmienną typu całkowitego, zainicjalizuj wartość `x = 15`. Następnie wyświetl wartość zmiennej za pomocą wskaźnika.

Rozwiązanie zadania: [zad1-wsk.cpp](zad1-wsk.cpp)

### Zadanie 2 - zmienna wskaznikowa

Zdefiniuj zmienną `n` typu `int` o wartości *3* oraz wskaźnik `wsk` do
obiektów typu `int`. Ustaw wskaźnik na obiekt `n`.

Wyświetl zawartość wskaźnika `wsk` oraz adres zmiennej `n`.

Rozwiązanie zadania: [zad2-wsk.cpp](zad2-wsk.cpp)

### Zadanie 3 - funkcje

Przekaż do funkcji 3 zmienne typu `float`. Zmodyfikuj ich wartości zwiększając wartość pierwszej zmiennej **1** drugiej zmiennej o **2** oraz 3 zmiennej o **3**. Następnie w funkcji głównej (`main()`) korzystając z wskaźnika wyświetl zawartość oraz adres obiektu.

Rozwiązanie zadania: [zad3-wsk-funkcje.cpp](zad3-wsk-funkcje.cpp)

### Zadanie 4 - funkcje - tablice

1. Zadeklaruj tablicę **5 elementową**, którą użytkownik wypełni liczbami całkowitymi.
2. Funkcja ``SumTab()`` ma sumować wszystkie wartości w tablicy. Do funkcji przekazywana jest talica a zwracany jest wynik sumowania.

Rozwiązanie zadania: [zad4-wsk-funkcje-tablice.cpp](zad4-wsk-funkcje-tablice.cpp)

### Zadanie 5 - funkcje - tablice

1. Do tablicy 10 elementowej wylosuj 10 liczb z przedziału od 0 do 50. [Funkcja losujaca](/1-programowanie-strukturalne/1-4-dodatkowe/1-4-1-losowanie/losowanie.cpp)
2. Użytkownik podaje liczbę.
3. Stworz funkcję sprawdzającą czy użytkownik zgadł liczbę. Przekaż do funkcji wskaźni na podaną przez użytkownia liczbę oraz tablicę z wylosowanymi wartościami.
4. Użytkownik ma podawać tak długo liczbę aż trafi na wylosowaną.
5. \* (Dodatkowe) Po trafieniu liczby wyświetlić ma się licznik za którym razem trafił.

Rozwiązanie zadania: [zad5-wsk-funkcje.cpp](zad5-wsk-funkcje.cpp)

### Zadanie 6 - funkcje - tablice

Rozbuduj program z [Zadania 5](#zadanie-5---funkcje---tablice) o następujące funkcjonalności:

1. Użytkownik podaje ile liczb chce wylosować.
2. Użytkownik podaje przedział liczb z których ma wylosować wartości.

Rozwiązanie zadania: [zad6-wsk-funkcje-tablice.cpp](zad6-wsk-funkcje-tablice.cpp)