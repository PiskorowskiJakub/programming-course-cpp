# Programming-course-cpp

`Jakub Piskorowski on 29/12/2021 wersja: 1.0`

## Temat: Instrukcje wejścia/wyjścia oraz operatory

Przedstawienie instrukcji wejścia wyjścia oraz podstawowych operatorów.

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1`

Powrót do [Podstawy programowania](/1-programowanie-strukturalne/1-1-podstawy-programowania/README.md)

## Objaśnienie

### Wyświetlanie tekstu

```cpp
cout << "Wyswietlany tekst"; // wyswietlanie tekstu
cout << endl; // znak konca linii
cout << "znak konca linii: \n"; // znak konca linii w tekscie
cout << "Znak tabulatora: \t"; // znak tabulatora w tekscie
```

### Wprowadzanie danych

```cpp
// stworzenie zmiennej ktora bedzie przechowywac tylko liczby calkowite
int a;
// pobranie z konsoli wartosci i przypisanie jej do zmiennej
cin >> a;   
```

### Wyświetlenie danych z zmiennej

```cpp
// wyswietlenie wartosci zmiennej miedzy tekstem
cout << "Wartosc: " << a << " " << endl; 
// wyswietlenie wartosci zmiennej
cout << a; 
```

### Operatory arytmetyczne

Operatory arytmetyczne służą do wykonywania wszelkiego rodzaju działań na liczbach takich jak:

- "+" - dodawanie
- "-" - odejmowanie
- "*" - mnożenie
- "/" - dzielenie całkowite lub rzeczywiste. (jeśli argumentami są liczby całkowite, operator będzie wykonywał dzielenie całkowite, natomiast dla liczb rzeczywistych operator wykona dzielenie rzeczywiste. (przykład poniżej)
- "%" - reszta z dzielenia dwóch liczb całkowitych

```cpp
int a = 10, b = 3, wynik1;
wynik1 = a / b; //zmienna "wynik1" przechowa wartość 3, ponieważ 10 / 3 = 3 całe (dzielenie całkowite)
wynik1 = a % b; //zmienna "wynik1" w tym przypadku będzie miała nadaną wartość 1, ponieważ
// reszta z dzielenia liczby 10 przez 3 jest równa 1
wynik1 = b% a; //zmienna "wynik1" będzie równa 3, ponieważ tyle wynosi reszta z dzielenia liczby 3 przez 10
float c = 10, d = 3, wynik2;
wynik2 = c / d; //zmienna "wynik2" przechowa wartość 3.333..., ponieważ w tym przypadku zostało wykonane
//dzielenie całkowite
```

### Operatory logiczne

Mają zastosowanie w miejscach, gdzie występują różnego rodzaju warunki - głównie w pętlach i instrukcjach warunkowych. Do operatorów logicznych zaliczamy:

- || - lub logiczne
- && - i logiczne
- ! - zaprzeczenie

Lub logiczne  zwraca prawdę, gdy przynajmniej jeden z warunków jest prawdziwy, w przeciwnym razie zwraca fałsz np.:

```cpp
int n = 5; int k = 7;
bool warunek = n > 3 || k > 10; // wystarczy, aby jeden warunek był prawdziwy
// (w tym przypadku jest pierwszy) aby zmienna "warunek" otrzymała wartość true
```

Logiczne i zwraca prawdę w przypadku, gdy wszystkie warunki są prawdziwe, w przeciwnym razie zwraca fałsz np.:

```cpp
int n = 5; int k = 7;
bool warunek = n > 3 && k > 10;// wystarczy, aby jeden warunek był fałszywy
// (w tym przypadku jest drugi) aby zmienna "warunek" otrzymała wartość false
```

Logiczne nie zaprzecza otrzymaną wartość z true na false lub z false na true np.:

```cpp
int n = 5; int k = 7;
bool warunek = !(n > 3 && k > 10); // wyrażenie w nawiasie ma wartość false, 
// a więc zmienna "warunek" będzie miała wartość true
```

### Operatory relacyjne

Operatory relacyjne stosujemy w sytuacje, gdzie jest potrzeba porównania dwóch elementów. Najczęściej w instrukcjach warunkowych i iteracyjnych. Wyróżniamy:

- "<" - mniejszy
- ">" - większy
- "<=" - mniejszy równy
- ">=" - większy równy
- "==" - równy
- "!=" - różny

```cpp
int a = 8, b = 7;
if(a==b) //sprawdzam czy wartość zmiennej "a" jest taka sama jak zmienne "b"
cout<<"a jest równe b";  //ten komunikat się nie wyświetli, ponieważ "a" nie jest równe "b"
else
cout<<"a nie jest równe b";
```

### Operator przypisania

Przypisanie polega na nadaniu wartości dla zmiennej znajdującej się po lewej stronie, wartości znajdującej się po stronie prawej.

```cpp
int a = 45; //przypisanie do zmienne "a" liczby 45, od tej chwili zmienna "a" przechowuje tą liczbę
int b = a; //przypisanie do zmiennej "b" wartości zmiennej "a", od tej chwili zmienna "b" ma taką
//samą wartość co zmienna "a".
int c = b * (a - b); //w tym przypadku wykonane zostaną operacje po prawej stronie operatora
// a następnie ten wynik zostanie przypisany do zmiennej "c" (czyli 0) 
```

### Inkrementacja i dekrementacja

Częstą operacją w języku C++ jest zwiększenie lub zmniejszenie wartości zmiennej całkowitej o 1. Tą operację nazywamy odpowiednio **inkrementacją** i **dekrementacją**.

**Pamiętaj!!!** Inkrementacja i dekrementacja działa tylko na zmiennych typu całkowitego.

```cpp
int c = 1;
c = c + 1; //zwiększenie wartości zmiennej "c" o 1, od tej pory ta zmienna ma wartość 2 - sposób pierwszy
c += 1;  //ponowne zwiększenie zmiennej "c" o 1, zmienna ta przyjmuje wartość 3 - drugi sposób inkrementacji
c++; // najkrótszy i najczęstszy sposób inkrementujący zmienną "c". Od tej pory zmienna ta osiąga wartość 4
c--; // i analogicznie dekrementujemy naszą zmienną, a więc zmniejszamy wartość zmiennej o 1. 
```

```cpp
int a, b;
a = 1;
b = a ++; // w tym przypadku najpierw zostanie przypisana wartość do zmiennej "b", a następnie zwiększona wartość zmiennej "a" o 1, czyli od tej chwili
// " a = 2 " natomiast " b =1 "
a = 1;
b = ++a; // w tym przypadku najpierw zadziała operator inkrementacji, a później przypisania a więc, najpierw zwiększamy "a", a następnie ten wynik przypisujemy do "b",
//z tego wynika, że " a = 2 " i " b = 2 ".
```


Źródło: [algorytm.edu.pl](http://www.algorytm.edu.pl/wstp-do-c/operatory-w-c.html)
