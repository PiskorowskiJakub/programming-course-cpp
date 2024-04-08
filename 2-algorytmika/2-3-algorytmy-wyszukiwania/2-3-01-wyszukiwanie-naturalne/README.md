# Programming-course-cpp

`Jakub Piskorowski on 14/03/2022 wersja: 1.0`

## Temat: Wyszukiwanie naturalne

Przedstawienie działania algorytmu wyszukiwania naturalnego

Kod źródłowy:
[wyszukiwanie-naturalne.cpp](wyszukiwanie-naturalne.cpp)

&#x1F4D2; Poziom 1

Powrót do [Algorytmy wyszukiwania](/2-algorytmika/2-3-algorytmy-wyszukiwania/README.md)

---

## Objaśnienie

**Wyszukiwanie liniowe** ( ang. linear search ), zwane również **sekwencyjnym** (ang. sequential search) polega na przeglądaniu kolejnych elementów zbioru. Jeśli przeglądany element jest liczbą o poszukiwanej wartości, to zwracamy jego pozycję w zbiorze.

### Algorytm wyszukiwania liniowego/sekwencyjnego

**Wejście:** \
`szukana` - poszukiwana liczba
`tab[]` - tablica z nieposortowanymi wartościami (2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47)

**Wyjście:** \
`liczby[]` - tablica z umerami indesów (pozycji) na ktorych znajduje się poszukiwana wartość

**Zmienne pomocnicze:** \
`index` - zapisanie indeksu (numeru) kolejnego elementu znalezionej liczby

**Lista kroków:**\
K1: &emsp; `tab[] ← ...` &emsp; tablica z nieposortowanymi wartościami \
K2: &emsp; `liczby[]` &emsp; \
K3: &emsp; `index ← 0` &emsp; \
K4: &emsp; `Dla i = 0, 1, ..., sizeof(tab)` \
&emsp; &emsp; &emsp; `wykonuj kroki K5` \
K5: &emsp; `Jeśli tab[] == szukana,` &emsp; poszuujemy danej wartości w tablicy \
&emsp; &emsp; &emsp; `to liczby[index] ← i` \
&emsp; &emsp; &emsp; `index ← index + 1` \
K6: &emsp; `Dla i = 0, 1, ..., liczby` \
&emsp; &emsp; &emsp; `pisz liczby[]` \
K7: &emsp; `Zaończ`

Wynik działania programu:

```text
Jaka liczbe poszukujesz: 2
Poszukiwana liczba znajduje sie na pozycji: 
0, 5, 15, 43,
```


