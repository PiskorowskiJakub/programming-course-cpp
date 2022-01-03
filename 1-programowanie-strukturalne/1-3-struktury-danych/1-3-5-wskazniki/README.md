# Programming-course-cpp

`Jakub Piskorowski on 31/12/2021 wersja: 1.0`

## Temat: Wskaźniki

Przedstawienie czym są wskaźniki oraz jak ich używać.

Kod źródłowy: 
[wskazniki.cpp](wskazniki.cpp) \
[wskazniki-funkcje.cpp](wskazniki-funkcje.cpp)

![#fd646e](https://via.placeholder.com/15/fd646e/000000?text=+) `Poziom 3`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Objaśnienie

**Wskaźnik** (ang. pointer) - typ zmiennej odpowiedzialnej za przechowywanie adresu do innej zmiennej (innego miejsca w pamięci) w obrębie naszej aplikacji.

**Wskaźnik** może wskazywać na jakąś zmienną, strukturę, tablicę a nawet funkcję. Jest niczym innym jak zmienną, która nie przechowuje wartości, tylko wskazuje na inną zmienną istniejącą w aplikacji. Oto podstawowe operatory niezbędne do operowania wskaźnikami:

- \* - operator wyłuskania wartości zmiennej, na którą wskazuje wskaźnik (wyciąga wartość ze wskaźnika)
- & - operator pobrania adresu określonej zmiennej

W języku C++ możemy do funkcji **przekazać dowolną ilość parametrów**. Modyfikując parametry w obrębie ciała funkcji **oryginalne zmienne nie zmienią się**. Przekazując zmienne do funkcji poprzez wartość (czyli w sposób standardowy), tworzymy wewnątrz funkcji ich kopię! Co z tego faktu wynika? Każda funkcja w C++ może zmodyfikować maksymalnie jedną zmienną, za pomocą wartości zwracanej return.W języku C++ możemy do funkcji przekazać dowolną ilość parametrów. Modyfikując parametry w obrębie ciała funkcji oryginalne zmienne nie zmienią się. Przekazując zmienne do funkcji poprzez wartość (czyli w sposób standardowy), tworzymy wewnątrz funkcji ich kopię! Co z tego faktu wynika? **Każda funkcja w C++ może zmodyfikować maksymalnie jedną zmienną**, za pomocą wartości zwracanej **return**.

Na poniższym obrazku przedstawiono przekazywanie parametrów do funkcji poprzez wartość. Jesteśmy w stanie zmodyfikować wartość zmiennej a, ale nie jesteśmy w stanie zmienić innych zmiennych.

![Przedstawienie funkcji](img/wskazniki1.png)

Co zrobić, aby jedną funkcją zmodyfikować 3 zmienne na raz? Nie można użyć rozkazu return 3 razy, ponieważ każda funkcja zwraca tylko jedną wartość. **W tej sytuacji trzeba skorzystać ze wskaźników**. Jeżeli przekażemy do funkcji jako jej argument **wskaźnik**, wtedy operacje na wskaźniku zmieniają zmienną oryginalną z poza ciała funkcji – nie operujemy na kopii zmiennej. Dzięki temu, nawet jeżeli funkcja jest typu void i nic nie zwraca, możemy **modyfikować wiele zmiennych** z poza ciała funkcji:

![Przedstawienie wskaznikow](img/wskazniki2.png)

### Jak używać wskaźników

**Zmienna wskaźnikowa** (czyli wskaźnik) poprzedzona jest gwiazdką (\**) i **przechowuje adres pamięci** (a nie wartość) zmiennej , na którą wskazuje.

Deklarując **wskaźnik** postępujemy tak jak ze zwykłymi zmiennymi, jednak nazwę wskaźnika poprzedzamy gwiazdką. **Uwaga! Gwiazdka przed nazwą wskaźnika nie ma związku z operatorem wyłuskania!**

```cpp
int telefon;    //zmienna liczbowa
int *wsk;       //zmienna wskaźnikowa typu liczbowego
```

Tak wygląda tworzenie wskaźnika. Utworzone przez nas zmienne są puste. Zmienna `telefon` nie zawiera żadnej wartości a wskaźnik `wsk` nie wskazuje żadnej wartości.

:exclamation: Bardzo ważne jest aby nie korzystać ze wskaźnika który nie wskazuje na żadną zmienną! Prowadzi to zawsze do błędów i niesie ze sobą nieprzewidziane konsekwencje w działaniu programu :exclamation:

Rozbudujmy powyższy przykład:

```cpp
int telefon = 12345;    //zmienna liczbowa
int *wsk = &telefon;    //wskaźnik wsk zawiera adres zmiennej telefon
```

Za pomocą operatora pobrania adresu (`&`) pobraliśmy adres zmiennej `telefon`. Adres zmiennej został przypisany wskaźnikowi `wsk`. Pamiętaj że gwiazdka przed nazwą wskaźnika to nie operator wyłuskania! Chcąc wyświetlić wartość wskaźnika posłużymy się operatorem wyłuskania czyli gwiazdką (`*`).

```cpp
int telefon = 12345;    //zmienna liczbowa
int *wsk = &telefon;    //wskaźnik wsk zawiera adres zmiennej telefon
    
cout << *wsk << endl;
```

Powyższy przykład wyświetli na ekranie wartość zmiennej `telefon`. Przed wyświetleniem wskaźnika został użyty operator wyłuskania. **Pobiera on wartość zmiennej spod adresu ze zmiennej wskaźnikowej.** Bez użycia operatora wyłuskania, została by wyświetlona wartość **zmiennej wskaźnikowej** `wsk` czyli adres zmiennej telefon:

```cpp
int telefon = 12345;         //zmienna liczbowa
int *wsk = &telefon;         //przypisanie wskaźnikowi adresu zmiennej telefon

cout << *wsk << endl;        //wyświetlenie wyłuskanej wartości wskaźnika (12345)
cout << wsk << endl;         //wyświetlenie adresu zmiennej telefon
cout << &wsk << endl;        //wyświetlenie adresu wskaźnika
cout << &telefon << endl;    //wyświetlenie adresu zmiennej telefon
```

Używając `sizeof()` na **wskaźniku** nie mozna zapomnieć o operatorze wyłuskania. W przeciwnym wypadku wynikiem zawsze będzie ta sama wartość, ponieważ każda **zmienna wskaźnikowa** ma ten sam rozmiar w pamięci.

Wartość wskaźnika (zmiennej na którą wskazuje) możemy modyfikować bez uzycia nazwy zmiennej:

```cpp
int telefon = 12345;    //zmienna liczbowa
int *wsk = &telefon;    //wskaźnik wsk zawiera adres zmiennej telefon

*wsk = 666;

cout << *wsk << endl;
```

### Pusty wskaźnik

Przed zapisaniem wartości do wskaźnika, czyli zapisaniu wartości do zmiennej na którą wskazuje wskaźnik, należy się upewnić, że wskaźnik nie jest pusty.

:exclamation: **Totalnie błędna** byłaby sytuacja, kiedy chcemy nadać zmiennej wskaźnikowej określoną wartość, bez wcześniejszego przypisania wskaźnika do zmiennej. :exclamation:

```cpp
int *wsk;
*wsk = 666; //źle!!
```

---

### Wskaźniki i funkcje

W języku C++ przekazujemy argumenty do funkcji poprzez tzw. **przekazywanie przez wartość.** W języku C oraz C++ możemy przekazywać wartości do funkcji poprzez **przekazywanie przez wskaźnik.** Wskaźnik będzie wtedy argumentem funkcji.

Plik: [wskazniki-funkcje.cpp](wsazniki-funkcje.cpp)

```cpp
#include <iostream>

using namespace std;

// funkcja przyjmuje jako argument wskaźnik
void zwieksz_liczbe (int *liczba)
{
    *liczba+= 5;
}

int main()
{
    int numerek = 5;
    int *wsk = &numerek;
    
    zwieksz_liczbe(wsk); //przekazujemy wskaźnik (bez operatorów)
    
    cout << numerek << endl;
    
    zwieksz_liczbe(&numerek); //przekazujemy bezpośrednio adres zmiennej (operator &)
    
    cout << numerek << endl;
    
    return 0;
}
```

Należy zwrócić uwagę, że do funkcji której argumentem jest wskaźnik, przekazujemy adres zmiennej za pomocą operatora pobrania adresu (`&`) a nie samą wartość.

Źródło: [p-programowanie.pl](https://www.p-programowanie.pl/cpp/wskazniki)