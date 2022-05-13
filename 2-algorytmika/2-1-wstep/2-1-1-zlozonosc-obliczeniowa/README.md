# Programming-course-cpp

`Jakub Piskorowski on 21/02/2022 wersja: 1.0`

## Temat: Podstawy złożoności obliczeniowej algorytmów

Przedstawienie pojęcia złożoności obliczeniowej algorytmów.

&#x1F4D2; Poziom 1

Powrót do [Wstęp](/2-algorytmika/2-1-wstep/README.md)

---

## Objaśnienie

## 1 Definicja algorytmu

**Algorytm** to skończony ciąg instrukcji, który na podstawie danych wejściowych generuje dane wyjściowe. Krótko mówiąc, algorytm to sposób na rozwiązanie danego problemu. Wynikiem takiego rozwiązania są dane wyjściowe.

Na przykład, jeśli chcesz rozwiązać problem, który znajdzie największą liczbę spośród 10 podanych, to danymi wejściowymi będą te liczby, natomiast danymi wyjściowymi będzie znaleziona największa liczba.

Algorytm, który rozwiązuje problem związany z liczbami, na których wykonuje działania matematyczne, nazywany jest **algorytmem numerycznym.**

Słowo algorytm pochodzi od nazwiska arabskiego uczonego (matematyka i astronoma) Al-Chorezmi żyjącego na przełomie VIII i IX wieku.

### 1-1 Przykład algorytmu

**Problem algorytmiczny**\
Wyznaczenie sumy cyfr podanej liczby.

**Dane wejściowe**\
Jedna liczba naturalna nie większa niż milion.

**Dane wyjściowe**\
Suma cyfr podanej na wejściu liczby.

### Rozwiązanie (algorytm)

```text
1. Wczytaj liczbę n.
2. Ustaw zmienną Suma na 0.
3. Dopóki liczba n jest większa od 0, wykonuj kroki 3.1 i 3.2
    3.1. Zwiększ zmienną Suma o resztę z dzielenia liczby n przez 10.
    3.2. Wykonaj dzielenie całkowite liczby n przez 10.
4. Wypisz wartość zmiennej Suma.
```

Powyższy przykład zapisany został za pomocą liczby kroków.

### Specyfikacja problemu algorytmicznego

Specyfikacja problemu składa się z opisu problemu algorytmicznego oraz definiuje szczegółowo dane wejściowe i dane wyjściowe (patrz przykład wyżej).

### 1-2 Sposoby przedstawiania algorytmu

1. Słowny. Słownie określamy rozwiązanie danego problemu,
2. Lista kroków,
3. Pseudokod,
4. Schemat blokowy,
5. Język programowania.

Źródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/matura-informatyka/algorytm)

## 2 Złożoność obliczeniowa algorytmu

### 2-1 Pojecie zlozonosci obliczeniowej

**Złożoność obliczeniowa algorytmu** określa, jak wydajny jest algorytm, ile musi on wykonać operacji w zależności ilości danych oraz ile potrzebuje do tego pamięci. Często zdarza się, że dany problem algorytmiczny można rozwiązać kilkoma metodami, czyli algorytmami o różnej złożoności obliczeniowej.

Złożoność obliczeniową dzielimy na **złożoność pamięciową** oraz **złożoność czasową.**

**Złożoność pamięciowa** algorytmu wyznaczana jest na podstawie ilości potrzebnej pamięci do rozwiązania problemu. Na przykład, jeśli dla danych wejściowych złożonych z **n** elementów nasz algorytm będzie zużywał dwa razy tyle pamięci, ile zużyłby na te **n** elementów, to mówimy, że złożoność pamięciowa wynosi **2n**, natomiast, jeżeli do rozwiązania problemu potrzebuje stałą niewielką ilość komórek pamięci, to mówimy, że taka złożoność jest stała. Oczywiście, im mniejsza złożoność, tym lepiej.

**Złożoność obliczeniowa** określa, ile głównych operacji musi wykonać algorytm, aby rozwiązać problem dla **n** elementów będących danymi wejściowymi. Elementami tymi mogą być liczby, znaki itd. Główną operacją może być porównywanie elementów i ich przestawienie (np. w algorytmach sortujących), dodawanie, mnożenie itp. Załóżmy, że dla **n** liczb nasz algorytm będzie wykonywał **2n** przestawień oraz **3n + 10** mnożeń co daje **5n + 10** operacji. Stwórzmy teraz funkcję, której argumentem będzie liczba danych wejściowych, a jej wartością liczba operacji:

**f(n)=5n+10.**

**Klasa funkcji** najprościej mówiąc, to rodzaj funkcji, jaką otrzymamy po wyznaczeniu liczby operacji wykonywanych przez analizowany algorytm w najgorszym przypadku (w pesymistycznej sytuacji).

### 2-2 Rodzaje złożoności obliczeniowych

**Złożoność stała O(1)**\
Złożoność stała algorytmu jest w sytuacji, gdy dany problem rozwiązywany jest w jednym lub kilku krokach bez względu na liczbę danych wejściowych.

**Złożoność logarytmiczna O(log n)**\
Algorytmy realizujące takie podejście są bardzo wydajne. Na przykład dla miliarda elementów danych algorytm ten potrzebuje około 30 operacji, aby rozwiązać problem. Domyślną podstawą logarytmu jest liczba 2, więc:\
log2 1000000000≈30.

**Złożoność liniowa O(n)**\
Złożoność liniowa algorytmu jest w momencie, gdy dla danych wejściowych o rozmiarze n liczba operacji w zależności od n elementów będzie wyrażona funkcją liniową:\
f(n)=an+b\
Złożoność taką najczęściej poznasz, gdy program analizujący dane będzie składał się z jednej pętli przechodzącej przez wszystkie elementy (lub prawie wszystkie) danych wejściowych tylko raz lub stalą ilość razy.

**Złożoność kwadratowa O(n^2)**\
Złożoność kwadratowa algorytmu jest w sytuacji, gdy dla danych wejściowych o rozmiarze n liczba operacji w zależności od liczby elementów będzie będzie wyrażona wzorem funkcji kwadratowej:\
f(n)=an^2+bn+c \
Złożoność taką najczęściej poznasz, gdy program analizujący dane będzie składał się z dwóch pętli zagnieżdżonych (pętla w pętli), a każda z nich będzie miała liniową złożoność.

**Złożoność wielomianowa np. O(n^k)**
Złożoność wielomianowa algorytmu jest w sytuacji, gdy funkcja określająca liczbę operacji w zależności od liczby danych wejściowych jest stopnia k. Zauważ, że jeśli przykładowo algorytm jest złożoności obliczeniowej rzędu O(n^3), to już dla 100 elementów wejściowych musi on wykonać około 100^3 = 1000 000 operacji. Dla większej dawki danych może okazać się, że czas obliczeń będzie zbyt długi.

**Podsumowanie**\
Im mniejsza złożoność algorytmu, tym jest on bardziej wydajny. Poniżej wypisane są złożoności od najwydajniejszej do najwolniejszej oraz szacowana liczba operacji, którą algorytm wykona dla 100 elementów:

1. O(1) - stała (od jednego do kilku operacji),
2. O(log n) - logarytmiczna (7 operacji),
3. O(n) - liniowa (100 operacji),
4. O(n log n) - n razy logarytm z n (700 operacji),
5. O(n2) - kwadratowa (10 000 operacji),
6. O(n3) - sześcienna (1000 000 operacji),
7. O(n!) - n silnia (1*2*3*4*...*100 operacji),
8. O(2n) - wykładnicza (2100 operacji).

Źródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/matura-informatyka/zlozonosc-algorytmu)
