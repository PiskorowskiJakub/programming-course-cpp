# Programming-course-cpp

`Jakub Piskorowski on 10/01/2022 wersja: 1.1`

## Temat: Wskkazniki w zadaniach

Przedstawienie czym są wskkazniki oraz jak ich używać.

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2` \
![#fd646e](https://via.placeholder.com/15/fd646e/000000?text=+) `Poziom 3`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Dział 135 - Wskazniki

[Wskazniki](/1-programowanie-strukturalne/1-3-struktury-danych/1-3-5-wskazniki/README.md) (powrót) \
Zadanie 1 - [zmienna wskaźnikowa](#zadanie-1---zmienna-wskaznikowa) \
Zadanie 2 - [zmienna wskaznikowa](#zadanie-2---zmienna-wskaznikowa) \
Zadanie 3 - [funkcje](#zadanie-3---funkcje)

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

Rozwiązanie zadania: [zad3-wsk-funkcje.cpp](zad1-wsk-funkcje.cpp)

### Zadanie 4

Do tablicy 10 elementowej wylosuj 10 liczb z przedziału od 0 do 50. \
Użytkownik podaje liczbę. \
Stworz funkcję sprawdzającą czy użytkownik zgadł liczbę. Przekaż do funkcji wskaźni na podaną przez użytkownia liczbę oraz tablicę z wylosowanymi wartościami. \
Użytkownik ma podawać takk długo liczbę aż trafi na wylosowaną. \
Po trafieniu liczby wyświetlić ma się licznik za kktórym razem trafił.
