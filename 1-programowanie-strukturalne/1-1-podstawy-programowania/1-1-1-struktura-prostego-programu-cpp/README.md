# Programming-course-cpp

`Jakub Piskorowski on 29/12/2021 wersja: 1.0`

## Temat: Struktura prostego programu C++

Przedstawienie podstawowej struktury programu C++

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1`

Powrót do [Podstawy programowania](/1-programowanie-strukturalne/1-1-podstawy-programowania/README.md)

## Objaśnienie

```cpp
#include <iostream> 
```

Dołączenie standardowej biblioteki "iostream" (strumień wejscia, wyjscia) \
i - input - wejscie \
o - output - wyjscie \
stream - strumień

```cpp
using namespace std;
```

Za pomocą słów kluczowych **using namespace** informujemy kompilator, że chcemy aby wszystkie funkcje, klasy i szablony należące do przestrzeni nazw nie wymagały przedrostka. Wyraz występujący po tych dwóch słowach kluczowych jest istniejącą nazwą przestrzeni. Dla standardowych bibliotek C++ jest to **std**.

```cpp
int main(){

    return 0;
}
```

Funkcja **main** jest pierwszą funkcją uruchamianą podczas działania programu. Tak będzie zawsze, nawet wówczas, gdy utworzymy kilka innych funkcji. To jaki typ zwraca funkcja, określone jest przed nazwą funkcji. Do zwracania rezultatów funkcji służy instrukcja **return**. Nasza funkcja **main** zwracała do tej pory zawsze **wartość 0**. Jak można łatwo zauważyć, zwracana wartość, czyli 0 jest typu **int**. Zatem wszystko się zgadza, bowiem przed nazwą funkcji stoi właśnie int, co jak już wiesz, oznacza jaki typ zwraca funkcja.

Funkcja **main** w rzeczywistości zwraca kod wykonania całego programu. **Kod 0** oznacza, że program został **wykonany poprawnie**, natomiast zwrócenie innej wartości może oznaczać konkretny typ błędu.
