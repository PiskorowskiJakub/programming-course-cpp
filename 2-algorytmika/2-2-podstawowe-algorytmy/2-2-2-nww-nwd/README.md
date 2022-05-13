# Programming-course-cpp

`Jakub Piskorowski on 22/02/2022 wersja: 1.0`

## Temat: Algorytm obliczania NWW oraz NWD

Przedstawienie działania algorytmu do wyznaczania NWW oraz NWD.

Kod źródłowy:
[liczby-pierwsze.cpp](liczby-pierwsze.cpp)

&#x1F4D2; Poziom 1

Powrót do [Podstawowe algorytmy](/2-algorytmika/2-2-podstawowe-algorytmy/README.md)

---

## Objaśnienie

## Największy wspólny dzielnik - NWD

**Największy wspólny dzielnik kilku liczb** to największa liczba naturalna dzieląca wszystkie z tych liczb. Obliczanie NWD dla małych liczb można wykonać ręcznie w pamięci, jednak przy większych liczbach dobrze posłużyć się pewnymi algorytmami (np. algorytmem Euklidesa).

W celu obliczenia największego wspólnego dzielnika należy przeprowadzić następujące kroki:

1. Rozłożyć liczby na iloczyn czynników pierwszych
2. Wymnożyć wspólne czynniki pierwsze, które powtarzają się zarówno dla jednej i drugiej liczby.

Przykładowo, obliczmy NWD dla liczb `56` i `100`:

56 = 2 ∗ 2 ∗ 2 ∗ 7 \
100 = 2 ∗ 2 ∗ 5 ∗ 5
  
Jedyne wspólne czynniki pierwsze to `2` i `2`. W takim razie:

NWD(56,100) = 2 ∗ 2 = 4

### Algorytm Euklidesa

Euklides wykorzystał prosty fakt, iż NWD liczb a  i b  dzieli również ich różnicę. Zatem od większej liczby odejmujemy w pętli mniejszą dotąd, aż obie liczby się zrównają. Wynik to NWD dwóch wyjściowych liczb.

**Lista kroków:** \
K1: &emsp; `Dopóki a  ≠ b`, \
&emsp; &emsp; `wykonuj krok K2` \
K2: &emsp; `Jeśli a  < b`, \
&emsp; &emsp; `to b  ← b  - a` \
&emsp; &emsp; `inaczej a  ← a  - b` &emsp; od większej liczby odejmujemy mniejszą aż się zrównają \
K3: &emsp; `Pisz a` &emsp; wtedy dowolna z nich jest NWD \
K4: &emsp; `Zakończ`

Wynik działania programu:

```text
Podaj pierwsza liczbe: 56
Podaj druga liczbe: 100
Najwiekszy wspolny dzielnik: 4
```

Kod źródłowy: [nwd.cpp](nwd.cpp)

<!--Źródło: [matura-informatyka.pl](https://www.matura-informatyka.pl/programowanie/najwiekszy-wspolny-dzielnik) -->

---

## Najmniejsza wspólna wielokrotność - NWW

Najmniejsza wspólna wielokrotność jest skrótowo opisywana jako NWW. Aby obliczyć NWW danej liczby należy:

1. Rozłożyć liczby na iloczyn czynników pierwszych
2. Dla każdego czynnika sprawdzić ile razy wystąpił dla jednej i drugiej liczby. Wybrać większą wartość i tyle razy zapisać tę liczbę.
3. Wymnożyć wszystkie liczby z punktu poprzedniego.

Rozłożenie liczby na iloczyn czynników pierwszych polega na zapisaniu tej liczby w postaci iloczynu liczb pierwszych. Przykładowo, znajdźmy NWW dla liczb 56 i 100. W pierwszym kroku należy rozłożyć te liczby na czynniki pierwsze:

56 = 2 ∗ 2 ∗ 2 ∗ 7
100 = 2 ∗ 2 ∗ 5 ∗ 5

Sprawdzamy, ile razy dany czynnik pierwszy został użyty w każdym z równań. Wybieramy największą wartość i tyle razy zapisujemy tę liczbę, czyli:

NWW(56,100) = 2 ∗ 2 ∗ 2 ∗ 5 ∗ 5 ∗ 7 = 1400

### Algorytm obliczania NWW

Nie istnieje algorytm na obliczanie NWW. Mimo to, dzięki występowaniu tej zależności:

NWW(a,b) = (a∗b) / ( NWD(a,b) )
  
Możemy skorzystać z algorytmu Euklidesa w celu znalezienia największego wspólnego dzielnika NWD. Mając NWD łatwo policzymy NWW.

**Lista kroków:** \
K1: &emsp; `iloczyn ← a * b` \
K2: &emsp; `Dopóki a  ≠ b`, \
&emsp; &emsp; `wykonuj krok K3` \
K3: &emsp; `Jeśli a  < b`, \
&emsp; &emsp; `to b  ← b  - a` \
&emsp; &emsp; `inaczej a  ← a  - b` &emsp; od większej liczby odejmujemy mniejszą aż się zrównają \
K4: &emsp; `nww ← iloczyn / a` \
K5: &emsp; `Pisz nww` \
K6: &emsp; `Zakończ`

Wynik działania programu:

```text
Podaj pierwsza liczbe: 56
Podaj druga liczbe: 100
Najmniejsza wspolna wielokrotnosc: 1400
```

Kod źródłowy: [nww.cpp](nww.cpp)

<!--Żródło: [matura-informatyka.pl](https://www.matura-informatyka.pl/programowanie/najmniejsza-wspolna-wielokrotnosc) -->