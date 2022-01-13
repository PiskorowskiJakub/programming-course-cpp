# Programming-course-cpp

`Jakub Piskorowski on 11/01/2022 wersja: 1.0`

## Temat: Pętla do while

Przedstawienie działania pętli do while.

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1`

Lista zadań: [124-zadania](124-zadania/README.md) \
&emsp;[Zadanie 1](124-zadania/README.md#zadanie-1) \
&emsp;[Zadanie 2](124-zadania/#zadanie-2) \
&emsp;[Zadanie 3](124-zadania/#zadanie-3)

Powrót do [Instrukcje sterujace](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/README.md)

---

## Objaśnienie

od, który ma być powtarzany umieszczamy wewnątrz bloku instrukcji, który jest poprzedzony słowem kluczowym do oraz zakończony słowem kluczowym while. Liczba powtórzeń instrukcji umieszczonych w bloku pętli do ... while jest zależna od warunku kończącego pętlę. Pętla do ... while zakończy się gdy warunek umieszczony w nawiasach zaokrąglonych zwróci wartość false. Istotną cechą pętli do ... while jest fakt, że kod zawarty między słowami kluczowymi do ... while zawsze wykona się conajmniej jeden raz.

```cpp
do {
  // blok kodu do wykonania
}
while (warunek);
```

---

## Przykłady

### Przykład 1

```cpp
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }while (i < 5);

    return 0;
}
```

Kod źródłowy: [p1-dowhile.cpp](p1-dowhile.cpp)

### Przykład 2

```cpp
#include <iostream>
using namespace std;
int main()
{
    int ile = 4;
    do
    {
        cout << "Napis" << endl;
        ile--;
    } while( ile > 0 );
   
    return 0;
}
```

Kod źródłowy: [p2-dowhile.cpp](p2-dowhile.cpp)

