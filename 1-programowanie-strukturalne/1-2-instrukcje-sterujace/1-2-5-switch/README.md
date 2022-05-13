# Programming-course-cpp

`Jakub Piskorowski on 11/01/2022 wersja: 1.0`

## Temat: Instrukcja switch

Przedstawienie działania Instrukkcji switch

Kod źródłowy: [ins-switch.cpp](ins-switch.cpp)

&#x1F4D2; Poziom 1 

Lista zadań: [125-zadania](125-zadania/README.md) \
&emsp;Zadanie 1 - [Prosty kalkulator](125-zadania/README.md#zadanie-1---prosty-kalkulator)

Powrót do [Instrukcje sterujace](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/README.md)

---

## Objaśnienie

### Różnice pomiędzy instrukcjami wyboru

Za pomocą instrukcji warunkowej `if` możemy określić dokładnie co ma się wydarzyć w zależności od stanu jednej lub kilku zmiennych. Instrukcja `if` daje nam pełną kontrolę nad przebiegiem programu. W języku C++ jest jednak dostępna również instrukcja wielokrotnego wyboru `switch`. W przypadku niej możemy wykonywać decyzje tylko i wyłącznie **na podstawie wartości jednej zmiennej.** Możliwości instrukcji `switch` są nieporównywalnie mniejsze, jednak używanie jej w niektórych przypadkach **jest znacznie korzystniejsze dla szybkości działania programu** i estetyki kodu niż użycie instrukcji `if`. Stąd też warto przyjżeć się bliżej niniejszej instrukcji.

### Składnia switch ... case

Zanim przejdziemy do omawiania poszczególnych słów kluczowych oraz tego jak działa warunek wielokrotnego wyboru (zwany również przełącznikiem), zapoznajmy się ze składnią tejże instrukcji:

```cpp
switch( zmienna )
{
case wartosc_1:
    //jakiś kod
    break;
   
case wartosc_2:
    //jakiś kod
    break;
   
    //...
case wartosc_n:
    //jakiś kod
    break;
   
default:
    //jakiś kod
    break;
}
```

### Słowo kluczowe switch

Jak już pisałem na samym początku niniejszego rozdziału instrukcja `switch(...)` służy do podejmowania decyzji wyłącznie **na podstawie wartości jednej zmiennej.** Zmienna ta musi być **typem podstawowym i jednocześnie typem całkowitym.** Oznacza to w konsekwencji, że wybór będziemy mogli dokonywać tylko i wyłącznie na podstawie wartości **liczby całkowitej** czy też **kodu znaku ASCII** (który również jest liczbą). Zmienną, na której chcemy pracować podajemy w nawiasach zaokrąglonych, które muszą znaleźć się zaraz po wystąpieniu słowa kluczowego `switch`. Poniżej zamieszczam krótki przykład:

```cpp
#include <iostream>
int main()
{
    char zmienna;
    switch( zmienna )
    {
        //...
    }
    return 0;
}
```

### Błędy kompilacji

```text
error: switch quantity not an integer
```

Błąd ten otrzymamy wtedy, gdy **zmienna przekazana do instrukcji switch będzie innego typu niż liczba całkowita** czyli przykładowo będzie typu `float`.
Czytając komunikaty kompilatora ze zrozumieniem w 90% przypadków nie będziesz musiał udawać się do internetu w poszukiwaniu przyczyny wystąpienia błędu, ponieważ kompilator dokładnie napisze Ci co i gdzie poszło źle.

### Słowo kluczowe case

Skoro już wiemy jak wybrać zmienną tą, która nas interesuje to teraz powinniśmy dowiedzieć się jak w zależności od wartości zmiennej wykonać jakiś kawałek kodu. Jak można się łatwo domyślić po składni już przedstawionej w niniejszym rozdziale do tego celu służy słowo kluczowe `case`. Ogólny zapis wygląda tak:

```cpp
case...:
```

Zapis ten oznacza: jeśli wartość zmiennej (występującej po słowie kluczowym `switch`) będzie równa wartości umieszczonej po słowie kluczowym `case`, to wykonaj kod (znajdujący się po znaku dwukropka).

```cpp
#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    switch( liczba )
    {
    case 2:
        cout << "dwa" << endl;
        break;
    case 1:
        cout << "jeden" << endl;
        break;
    case 3:
        cout << "trzy" << endl;
        break;
    }
    return 0;
}
```

### Słowo kluczowe default

Instrukcja sterująca switch oferuje nam jeszcze jedną instrukcję i jest nią `default:`. Wejście w kod znajdujący się po słowie kluczowym default nastąpi tylko wtedy, **gdy żaden z case'ów nie zostanie spełniony.**

```cpp
#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    switch( liczba )
    {
    case 2:
        cout << "dwa" << endl;
        break;
    case 1:
        cout << "jeden" << endl;
        break;
    case 3:
        cout << "trzy" << endl;
        break;
    default:
        cout << "ani jeden, ani dwa, ani trzy" << std::endl;
        break;
    }
    return 0;
}
```

 Wynik działania programu:

```text
Podaj liczbe: 5
ani jeden, ani dwa, ani trzy
```

### Słowo kluczowe break

Słowo kluczowe break oznacza: przerwij wykonywanie obecnej instrukcji sterującej. W tym przypadku instrukcją sterującą jest switch. Użycie słowa kluczowego break ma bardzo duże znaczenie w instrukcji sterującej switch ... case. Informuje ona bowiem kompilator, że dany case się wykonał i program ma już opuścić instrukcję sterującą switch. Jeśli zabraknie słowa kluczowego break to program wykona wszystkie instrukcje od momentu spełnienia warunku aż do samego końca switch'a. Bardzo dobrym przykładem demonstrującym konsekwencje braku słowa kluczowego break jest przerobienie programu, który już mieliśmy. Po przeróbce będzie on wyglądał tak:

```cpp
#include <iostream>
using namespace std; 

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    switch( liczba )
    {
    case 2:
        cout << "dwa" << endl;
    case 1:
        cout << "jeden" << endl;
    case 3:
        cout << "trzy" << endl;
    }
    return 0;
}
```

Jeśli teraz w programie wpiszemy np. wartość 1 to na ekranie ujrzymy następujący rezultat:

```text
Podaj liczbe: 1
jeden
trzy
```
