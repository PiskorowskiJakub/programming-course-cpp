# Programming-course-cpp

`Jakub Piskorowski on 21/01/2022 wersja: 1.0`

## Temat: Tablice znaowe w zadaniach

Przedstawienie działania tablic znakowych w zadaniach.

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Dział 132 - Tablice znakowe

[Tablice znakowe](/1-programowanie-strukturalne/1-3-struktury-danych/1-3-2-tablice-znakowe/README.md) (powrót) \
&emsp;Zadanie 1 - [Poszukiwanie pozycji](#zadanie-1---poszukiwanie-pozycji)\
&emsp;Zadanie 2 - [Zamiana znaków](#zadanie-2---zamiana-znakow) \
&emsp;Zadanie 3\* - [Poszukiwanie nazwy pliku w tekscie](#zadanie-3---poszukiwanie-nazwy-pliku-w-tekscie) \
&emsp;Zadanie 4\* - [Zamiana małych liter na duże](#zadanie-4---zamiana-malych-liter-na-duze)

---

### Zadanie 1 - Poszukiwanie pozycji

Wykorzystując metodę `cin.getline()` pobrać od uzytkownika imię i nazwisko a następnie a następnie znaleźć pozycje znaku spacji oraz znaku końca tekstu (`\0`). Na koniec wyświetlić indeksy tych dwóch znaków.

Oczekiwany rezultat:

```text
Twoje dane osobowe: Jakub Piskorowski
Pozycja spacji: 5
Pozycja konca: 17
```

Rozwiązanie zadania: [zad1-poszukiwanie-pozycji.cpp](zad1-poszukiwanie-pozycji.cpp)

### Zadanie 2 - Zamiana znakow

1. Wykorzystując metodę `cin.getline()` pobrać od uzytkownika tekst o maksymalnej długości 200 znaków.
2. W miejscu **spacji** oraz **kropki** wstawić znak `-`
3. Wyświetlić zmieniony tekst

Oczekiwany rezultat:

```text
Podaj tekst o maksymalnej dlugosci 200 znakow: It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has 
a more-or-less normal distribution of letters.

Zmodyfikowany wyraz: It-is-a-long-established-fact-that-a-reader-will-be-distracted-by-the-readable-content-of-a-page-when-looking-at-its-layout--The-point-of-using-Lorem-Ipsum-is-that-it-has-a-more-or-less-normal-distri
```

Kod źródłowy: [zad2-zamiana-znakow.cpp](zad2-zamiana-znakow.cpp)

### Zadanie 3* - Poszukiwanie nazwy pliku w tekscie

Zadanie polega na przeszukaniu tekstu w celu znalezienia nazwy pliku oraz jego rozszerzenia. Punktem charakterystycznym będzie znalezienie pozycji kropki oraz od razu po tej kropce znajduje się jakiś znak różny od spacji, ponieważ jeżeli będzie spacja oznaczać to będzie iż po kkropce znajduje się koniec zdania. Aby to zrobić najpierw należy znaleźć pozycję kilku punkktów chharakterystycznych, po których będziemy się poruszać. Poniżej zostały przedstawione wymagane pozycje do wyświetlenia:

1. Pozycja końca tekstu,
2. pozycja kropki (po której znajduje się znak różny od spacji),
3. pozycja początku nazwy pliku.

Wykorzystując zebrane powyżej pozycje możemy zapisać teraz zapisać nazwę i rozszerzenie.

4. Nazwa pliku,
5. rozszerzenie.

Przykładowy tekst wprowadzany:

```tekst
Tekst. nazwa.cpp tekst
```

Oczekiwany rezultat:

```text
Poszukiwana nazwa pliku w tekscie: Tekst. nazwa.cpp tekst
Pozycja konca: 21
Pozycja kropki: 12
Pozycja poczatku nazwy pliku: 7
Nazwa pliku: nazwa
Rozszerzenie pliku: .cpp
```

Kod źródłowy: [zad3-nazwa-pliku.cpp](zad3-nazwa-pliku.cpp)

### Zadanie 4* - Zamiana malych liter na duze

Napisz program, który pobierze od użytkownika trzy zdania oraz wyświetli je w odwrotnej kolejności, zamieniając wszystkie male litery (**tylko angielskie**)** na duże.

**Wskazówka:** \
Warto zauważyć, że numery ASCII małych liter mieszczą się w przedziale [97; 122]. Różnica między małymi i dużymi literami wynosi 32. Będziemy sprawdzać każdy znak, czy jest to mała litera. Gdy będzie spełniony warunek przesuniemy ją o 32 numery w dół aby przeskoczyć na dużą literę. Do przechowania zdań użyjemy tablicy dwuwymiarowej. Pierwszy wymiar określa numer zdania, natomiast drugi, ilość znaków, która będzie zapisywania (np.100).

Oczekiwany rezultat:

```text
Podaj 1 zdanie: Pierwsze
Podaj 2 zdanie: Drugie
Podaj 3 zdanie: Trzecie
TRZECIE
DRUGIE
PIERWSZE
```

Rozwiązanie zadania: [zad4-male-na-duze.cpp](zad4-male-na-duze.cpp)
