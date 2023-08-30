# Programming-course-cpp

`Jakub Piskorowski on 09/02/2022 wersja: 1.0`

## Temat: Algorytm wyznaczania liczb pierwszych

Przedstawienie działania algorytmu do wyznaczania liczb pierwszych.

Kod źródłowy:
[liczby-pierwsze.cpp](liczby-pierwsze.cpp)

&#x1F4D2; Poziom 1

Powrót do [Podstawowe algorytmy](/2-algorytmika/2-2-podstawowe-algorytmy/README.md)

---

## Objaśnienie

W informatyce liczby pierwsze posiadają olbrzymie zastosowanie – np. w kryptografii, czyli przy szyfrowaniu i rozszyfrowywaniu informacji. Jak jest to ważne dla handlu i bankowości w sieci, chyba nie trzeba nikogo przekonywać.

**Liczba pierwsza** – liczba naturalna większa od 1, która ma dokładnie dwa dzielniki naturalne: jedynkę i siebie samą.

Wykaz początkowych liczb pierwszych:

```text
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97...
```

W wykazie brak np. liczby 4, bowiem ma ona 3 dzielniki: 1, 2 i 4. Podobnie z liczbą 6, która ma 4 dzielniki: 1, 2, 3 i 6.

Pierwsze, narzucające się podejście do problemu generacji liczb pierwszych jest bardzo prymitywne. Po prostu bierzemy kolejne liczby naturalne poczynając `od 2` (**1 nie jest pierwsze ponieważ dzieli się tylko przez 1 i brakuje nam drugiego podzielnika**). Wybraną liczbę naturalną `p` próbujemy dzielić przez liczby **od 2 do p - 1.** Jeśli żadna z tych liczb nie jest podzielnikiem `p`, to liczba `p` jest pierwsza. Wyprowadzamy ją i w specjalnym liczniku odnotowujemy ten fakt. Gdy licznik osiągnie stan `n`, kończymy algorytm.

---

## Algorytm wyznaczania liczb pierwszych przez sprawdzenie podzielności

**Wejście:** \
`n` – liczba określająca ile liczb pierwszych należy wygenerować, `n` ∈ N.

**Wyjście:** \
`n`  kolejnych liczb pierwszych.

**Zmienne pomocnicze:** \
`lp` – zlicza kolejno wygenerowane liczby pierwsze. `lp` ∈ N. \
`p` – kolejno testowane liczby naturalne. `p` ∈ N. \
`d` – kolejne dzielniki. `d` ∈ N. \

**Lista kroków:** \
K1: &emsp; `lp  ← 0` &emsp; zerujemy licznik liczb pierwszych \
K2: &emsp; `p  ← 2` &emsp; generację rozpoczynamy od 2 \
K3: &emsp; `Dopóki lp  < n`, &emsp; pętla generacji liczb pierwszych \
&emsp; &emsp; `wykonuj kroki K4 do K8` \
K4: &emsp; `Dla d  = 2, 3, ..., p - 1` &emsp; pętla sprawdzania podzielności p przez d \
&emsp; &emsp; `wykonuj krok K5` \
K5: &emsp; `Jeśli p mod d  = 0`, &emsp; jeśli p dzieli się przez d, to nie jest pierwsze \
&emsp; &emsp; `idź do kroku K8` \
K6: &emsp; `Pisz p` &emsp; p jest pierwsze \
K7: &emsp; `lp ← lp + 1` &emsp; zwiększamy licznik wygenerowanych liczb pierwszych \
K8: &emsp; `p ← p + 1` &emsp; przechodzimy do kolejnej liczby, kandydata \
K9: &emsp; `Zakończ`

**Wynik:**

``` text
Ile liczb pierwszych chcesz wyswietlic: 15
Liczby pierwsze: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
```

Kod źrodłowy: [liczby-pierwsze.cpp](liczby-pierwsze.cpp)
