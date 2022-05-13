# Programming-course-cpp

`Jakub Piskorowski on 29/12/2021 wersja: 1.0`

## Temat: Typy danych

Przedstawienie podstawowych typów danych

Kod źródłowy: [typy-danych.cpp](typy-danych.cpp)\
&#x1F4D2; Poziom 1

Powrót do [Podstawy programowania](/1-programowanie-strukturalne/1-1-podstawy-programowania/README.md)

## Objaśnienie

**Zmienna** - to obiekt w programowaniu, który przechowuje różnego rodzaju dane niezbędne do działania programu. Zmienna podczas działania programu może zmieniać swoje wartości (jak wskazuje nazwa). Tworząc zmienną musimy nadać jej nazwę oraz typ, który określa co nasza zmienna będzie przechowywać. Nadając nazwę trzymamy się następujących reguł:

- zmienna jest jednym ciągiem znaków bez spacji np. nazwa_zmiennej - dobrze, nazwa zmiennej - źle
- nie zaczynamy nazwy od cyfry np. 12zmienna - źle, zmienna12 - dobrze
- nie używamy polskich liter takich jak ą, ę itp.
- nazwa zmiennej powinna kojarzyć się z przeznaczeniem tej zmiennej np. tablica_ciagu - dobrze
- nazwa nie może być słowem kluczowym języka programowania np. auto - źle

Ogólna zasada tworzenia zmiennych jest następująca: \
**typ_zmiennej nazwa_zmiennej;** \
np. \
**int a** - zmienna o nazwie "a" mająca typ całkowity int \
**char b** - zmienna o nazwie "b" mająca typ znakowy char. \

## Typy całkowite

Typy całkowite przechowują tylko liczby całkowite.

| Nazwa  |  Zakres |
| :-------- | -----:|
| short     | -2<sup>15</sup>÷ 2<sup>15</sup> - 1 <br>[-32768, 32767] |
| int       | -2<sup>31</sup>÷ 2<sup>31</sup> - 1 <br>[-2147483648, 2147483647] |
| long      | -2<sup>31</sup>÷ 2<sup>31</sup> - 1 <br>[-2147483648, 2147483647] |
| long long | -2<sup>63</sup>÷ 2<sup>63</sup> - 1 <br>[-9223372036854775808, 9223372036854775807] |
| unsigned short | 0 ÷ 2<sup>16</sup> - 1 <br>[0, 65535] |
| unsigned int   | 0 ÷ 2<sup>32</sup> - 1 <br>[0, 4294967295] |
| unsigned long  | 0 ÷ 2<sup>32</sup> - 1 <br>[0, 4294967295] |
| unsigned long long | 0 ÷ 2<sup>64</sup> - 1 <br>[0, 18446744073709551615] |

## Typy rzeczywiste

Typy rzeczywiste przechowuje liczby zmiennoprzecinkowe.

| Nazwa  |  Zakres |
| :-------- | -----:|
| float     | dokładność 6 cyfr po przecinku |
| double    | dokładność 14 cyfr po przecinku |
| long double | dokładność 15 cyfr po przecinku |

## Typ znakowy

Typ znakowy - przechowuje znaki, które są kodowane kodem ASCII.

| Nazwa  |  Zakres |
| :-------- | -----:|
| char          | -128 ÷ 127 |
| unsigned char | 0 ÷ 255 |

## Typ logiczny

Typ logiczny - przechowuje jedną z dwóch wartości - true (prawda) albo false (fałsz). Wartość logiczna true jest równa 1, natomiast false ma wartość 0.

| Nazwa  |  Zakres |
| :-------- | -----:|
| bool   | true (1) <br> false (0) |

Żródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/wstp-do-c/typy-zmiennych.html)