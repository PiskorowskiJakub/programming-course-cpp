# Programming-course-cpp

`Jakub Piskorowski on 19/10/2023 wersja: 1.0`

## Temat: Rekurencja

Przedstawienie działania rekurencji.

Kod źródłowy: \
[rekurencja.cpp](rekurencja.cpp)

&#x1F4D5; Poziom 3

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Objaśnienie

**Rekurencja** zwana rekursją, **polega na wywołaniu przez funkcję samej siebie.** Algorytmy rekurencyjne zastępują w pewnym sensie iteracje. Niekiedy problemy rozwiązywane tą techniką będą nieznacznie wolniejsze (wiąże się to z wywoływaniem funkcji), natomiast rozwiązanie niektórych problemów jest dużo prostrze w implementacji.

#### Przykład 1

Prześledźmy program wyznaczający sumę **n** kolejnych liczb naturalnych.

``` cpp
#include <iostream>
using namespace std;

long long suma(int n);

int main()
{
    int n;
	
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Suma " << n << " kolejnych liczb naturalnych wynosi " << suma(n) << endl;

	return 0;
}

long long suma(int n){
	if(n<1) 
		return 0;
	
	return n+suma(n-1);
}
```
Plik źródłowy: [rekurencja.cpp](rekurencja.cpp)

Załóżmy, że na wejściu podaliśmy liczbę 5 (program ma wyznaczyć sumę 1+ 2+ 3 + 4 + 5).
``` text
wynik = suma(5);
```
Funkcja `suma(n)`, wywołała się z argumentem równym `5`. Najpierw sprawdzamy, czy `n<1` (5 < 1). Warunek jest fałszywy, przechodzimy więc do następnej linijki return `5 + suma(5 - 1)` . Funkcja suma wywołana została przez samą siebie z argumentem równym `4`, a więc mamy:

``` text
wynik = suma(5) = 5 + suma(4),
```

daną czynność powtarzamy do momentu, gdy argument osiągnie wartość `0`, wtedy funkcja zwróci 0 (0 < 1, prawda).

``` text
wynik = suma(5) = 5 + suma(4) = 5 + 4 + suma(3) = 5 + 4 + 3 + suma(2) = 5 + 4 + 3 + 2 + suma(1) = 5 + 4 + 3 + 2 + 1 + suma(0) = 5 + 4 + 3 + 2 + 1 + 0 = 15. 
```

Źródło: [algorytm.edu.pl](https://www.algorytm.edu.pl/rekurencja.html)


## Zadania:

### Zadanie 1

Napisz program, który wyznaczy silnię z liczby n sposobem rekurencyjnym. \
Silnia:  \
4! = 1 \* 2 \* 3 \* 4 = 24 \
6! = 1 \* 2 \* 3 \* 4 \* 5 \* 6 = 720

Wynik działania programu:
``` text
Podaj liczbe: 6
6! = 720
```
Kod źródłowy: [zad1-silnia-rekurencja.cpp](zad1-silnia-rekurencja.cpp)
