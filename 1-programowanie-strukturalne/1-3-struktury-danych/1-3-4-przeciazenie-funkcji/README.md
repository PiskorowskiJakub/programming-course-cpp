# Programming-course-cpp

`Jakub Piskorowski on 11/01/2022 wersja: 1.0`

## Temat: Przeciążenie funkcji

Przedstawienie czym jest przeciążona funcja i jak jej używać.

Kod źródłowy: \
Przykład 1: [p1-przeciazenie.cpp](p1-przeciazenie.cpp) \
Przykład 2: [p2-przeciazenie.cpp](p2-przeciazenie.cpp)

&#x1F4D7; Poziom 2 

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Objaśnienie

Przeciążanie nazw funkcji polega na wielokrotnym wykorzystaniu takiej samej jej nazwy, różniącej się tylko typem i ilością argumentów.

### Przykład 1

Przypuśćmy, że posiadamy funkcję suma(), która przyjmuje dwa argumenty a i b, które są liczbami całkowitymi. Wynikiem działania tego typu funkcji jest również liczba całkowita:

```cpp
int suma(int a, int b){
  return a + b;
}
```

Wywołanie funkcji w sposób suma(2, 3) zwróci poprawny wynik 5. Jednak już dla wywołania suma(1.5, 3.5) wyjdzie nie 5, a 4. Można się o tym przekonać dopisując do funkcji suma() poniższy kod:

```cpp
int main() {
  int a = 3, b = 2;
  cout << suma(a, b) << endl;
  double c = 1.5, d = 3.5;
  cout << suma(c, d) << endl;
  system("pause");
  return 0;
}
```

Dzieje się tak, ponieważ funkcja jest przygotowana tylko na liczby całkowite. Wszystkie liczby rzeczywiste w trakcie wywołania funkcji suma() są rzutowane na liczby całkowite co skutkuje utratą części ułamkowej jak nawet zmianą wartości części całkowitej. Rozwiązaniem tego problemu mogłoby być zmianę typu int parametrów oraz typu zwracanej wartości w deklaracji funkcji suma(). Jednak takie rozwiązanie oznacza, że nawet dodają dwie liczby całkowite zwrócona zostanie liczba rzeczywista.

Zdecydowanie lepszym pomysłem jest dopisanie przeciążenia funkcji. Innymi słowy funkcja będzie miała swój alias pod tą samą nazwą, ale będzie przyjmować inny typ danych. Przed funkcją suma() należy dopisać poniższy kod:

```cpp
double suma(double a, double b){
  return a + b;
}
```

Teraz ponownie testując program można zauważyć, że za każdym razem program zwraca prawidłową wartość.

Kod źródłowy: [p1-przeciazenie.cpp](p1-przeciazenie.cpp)

Źródło: [mattomatti.com](https://mattomatti.com/pl/cp11)

### Przykład 2

Rozpatrzmy funkcję, która będzie liczyła pole pewnej figury. Pole to uzależnimy od ilości argumentów i ich typów. Funkcja będzie nosiła nazwę Pole.

- **float Pole(float p)** - funkcja liczy pole kwadratu
- **double Pole(double p)** - funkcja liczy pole koła
- **float Pole(float a,float b)** - funkcja liczy pole prostokąta

```cpp
#include <iostream>
using namespace std;

float Pole(float a){
    return a*a;
}
double Pole(double r){
    return 3.14*r*r;
}
float Pole(float a,float b){
    return a*b;
}

int main()
{
    float a,b;
    double r;
    char opcja;

    cout<<"Wybierz opcje: "<<endl;
    cout<<"1 - pole kwadratu "<<endl;
    cout<<"2 - pole prostokata "<<endl;
    cout<<"3 - pole kola "<<endl;

    cin>>opcja;

    switch(opcja)
    {
    case '1':
        cout<<"Podaj dlugosc boku: "; cin>>a;
        cout<<"Pole kwadratu wynosi "<<Pole(a)<<endl;
        break;
    case '2':
        cout<<"Podaj dlugosc boku a: "; cin>>a;
        cout<<"Podaj dlugosc boku b: "; cin>>b;
        cout<<"Pole prostokata wynosi "<<Pole(a,b)<<endl;
        break;
    case '3':
        cout<<"Podaj dlugosc promienia: "; cin>>r;
        cout<<"Pole kola wynosi "<<Pole(r)<<endl;
        break;
    default: cout<<"Wybrales nieprawidlowa opcje!"<<endl;
    }

    return 0;
}
```

Kod źródłowy: [p2-przeciazenie.cpp](p2-przeciazenie.cpp)

### :exclamation: Kiedy nie wolno przeciążać nazw funkcji?

Do przeciążenia nazwy funkcji nie wystarczy  różny tym zwracanych wartości np.:

```cpp
int funkcja(int a)
char funkcja(int a)
```

W przykładzie powyżej, funkcje mają różne zwracane wartości, natomiast takie same argumenty - kompilator wyrzuci błąd!

Źródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/funkcje-w-c/przecianie-nazw-funkcji.html)


---

### Zadanie 1 - Przeciążanie funkcji sumującej

Napisz program, który zawiera dwie wersje funkcji `Suma`, przeciążając je dla różnych typów danych. Jedna funkcja powinna sumować dwie liczby całkowite, a druga dwie liczby zmiennoprzecinkowe.

- Zdefiniuj dwie wersje funkcji suma dla liczb całkowitych i zmiennoprzecinkowych.
W funkcji głównej programu poproś użytkownika o podanie dwóch liczb całkowitych i dwóch liczb zmiennoprzecinkowych.
- Wywołaj obie wersje funkcji suma i wyświetl wyniki na ekranie.

Wynik działania programu:
``` text
Podaj dwie liczby całkowite: 3 5
Podaj dwie liczby zmiennoprzecinkowe: 2.5 4.5

Suma liczb całkowitych: 8
Suma liczb zmiennoprzecinkowych: 7
```