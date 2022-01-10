# Programming-course-cpp

`Jakub Piskorowski on 04/01/2022 wersja: 1.0`

## Temat: Pętla for

Przedstawienie działania pętli for.

Kod źródłowy: [petla-for.cpp](petla-for.cpp)

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1` 

Lista zadań: [122-zadania](122-zadania/README.md) \
&emsp;Zadanie 1 - zad \
&emsp;Zadanie 2 - \
&emsp;Zadanie 3 - \
&emsp;Zadanie 4 - 

Powrót do [Instrukcje sterujace](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/README.md)

---

## Objaśnienie

Pętla **for** podobnie jak wszystkie pozostałe pętle umożliwia nam powtórzenie określonych operacji tak długo jak warunek końcowy jest spełniony. Schematycznie pętlę **for** można zapisać:

```text
for (stanPoczatkowy; warunekKoncowy; krok)
  lista_instrukcji;
```

Oto prosty program przedstawiający wykorzystanie pętli for:

```cpp
#include <iostream>
using namespace std;

int main()
{
    for (int licznik=1; licznik < 5; licznik++){
        cout <<"Wykonuje petle po raz "<< licznik <<endl;
    }
}   
```

Wynik działania programu:

```text
Wykonuje petle po raz 1
Wykonuje petle po raz 2
Wykonuje petle po raz 3
Wykonuje petle po raz 4
```

 **Lista instrukcji** (czyli w tym przypadku wypisanie tekstu na ekran) wykonuje się tak długo jak **warunek** (czyli stan końcowy) jest **prawdziwy**. Kiedy warunek staje się **fałszywy**, wówczas pętla **zostaje zakończona**. Przy każdym wykonaniu pętli zmienna `licznik` (jest to tak zwana zmienna sterująca pętlą) zostaje zmieniona tak jak to zostało zapisane w liście zmiana - czyli w naszym przypadku zwiększona o 1.

 W języku C++ możemy zrezygnować z dowolnej części pętli **for**, a nawet z ich wszystkich. W poniższym programie została pominieta każda z części - pętla wykonuje się w **nieskończoność**. Użytkownik musi nacisnąć kombinację klawiszy ctrl + C aby przerwać działanie programu:

 ```cpp
 #include <iostream>
using namespace std;

int main()
{
    for (;;){
        cout <<"Petla nieskonczona"<<endl;
        cout <<"Nacisnij ctrl + c lub ctrl + pause"<<endl;
    } 
}

```

### Pętla zagnieżdżona

Jeśli stosujemy pętle **zagnieżdżone**, w każdej pętli zmienna sterująca powinna być inna. W przeciwnym przypadku uzyskamy wyniki, które mogą być nieoczekiwane.

Przykładowe zagnieżdżone pętle `for` znajdują się w poniższym programie - od razu zauważ, że w pierwszej pętli zmienna sterująca to `i`, natomiast w drugiej pętli zmienną sterującą jest zmienna `j`.

```cpp
#include <iostream>
using namespace std;

int main(){

    for(int i=0; i < 3; i++){
        for(int j=0; j < 5; j++){
            cout << " i: " << i;
            cout << " j: " << j;
            cout << " | ";
        }
        cout << endl;
    }
}
```

Pierwsza pętla przebiega po wartościach **0,1,2** druga natomiast po **0,1,2,3,4,5**.

Wynik działania programu:

```text
 i: 0 j: 0 |  i: 0 j: 1 |  i: 0 j: 2 |  i: 0 j: 3 |  i: 0 j: 4 |
 i: 1 j: 0 |  i: 1 j: 1 |  i: 1 j: 2 |  i: 1 j: 3 |  i: 1 j: 4 |
 i: 2 j: 0 |  i: 2 j: 1 |  i: 2 j: 2 |  i: 2 j: 3 |  i: 2 j: 4 |
 ```

 W pierwszym wierszu zmienna `i` cały czas posiada wartość **0**. Zmienna `j` natomiast zwiększa się za każdym, razem **od 0 do 4**. \
 Przechodząc do kolejnego wiersza zmienna `i` została zwiększona o **1**, natomiast zmienna `j` kolejny raz przechodzi po wartościach **od 0 do 4**.

 Można zatem zauważyć iż zmienna ``i`` określa nam ile ma być wierszy a zmienna `j` określa ilość kolumn.

 Można to zauważyć na poniższym przykładzie:

 ```cpp
#include <iostream>
using namespace std;

int main(){

    for(int i=0; i < 3; i++){
        for(int j=0; j < 5; j++){
            cout << "*";
        }
        cout << endl;
    }
}
```

Wynik działania programu:

```tekst
*****
*****
*****
```

Powyżej przedstawiony program narysował nam prostokąt składający się z znaku `*`. Posiada on **3 wiersze** oraz **5 kolumn**.
