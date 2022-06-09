# Programming-course-cpp

`Jakub Piskorowski on 07/06/2022 wersja: 1.0`

## Temat: Sortowanie przez wstawianie

Przedstawienie działania algorytmu sortowania przez wstawianie

Kod źródłowy:
[sortowanie-wstawianie.cpp](sortowanie-wstawianie.cpp)

&#x1F4D5; Poziom 3

Powrót do [Algorytmy sortowania](/2-algorytmika/2-4-algorytmy-sortowania/README.md)

---

## Objaśnienie
Ten rodzaj sortowania możemy porównać do układania kart pokerzysty. Pierwszą kartę wstawiamy w odpowiednie miejsce przesuwając pozostałe, następną także wstawiamy między odpowiednie karty i tak układamy zestaw kart.

Prześledźmy przykład na następującym ciągu liczb: \
`2, 5, 3, 0, 7, 1` 

Strategia algorytmu:
- Rozpoczynamy od drugiego elementu, czyli `5` i porównujemy go z elementami poprzedzającymi - w tym przykładzie poprzedza tylko liczba `2`.
- Jeśli napotkamy liczbę większą, to musimy przesunąć ją o jeden w prawo.
- Czynność tą powtarzamy do momentu napotkania liczby niemniejszej lub gdy skończą nam się liczby (nie będzie spełniony warunek `j >= 0`).
- W następnym kroku wstawiamy naszą liczbę w odpowiednie miejsce i otrzymujemy podzbiór uporządkowany.
- Powyższe czynności powtarzamy dla reszty wyrazów.

Dla przykładowego ciągu wygląda to następująco:
- `2 5 3 0 7 1` - liczba `5` pozostaje na swoim miejscu (dwa pierwsze elementy są posortowane)
- `2 3 5 0 7 1` - liczba `3` zostaje wstawiona między liczby `2` i `5` (trzy pierwsze elementy są posortowane)
- `0 2 3 5 7 1` - liczba `0` zostaje wstawiona na początek (cztery pierwsze elementy są posortowane)
- `0 2 3 5 7 1` - liczba `7` pozostaje na swoim miejscu (pięć pierwszych elementów jest posortowanych)
- `0 1 2 3 5 7` - liczba `1` zostaje wstawiona między liczby `0` i `2`. (otrzymujemy zbiór uporządkowany)

Sortowanie przez wstawianie można zaliczyć do atrakcyjniejszych algorytmów.Chociaż jego złożoność jest rzędu `O(n^2)`, a więc nie należy do najszybszych, to algorytm ma swoje zalety:
- jest stabilny
- bardzo dobrze zachowuje się w przypadku zbioru posortowanego lub częściowo posortowanego
- prosty w implementacji
- dobrze radzi sobie z niedużymi zbiorami

<!--Źródło: [algorytm.edu.pl](https://www.algorytm.edu.pl/algorytmy-maturalne/sortowanie-przez-wstawianie.html) -->

---

## Implementacja

**Wejście:** \
`tab` - tablica z losowymi wartościami liczb całowitych \
`n` - rozmiar tablicy

**Zmienne pomocnicze:** \
`temp` - zmienna tymczasowa wykorzystywana przy zamianie elementów


**Lista kroków:**\
K1: &emsp; `Dla i = 1,2,... n-1` \
&emsp; &emsp; &emsp; &emsp; `wykonuj kroki od K2 do K7` \
K2: &emsp; `pom ← tab[]` &emsp; Zapamiętanie elementu do przesuniecia \
K3: &emsp; `j ← i-1` \
K4: &emsp; `Dopóki j >= 0 oraz tab[] > pom` &emsp; Przesuwanie elementów większych od pom \
&emsp; &emsp; &emsp; &emsp; `wykonuj kroki od K5 do K6` \
K5: &emsp; `tab[j+1] ← tab[j]` &emsp; Przesunięcie elementu \
K6: &emsp; `j + 1` \
K7: &emsp; `tab[j+1] ← pom` &emsp; Wstawienie elementu w odpowiednie miejsce \

Wynik działania programu:

```text
Wprowadz liczbe elementow do posortowania: 10

Tablica przed posortowaniem:
72 | 85 | 81 | 92 | 23 | 28 | 3 | 34 | 41 | 41 |

Rozpoczecie sortowania

Tablica po sortowaniu:
3 | 23 | 28 | 34 | 41 | 41 | 72 | 81 | 85 | 92 |
```

Kod źródłowy: [sortowanie-wstawianie.cpp](sortowanie-wstawianie.cpp)
