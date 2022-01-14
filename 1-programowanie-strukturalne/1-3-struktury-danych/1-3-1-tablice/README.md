# Programming-course-cpp

`Jakub Piskorowski on 11/01/2022 wersja: 1.0`

## Temat: Zmienne tablicowe

Przedstawienie czym są tablice oraz jak ich używać.

Kod źródłowy: [tablice.cpp](tablice.cpp)

![#80b900](https://via.placeholder.com/15/80b900/000000?text=+) `Poziom 2`

Lista zadań: [131-zadania](131-zadania/README.md) \
&emsp;Zadanie 1 

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Objaśnienie

## Jednowymiarowe tablice

Tworzenie jednowymiarowych tablic zmiennych jest bardzo proste - wystarczy, że za deklaracją zwykłej zmiennej podamy liczbę elementów. W ogólnym przypadku wygląda to tak:

```text
typ_zmiennej nazwa_zmiennej[ liczba_elementow ];
```

:exclamation: Tworząc tablicę za pomocą powyższego zapisu należy pamiętać, że liczba_elementow musi być wartością stałą, która będzie znana w chwili kompilacji programu. Oznacza to, że użytkownik nie może określać rozmiaru tablicy w trakcie działania aplikacji.

Przykład zadeklarowania tablicy ``liczba`` z liczbą elementów ``200``.

```cpp
int liczba[ 200 ];
```

#### Jak korzystać z zmiennych tablicowych

Gdy mieliśmy zmienną zwykłą, np. ``int liczba;`` to dostęp do niej uzyskiwaliśmy zapisem: ``liczba``. Teraz gdy posiadamy tablicę, np. ``int liczby[ 100 ];`` to dostęp do poszczególnych elementów uzyskujemy poprzez zapis ``liczby[ numer_indeksu ]``, gdzie **numer_indeksu** to liczba z przedziału od 0 do 99.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int liczby[ 3 ];
    cout << "Podaj liczbe 1:";
    cin >> liczby[ 0 ];
    cout << "Podaj liczbe 2:";
    cin >> liczby[ 1 ];
    liczby[ 2 ] = 567;
    cout << "liczby[2] wynosi " << liczby[ 2 ] << endl;
    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
    cout << "Suma trzech liczb wynosi:" << suma << endl;
   
    return 0;
}
```

Powyższy program demonstruje:

- jak wczytać wartość do wybranego elementu tablicy; ``cin >> liczby[ 0 ];``
- jak przypisać wartość wybranemu elementowi tablicy; ``liczby[ 2 ] = 567;``
- jak wypisać wartość wybranego elementu tablicy; ``cout << "liczby[2] wynosi " << liczby[ 2 ] << endl;``
- jak wykonywać operacje na elementach tablicy. ``int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];``

Jeżeli przeanalizowałeś kod uważnie to zapewne zauważyłeś, że korzystanie ze zmiennych tablicowych praktycznie niczym się nie różni od zwykłych zmiennych poza tym, że należy podać w nawiasach kwadratowych indeks elementu z którym chcemy pracować.

#### Tablice zmiennych i pętle

Zastosowanie tablic zmiennych daje nam nie tylko korzyść w postaci krótszego kodu, który tworzy określoną liczbę zmiennych ale również daje nam możliwość wielokrotnego przetwarzania danych dla różnych zmiennych tym samym kodem. Co to oznacza? Oznacza to, że jeżeli staniesz teraz przed sytuacją, w której będziesz chciał wczytać załóżmy 10 liczb do tablicy zmiennych to nie będziesz musiał tego robić tak:

```cpp
int liczba[ 10 ];
cin >> liczba[ 0 ];
cin >> liczba[ 1 ];
cin >> liczba[ 2 ];
cin >> liczba[ 3 ];
cin >> liczba[ 4 ];
cin >> liczba[ 5 ];
cin >> liczba[ 6 ];
cin >> liczba[ 7 ];
cin >> liczba[ 8 ];
cin >> liczba[ 9 ];
```

Skoro indeksem jest liczba to równie dobrze może być to zmienna liczbowa, a skoro tak to nic nie stoi na przeszkodzie by wczytywanie liczb zrobić np. tak:

```cpp
int liczba[ 10 ];
for(int i=0; i <10; i++)
{
    cin >> liczba[ i ];
}
```

Kompletny program demonstrujący połączenie tablic i pętli może więc wyglądać tak:

```cpp
int liczba[ 10 ];
for(int i=0; i <10; i++)
{
    cin >> liczba[ i ];
}

cout << "Podales nastepujace liczby: ";
for(int i=0; i <10; i++)
{
    cout << liczba[ i ] << ", ";
}
```

:exclamation: Najczęstszym błędem, jaki jest popełniany przez początkujących programistów jest wychodzenie poza zakres tablicy.

Źródło: [cpp0x.pl](https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Tablice-jednowymiarowe/292)

---

## Dwuwymiarowe tablice

Jako tablicę dwuwymiarową możemy sobie wyobrazić planszę prostokątną składającą się z pewnej liczby wierszy i kolumn (indeksowanie rozpoczynamy od zera). Aby przypisać lub pobrać wartość do danej komórki, należy podać jej obie współrzędne.

Inicjacja tablicy polega na podaniu ilości wierszy i kolumn:

```text
typ_elementów_tablicy nazwa_tablicy [ ilość wierszy ][ ilość kolumn ];
```

np.

```cpp
//stworzenie dwuwymiarowej tablicy liczb całkowitych, w sumie 100 komórek: 10x10.
int tab [ 10 ][ 10 ];
```

### Nadanie wartości początkowych tablicy

Wartości początkowe tablicy możemy nadać przy jej deklaracji. Popatrzmy na przykład oparty na tablicy dwuwymiarowej liczb całkowitych:

```cpp
//zauważmy, że mamy trzy wiersze, i dwie kolumny
int tab[3][2] = {{1,3},{4,5},{0,-1}};
```

### Odwoływanie się do komórek w tablicy dwuwymiarowej

Aby odwołać się do każdej z komórek należy w nawiasach kwadratowych podać numer wiersza i kolumny komórki, do której się odwołujemy, pamiętając o tym, że numerujemy je od zera:

```cpp
int tab[3][2] = {{1,3},{4,5},{0,-1}}; //deklaracja i inicjacja tablicy dwuwymiarowej
cout<<tab[2][1]; //wyświetlenie wartości komórki znajdującej się w trzecim wierszu i w drugiej kolumnie (-1)
tab[0][0] = -100; //przypisanie do pierwszej komórki wartości -100
```

### Wypelnienie tablicy dwuwymiarowej

Aby wypełnić tablicę, która posiada 3 wiersze i 4 kolumny. najlepiej wyorzystać do tego pętlę ``for`` w pętli ``for`` (podwójny for).

```cpp
int tab[3][4]; // stworzenie tablicy dwu wymiarowej z 3 wierszami oraz 4 kolumnami
 for (int i=0;i<3;i++){
    for (int j=0;j<4;j++){
        cin >> tab[i][j] ; // pobranie od uzytkownika wartosci i przypisanie do tablicy "worek" w danej kolumnie oraz wierszu 
    }
}
```

Jeśli chcemy wyzerować tablicę (ustawić wszystkie jej komórki na wartość ``0``, możemy to zrobić przy jej definiowaniu:

```cpp
int tab[5][5] = {};
```

Taka konstrukcja zadziała tylko przy tworzeniu tablicy. Jeśli chcemy ponownie ją wyzerować musimy posłużyć się pętlami (w przypadku dwuwymiarowej tablicy będą dwie zagnieżdżone pętle):

```cpp
int tab[100][23];

    for(int i=0;i<100;i++)
        for(int j=0;j<23;j++)
            tab[i][j]=0;
```

### Tablice wielowymiarowe

Tablice o większej liczbie wymiarów rzadko się stosuje. Sposób inicjacji, oraz operowania na tablicach tego typu jest analogiczny jak w przypadku tablic dwuwymiarowych.

```cpp
#include<iostream>
using namespace std;

int main()
{
    //deklaracja tablicy trójwymiarowej
    //taka tablica posiada 3*4*5 = 60 komórek
    int tab[3][4][5]; 
    //przypisanie wartości 23 do pierwszej komórki
    tab[0][0][0] = 23; 

    cout<<tab[0][0][0]<<endl;

    return 0;
}
```

Odwołując się do komórek tablicy trójwymiarowej, możemy sobie wyobrazić, że odwołujemy się to jednostkowych sześcianów, z których zbudowany jest prostopadłościan. Aby "dostać się" do danego sześcianu, musimy określić jego współrzędne: długość, szerokość oraz wysokość.

Żródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/tablice-w-c/tablice-wielowymiarowe.html)