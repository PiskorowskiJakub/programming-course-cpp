# Programming-course-cpp

`Jakub Piskorowski on 04/01/2022 wersja: 1.0`

## Temat: Pętla for w zadaniach

Przedstawienie zastosowania petli for.

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1`

Powrót do [Instrukcje sterujace ](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/README.md)

---

## Dział 122 - Pętla for

[Petla for](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/1-2-2-petla-for/README.md) (powrót) \
Zadanie 1 - [Tabliczka mnozenia](#zadanie-1---tabliczkka-mnozenia) \
Zadanie 2 - [Prostokąt](#zadanie-2---prostokąt)\
Zadanie 3 - [Dywan](#zadanie-3---dywan)\
Zadanie 4 - [Bez powtórzeń](#zadanie-4---bez-powtorzen) \
Zadanie 5 - [Odwrócony trójkąt](#zadanie-5---odwrocony-trojkat) \
Zadanie 6 - [Tabliczka mnożenia z obramowaniem](#zadanie-6---tabliczka-mnozenia-z-obramowaniem)

---

### Zadanie 1 - Tabliczka mnozenia

Napisz program z wykkorzystaniem pętli for, który wygeneruje tabliczkę mnożenia od 1 do 10 w formie przedstawionej poniżej:

```text
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10

2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
...
```

Kod źródłowy: [zad1-tabliczka-mnozenia.cpp](zad1-tabliczka-mnozenia.cpp)

### Zadanie 2 - Prostokat

Wykorzystująć pętlę for, narysuj z znaku `*` obrys prostokąta o danej szerokości i wysokości podanej przez użytkownika.

Przykład działania programu:

```text
Podaj szerokosc: 
10
Podaj wysokosc: 
5
**********
*        *
*        *
*        *
**********
```

Kod źródłowy: [zad2-prostokat.cpp](zad2-prostokat.cpp)

### zadanie 3 - Dywan

Rozbudowujac program z zadania 2 [Prostokat](#zadanie-2---prostokat), wypełnij jsrodek prostokąta dodając naprzemiennie ułożone w **"szachownice"** znaki `*` oraz `#`. Do zrobienia obramowania zamien kolejno dla poziomych linii znaku `-` a dla pionowych `|`.

Przykład działania programu:

```text
Podaj szerokosc: 
20
Podaj wysokosc: 
10
--------------------
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
|#*#*#*#*#*#*#*#*#*|
|*#*#*#*#*#*#*#*#*#|
--------------------
```

Kod źródłowy: [zad3-dywan.cpp](zad3-dywan.cpp)

### Zadanie 4 - Bez powtorzen

Wyświetl liczby 3 cyfrowe od 102, w których nie powtarzają się cyfry i policz ile jest takich liczb:

Wynik działania programu:

```text
...
983
984
985
986
987
Liczb bez powtarzajacych sie cyfr: 648
```

Kod źródłowy: [zad4-bez-powtorzen.cpp](zad4-bez-powtorzen.cpp)

### Zadanie 5 - Odwrocony trojkat

Po podaniu szerokosci i wysokosci przez uzytkownika, zostaje wyświetlony odwrócony trójkąt przedstawiony poniżej.

```text
Podaj szerokosc: 
11
Podaj wysokosc: 
6
***********
 *********
  *******
   *****
    ***
     *
```

Kod źródłowy: [zad5-trojkat.cpp](zad5-trojkat.cpp)

### Zadanie 6 - Tabliczka mnozenia z obramowaniem

Zadanie polega na wygenerowaniu o podanej przez użytkownika szerokości i wysokości tabelę z tabliczką mnożenia. Tabela z wartościami powinna posiadać ramkę a z jej górnej i lewej strony powinny zjadować sie mnożniki.

Wynik działania programu:

```text
Podaj szerokosc: 
6
Podaj wysokosc: 
4

  | 1   2       3       4       5       6
----------------------------------------------------
1 | 1   2       3       4       5       6        |
2 | 2   4       6       8       10      12       |
3 | 3   6       9       12      15      18       |
4 | 4   8       12      16      20      24       |
----------------------------------------------------
```

Kod źródłowy: [zad6-tabliczka-v2.cpp](zad6-tabliczka-v2.cpp)
