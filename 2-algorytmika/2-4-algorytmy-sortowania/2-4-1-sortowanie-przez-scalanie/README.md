# Programming-course-cpp

`Jakub Piskorowski on 19/04/2022 wersja: 1.0`

## Temat: Sortowanie przez scalanie

Przedstawienie działania algorytmu sortowania przez scalanie

Kod źródłowy:
[sortowanie-scalanie.cpp](sortowanie-scalanie.cpp)

![#fd646e](https://via.placeholder.com/15/fd646e/000000?text=+) `Poziom 3`

Powrót do [Algorytmy sortowania](/2-algorytmika/2-4-algorytmy-sortowania/README.md)

---

## Objaśnienie

Algorytm **sortowania przez scalanie,** to kolejny już z algorytmów, który opiera się na zasadzie **"dziel i zwyciężaj"** (poprzednio "wyszuiwanie binarne"). Można wręcz powiedzieć, że wykorzystuje ją w dość bezpośrednim rozumieniu. Główna zasada działania **polega na rekurencyjnym dzieleniu tablicy na podtablice**. Dzielenie kończymy, w którym, każda z podtablic w danej grupie jest tablicą jednoelementową. **Łączymy je kolejno porównując wartości ich elementów**. Dokładny przebieg algorytmu wygląda następująco:

Jeśli indeks prawej części tablicy (r) jest większy od indeksu lewej (l) części tablicy wykonaj następujące kroki:

1. Znajdź środkowy indeks tablicy (m), ze wzoru m=(l+r)/2 (resztę z dzielenia zaokrąglamy w dół)
2. Wywołaj sortowanie przez scalanie dla podtablicy o indeksach od l do m
3. Wywołaj sortowanie przez scalanie dla podtablicy o indeksach od m+1 do r
4. Połącz podtablicę l – m i m+1 – r, przyrównując przy tym ich elementy – Jeśli element lewej tablicy na aktualnej pozycji jest mniejszy od tego na prawej, wstaw go do tablicy docelowej i zwiększ indeks lewej tablicy. W przeciwnym przypadku, wykonaj analogiczne działanie dla prawej tablicy.

<!-- Źródło: [binarnie.pl](https://binarnie.pl/sortowanie-przez-scalanie/) -->

---

## Przykład - wizualizacja

![Merge sort example](https://github.com/PiskorowskiJakub/programming-course-cpp/blob/main/2-algorytmika/2-4-algorytmy-sortowania/2-4-1-sortowanie-przez-scalanie/img/Merge-sort-example.gif?raw=true) \
Sortowanie przez scalanie
<!--Źródło: [rozanskit.com](https://rozanskit.com/pl/teaching/jsp2019/merge_sort/) -->

![Merge sort bar](https://github.com/PiskorowskiJakub/programming-course-cpp/blob/main/2-algorytmika/2-4-algorytmy-sortowania/2-4-1-sortowanie-przez-scalanie/img/merge-sort-bar.gif?raw=true) \
Sortowanie przez scalanie - wykres słupkowy

<!-- Źródło: [programmer.group](https://programmer.group/5dcf0ae64114b.html) -->

---

## Implementacja

W funkcji `MergeSort` poprzez wywołanie rekurencyjne dzielimy tablice na dwie części. Na prawą i lewą stronę.

``` cpp
void MergeSort(int* tab, int l, int r) {
    if (r > l) {
        int m = (l + r) / 2;
        MergeSort(tab, l, m);   // Podzielenie tablicy na lewa strone
        MergeSort(tab, m + 1, r);   // Podzielenie tablicy na prawa strone
        Merge(tab, l, m, r);
    }
}
```

Należy napisać funkcję, która, po uprzednim podzieleniu tablicy na mniejsze części, wykona prostą operacje porównania oraz na nowu połączy tablice.

**Wejście:** \
`tab` - tablica z losowymi wartościami liczb całowitych \
`l` - indeks lewej strony tablicy \
`m` - indeks środka tablicy \
`r` - indeks prawej strony tablicy

**Zmienne pomocnicze:** \
`lSize` - przechowywanie rozmiaru lewej tablicy \
`rSize` - przechowywanie rozmiaru prawej tablicy \
`indexL` - przechowująca indes lewej tablicy podczas operacji łączenia tablic \
`indexR` - przechowująca indes prawej tablicy podczas operacji łączenia tablic \
**Tablice pomocnicze** \
`tabL` - przechowująca tymczasowo wartości lewej tablicy \
`tabR` - przechowująca tymczasowo wartości prawej tablicy

**Lista kroków:**\
K1: &emsp; `lSize ← m - l + 1` \
K2: &emsp; `rSize ← r - m` \
K3: &emsp; `tabL[lSize]` &emsp; Tablica pomocnicza \
K4: &emsp; `tabR[rSize]` &emsp; Tablica pomocnicza

K5 &emsp; `Dla x = 0,1,...,lSize` &emsp; Kopiowanie danych do tablic pomocniczych \
&emsp; &emsp; &emsp; &emsp; `wykonuj tabL[] ← tab[l+x]` \
K6: &emsp; `Dla y = 0,1,..., rSize` &emsp; Kopiowanie danych do tablic pomocniczych \
&emsp; &emsp; &emsp; &emsp; `wykonuj tabR[] ← tab[m+1-y]`

K7: &emsp; `indexL ← 0` \
K8: &emsp; `indexR ← 0` \
K9: &emsp; `currIndex = l`

K10: &emsp; `Dopóki indexL < lSize oraz indexR < rSize` &emsp; Łaczenie tablicy prawej (R) oraz lewej (L) \
&emsp; &emsp; &emsp; &emsp; `wykonuj kroki od K11 do K12` \
K11: &emsp; `Jeżeli tabL[indexL] <= tabR[indexR]` \
&emsp; &emsp; &emsp; &emsp; `to tab[currIndex] ← tabL[indexL++]` \
&emsp; &emsp; &emsp; &emsp; `inaczej tab[currIndex] ← tabR[indexR++]` \
K12: &emsp; `currIndex++`

K13: &emsp; `Dopóki indexL < lSize` &emsp; Jeśli w tablicy(tabL) zostały jeszcze jaieś elementy to kopiujemy je \
&emsp; &emsp; &emsp; &emsp; `to tab[currIndex++] = tabL[indexL++]` \
K14: &emsp; `Dopóki indexR < rSize` &emsp; Jeśli w tablicy(tabR) zostały jeszcze jaieś elementy to kopiujemy je \
&emsp; &emsp; &emsp; &emsp; `to tab[currIndex++] = tabR[indexR++]`

K15: &emsp; `delete[] tabL` \
K16: &emsp; `delete[] tabR`

Wynik działania programu:

```text
Wprowadz liczbe elementow do posortowania: 8

Tablica przed posortowaniem:
70 | 36 | 86 | 71 | 22 | 71 | 89 | 77 |

Rozpoczecie sortowania

Tablica po sortowaniu:
22 | 36 | 70 | 71 | 71 | 77 | 86 | 89 |
```

Kod źródłowy: [sortowanie-scalanie.cpp](sortowanie-scalanie.cpp)
