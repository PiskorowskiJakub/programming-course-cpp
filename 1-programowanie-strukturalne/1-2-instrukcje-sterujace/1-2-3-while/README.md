# Programming-course-cpp

`Jakub Piskorowski on 11/01/2022 wersja: 1.0`

## Temat: Pętla while

Przedstawienie działania pętli while.

Kod źródłowy: \
[p1-while.cpp](p1-while.cpp) \
[p2-while.cpp](p2-while.cpp) \
[p3-while.cpp](p3-while.cpp)

&#x1F4D2; Poziom 1

Powrót do [Instrukcje sterujace](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/README.md)

---

## Objaśnienie

### Składnia

Jak zwykle dobrym punktem wyjściowym jest zapoznanie się ze składnią nowo poznawanych rzeczy, czyli w tym wypadku ze składnią pętli `while`. Oto ona:

```cpp
while( /* warunek kończący pętlę */ )
{
    //powtarzany blok instrukcji
}
```

lub tradycyjnie:

```cpp
while( /* warunek kończący pętlę */ )
     jedna_instrukcja(); //jedna powtarzana instrukcja
```

Dopóki warunek jest spełniony (czyli wartość logiczna wynosi `true`) dopóty pętla będzie **powtarzała instrukcję** (lub blok instrukcji) występujący bezpośrednio po słowie kluczowym `while`.

Blok instrukcji umieszczony w pętli `while` może się więc nie wykonać ani razu jeżeli wartość logiczna warunku przy pierwszym wejściu w pętlę będzie **fałszywa**. Jest to kluczowa, a zarazem jedyna różnica pętli `while` od pętli `do ... while`.

### Przykład

Tradycyjnie po krótkim wprowadzeniu teoretycznym, czas na przykład jego analizę. Oto przykład zastosowania pętli while:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int iStart;

    iStart = 10;
    while( iStart >= 0 )
    {
        cout << iStart << ", ";
        --iStart;
    } //while
    cout << "Booom! :)" << endl;

    return 0;
}
```

Kod źródłowy: [p1-while.cpp](p1-while.cpp) \
Wynik działania powyższego programu:

```text
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, Booom! :)
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int iStart;

    iStart = -100;
    while( iStart >= 0 )
    {
        cout << iStart << ", ";
        --iStart;
    } //while
    cout << "Booom! :)" << endl;

    return 0;
}
```

Kod źródłowy: [p2-while.cpp](p2-while.cpp) \
Wynik działania powyższego programu:

```text
Booom! :)
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int iStart;

    iStart = 5;
    while( iStart >= 0 )
    {
        cout << iStart << ", ";
        --iStart;
    } //while
    cout << "Booom! :)" << endl;

    return 0;
}
```

Kod źródłowy: [p3-while.cpp](p3-while.cpp) \
Wynik działania powyższego programu:

```text
5, 4, 3, 2, 1, 0, Booom! :)
```

Program pokazuje jak działa pętla while. Zgodnie z tym co zostało wcześniej napisane, pętla wykonywała się dopóki warunek `iStart >= 0` był spełniony.

Źródło: [cpp0x.pl](https://cpp0x.pl/kursy/Kurs-C++/Poziom-3/Petla-while/354)