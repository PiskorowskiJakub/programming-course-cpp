# Programming-course-cpp

`Jakub Piskorowski on 21/01/2022 wersja: 1.0`

## Temat: Tablice znaowe w zadaniach

Przedstawienie czym są tablice znakowe oraz jak ich używać.

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Dział 132 - Tablice znakowe

[Tablice](/1-programowanie-strukturalne/1-3-struktury-danych/1-3-1-tablice/README.md) (powrót) \
&emsp;Zadanie 1 - [Zad1](#zadanie-1)

---

### Zadanie* - Zamiana malych liter na duze

Napisz program, który pobierze od użytkownika trzy zdania oraz wyświetli je w odwrotnej kolejności, zamieniając wszystkie male litery (tylko angielskie) na duże.

**Wskazówka:** \
Warto zauważyć, że numery ASCII małych liter mieszczą się w przedziale [97; 122]. Różnica między małymi i dużymi literami wynosi 32. Będziemy sprawdzać każdy znak, czy jest to mała litera. Gdy będzie spełniony warunek przesuniemy ją o 32 numery w dół aby przeskoczyć na dużą literę. Do przechowania zdań użyjemy tablicy dwuwymiarowej.

Oczekiwany rezultat:

```text
Podaj pierwsze zdanie: Pierwsze
Podaj drugie zdanie: Drugie
Podaj trzecie zdanie: Trzecie
TRZECIE
DRUGIE
PIERWSZE
```

Rozwiązanie zadania: [zadn-male-na-duze.cpp](zadn-male-na-duze.cpp)
