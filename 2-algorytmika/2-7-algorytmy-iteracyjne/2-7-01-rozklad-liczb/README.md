# Programming-course-cpp

`Jakub Piskorowski on 30/08/2023 wersja: 1.0`

## Temat: Rozkład liczby na czynniki pierwsze

Przedstawienie działania algorytmu rozkładu liczb na czynniki pierwsze.

Kod źródłowy:


&#x1F4D2; Poziom 2

Powrót do [Algorytmika](/2-algorytmika/README.md)

---

## Objaśnienie

Zacznijmy od definicji. Rozkład liczby naturalnej n>1 na czynniki pierwsze polega na przedstawieniu jej w postaci iloczynu liczb pierwszych.

Liczby złożone będą miały co najmniej dwa czynniki pierwsze. Liczby pierwsze się nie rozkładają. Problem rozwiążemy sposobem szkolnym. Popatrzmy najpierw na kilka przykładów. Rozłóżmy liczby 24, 100, 1520:

24 = 2 \* 2 \* 2 \* 3 \
100 = 2 \* 2 \* 5 \* 5 \
1520 = 2 \* 2 \* 2 \* 2 \* 5 \* 19

Liczbę do rozłożenia będziemy dzielić przez liczby pierwsze tak długo, aż z liczby rozkładanej zrobi się 1.

![Rozkład liczb](./img/rozklad-liczb.png)

Rozpoczynamy od dwójki - jest to pierwsza liczba pierwsza. Jeśli rozkładana liczba dzieli się bez reszty przez 2, to wypisujemy 2 i skracamy ją przez 2. Czynność powtarzamy tak długo, jak długo liczba dana liczba jest podzielna przez 2. W drugim kroku szukamy następnego dzielnika rozkładanej liczby. Będzie to następna liczba pierwsza. Czynności te powtarzamy do momentu uzyskania wartości 1.

Zakładamy, że liczba, która znajdzie się na wejściu będzie większa od jedynki.

---

## Algorytm rozkładu liczb na czynniki pierwsze

**Wejście:**\
`n` – liczba naturalna podana przez użytkownika \
`k` - liczby pierwsze 

**Lista kroków:**\
K1: &emsp; `k ← 2` &emsp; Ustawiamy k na pierwszą liczbę pierwszą \
K2: &emsp; `dopóki n > 1` &emsp; rozkład liczby na czynniki pierwsze \
&emsp; &emsp; &emsp; `wykonuj kroki k3...k6` \
K3: &emsp; `dopóki n modulo k = 0` &emsp; dopóki liczba jest podzielna przez k \
&emsp; &emsp; &emsp; `wykonuj kroki K4...K5` \
K4: &emsp; `wyświetl k` \
K5: &emsp; `n ← n / k` \
k6: &emsp; `k ← k + 1` 

Wynik działania programu:

```text
Podaj liczbe: 1520
Czynniki pierwsze liczby 1520: 2 2 2 2 5 19
```

Kod źródłowy: [rozklad-liczby.cpp](rozklad-liczby.cpp)

<!--
Źródło: [algorytm.edu.pl](https://www.algorytm.edu.pl/algorytmy-maturalne/rozklad-na-czynniki.html)
-->