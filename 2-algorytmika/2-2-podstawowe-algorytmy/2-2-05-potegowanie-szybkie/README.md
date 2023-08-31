# Programming-course-cpp

`Jakub Piskorowski on 30/08/2023 wersja: 1.0`

## Temat: Potęgowanie szybkie

Przedstawienie działania algorytmu szybkiego potęgowania.

Kod źródłowy:
[iteracyjnie-szybkie-potegowanie.cpp](iteracyjnie-szybkie-potegowanie.cpp)

&#x1F4D2; Poziom 2

Powrót do [Podstawowe algorytmy](/2-algorytmika/2-2-podstawowe-algorytmy/README.md)

---

## Objaśnienie

**Algorytm szybkiego potęgowania** – metoda pozwalająca na szybkie obliczenie potęgi o wykładniku naturalnym. Metoda ta wykorzystuje pośrednio dwójkową reprezentację wykładnika potęgi, a jej złożoność, wyrażona jako liczba wykonywanych mnożeń, wynosi Θ (log **n**), gdzie **n** oznacza wykładnik obliczanej potęgi.

Standardowe potęgowanie dla wyrażenia a<sup>n</sup> potrzebuje aż n-1 mnożeń, natomiast algorytm potęgowania szybkiego pozwala na wykonanie tego zadania wykonując maksymalnie 2*log<sub>2</sub>n mnożeń, czyli bardzo szybko.

Dla przykładu popatrzmy na takie wyrażenie: \
2<sup>10</sup> = 2* 2*...*2 = 1024 \
Potęgę \
2<sup>10</sup> \
można rozpisać w inny sposób: \
2<sup>10</sup>=(2<sup>5</sup>)<sup>2</sup>= (2 * 2<sup>4</sup>)<sup>2</sup>=(2 * (2<sup>2</sup>)<sup>2</sup>)<sup>2</sup> = (2 * (2 * 2)<sup>2</sup>)<sup>2</sup> \
Licząc ilość mnożeń otrzymujemy w tym przypadku tylko cztery. Dla dużych wykładników oszczędność jest ogromna. Gdybyśmy chcieli podnieść do potęgi miliard, wykonalibyśmy nie więcej niż 100 mnożeń a więc się opłaca.

Tak na prawdę wystarczy lepiej przyjrzeć się wykładnikowi i jego postaci binarnej, w tym przykładzie. \
10 = ( 1010 )<sub>2</sub> \
Zasada jest następująca: \
Ustawmy **wynik = 1:** \
jeżeli kolejny bit jest równy **0** (licząc od prawej), podstawę nadpisujemy jej kwadratem. \
jeśli kolejny bit jest równy **1**, wynik przemnażamy przez aktualną wartość podstawy, a podstawę nadpisujemy jej kwadratem. \
Czynności powtarzamy do wyczerpania bitów w liczbie. 



## Funkcja szybkiego potęgowania metodą iteracyjną

**Wejście:**\
`a` – podstawa \
`n` - wykładnik 

**Wyjście:**\
`w` - wynik potęgowania szybkiego

**Lista kroków:**\
K1: &emsp; `w ← 1` początkowa wartość zmiennej przechowującej wynik \
K2: &emsp; `dopóki n > 0` \
&emsp; &emsp; &emsp; `wykonuj kroki K3...K5` \
K3: &emsp; `jeżeli n modulo 2 = 1` &emsp; jeżeli bit jest równy 1 \
&emsp; &emsp; &emsp; `to w ← w * a ` \
K4: &emsp; `a ← a * a` \
K5: &emsp; `n ← n \ 2` \
K6: &emsp; `zwróć w`


Wynik działania programu:

```text
Podaj podstawe: 2
Podaj wykladnik: 6
2 do potegi 6 wynosi: 64
```

Kod źródłowy: [iteracyjnie-szybkie-potegowanie.cpp](iteracyjnie-szybkie-potegowanie.cpp)

<!--
Źródło: [algorytm.edu.pl](https://www.algorytm.edu.pl/algorytmy-maturalne/potegowanie-szybkie.html)
-->