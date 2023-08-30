# Programming-course-cpp

`Jakub Piskorowski on 31/03/2022 wersja: 1.0`

## Temat: Sprawdzanie anagramów

Przedstawienie działania algorytmu sprawdzającego anagramy

Kod źródłowy:
[anagram.cpp](anagram.cpp)

&#x1F4D2; Poziom 1

Powrót do [Inne algorytmy](/2-algorytmika/2-5-inne-algorytmy/README.md)

---

## Objaśnienie

**Anagram** to wyraz lub zdanie powstałe po przestawieniu liter innego wyrazu (zdania). Oba wyrazy składają się z tej samej puli znaków, tylko w innym porządku.

Kilka przykładów:

- adam
- dama
- fraktal
- kartafl

Żeby sprawdzić, czy dwa słowa są anagramami policzymy wystąpienia każdej litery z pierwszego słowa, a następnie będziemy odejmować wystąpienia liter z drugiego słowa. Jeśli liczniki zostaną wyzerowane, oznaczać to będzie, że podane słowa są anagramami.

Jeśli będzie taka sytuacja, że ciągi znaków są różnej długości, to możemy od razu stwierdzić, że to nie są anagramy.

## Przyład

Przeanalizujemy pierwszy przykład. Wystąpienia liter w słowie:

- adam

a - 2 \
d - 1 \
m - 1

Kody ASCII powyższych liter to: \
a - 97 \
d - 100 \
m - 109

a więc wartości komórek tablicy `licz[97] = 2`, `licz[100] = 1`, `licz[109] = 1` (tablica **licz[127]** jest zadeklarowana i wyzerowana w poniższym programie, służy do zliczania liter).

Teraz robimy odwrotnie w stosunku do drugiego słowa. Każde wystąpienie litery dekrementujemy (zmniejszamy o 1). Jeśli w rezultacie wszystkie komórki tablicy będą równe zero, oznaczać to będzie, że wystąpienie każdej litery w jednym i drugim wyrazie jest takie samo.

---

## Algorytm sprawdzania anagramu

**Wejście:** \
`wyraz1` - pierwszy wyraz do porównania \
`wyraz2` - drugi wyraz do porównania

**Wyjście:** \
`true / false` - wyni algorytmu, czy wyrazy są anagramami czy nie

**Zmienne pomocnicze:** \
`dl1` - długość pierwszego wyrazu \
`dl2` - długość drugiego wyrazu \
`licz[]` - liczni wystąpień danej litery

**Lista kroków:**\
K1: &emsp; `dl1 ← rozmiar(wyraz1)` &emsp; wyznaczenie liczby liter w slowie1 \
K2: &emsp; `dl2 ← rozmiar(wyraz2)` &emsp; wyznaczenie liczby liter w slowie2 \
K3: &emsp; `Jeśli dl1 != dl2` &emsp; jesli dlugosci wyrazów nie sa równe, to nie moga byc anagramami \
&emsp; &emsp; &emsp; `to zwróć fałsz` \
K4: &emsp; `licz[] ← {}` &emsp; zerujemy licznik \
K5: &emsp; `Dla i = 0, 1, ..., dl1` \
&emsp; &emsp; &emsp; `licz[wyraz1[]]++` &emsp; zliczamy litery pierwszego wyrazu \
K6: &emsp; `Dla i = 0, 1, ..., dl1` \
&emsp; &emsp; &emsp; `licz[wyraz2[]]--` &emsp; odejmowanie wystąpień liter \
K7: &emsp; `Dla i = 0, 1, ..., 127` \
&emsp; &emsp; &emsp; `wykonuj krok K8` \
K8: &emsp; `Jeśli licz[] != 0` &emsp; jeśli któryś licznik się nie wyzerował \
&emsp; &emsp; &emsp; `to zwróć fałsz` \
K9: &emsp; `zwróć prawdę` &emsp; jeśli wszystkie liczniki się wyzerowały, to jest to anagram \
K10: &emsp; `Zakończ`

Wynik:

```text
Podaj pierwszy wyraz: adam
Podaj drugi wyraz: dama
Podane wyrazy sa anagramami
```

Kod źródłowy: [anagram.cpp](anagram.cpp)

<!-- Źródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/algorytmy-maturalne/anagramy.html) -->