# Programming-course-cpp

`Jakub Piskorowski on 07/03/2022 wersja: 1.0`

## Temat: Zapis do pliku

Przedstawienie działania, zapisu i odczytu daych z pliku.

Kod źródłowy: [openfile.cpp](openfile.cpp) \
[readfile.cpp](readfile.cpp)

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1`

Powrót do [Wstęp](/2-algorytmika/2-1-wstep/README.md)

---

## Objaśnienie

## Tworzenie pliku

Tworzenie nowego pliku wygląda tak samo jak otwarcie nowego z tą różnicą iż używamy biblioteki `fstream::out` do zapisania pliku.

```cpp
string nazwaPliku = "nazwaPliku";
cout << "Nazwa: " << nazwaPliku;
plik.open(nazwaPliku, fstream::out);
```

Kod źródłowy: [readfile.cpp](readfile.cpp) (linia 28)

- ifstream = (ang. in file stream) wczytywanie plików
- ofstream = (ang. out file stream) zapisywania plików
- fstream = połączenie obu powyższych

## Otwarcie pliku

Zanim rozpoczniemy wykonywać jakiekolwiek działania na pliku, należy go uprzednio otworzyć. Plik w trybie do odczytu można otworzyć następująco:

```cpp
fstream plik("testplik.txt");
```


## Wczytywanie danych z pliku

Jeżeli otwarcie pliku zakończyło się powodzeniem, to możemy odczytywać już z niego interesujące nas dane. Dane z pliku można odczytywać na wiele sposobów, jednak aktualnie zajmiemy się operatorem `>>`. Operator `>>` umożliwia wczytywanie danych do zmiennych w taki sam sposób, w jaki wczytywaliśmy dane wprowadzane przy pomocy klawiatury. Tym samym napisanie:

```cpp
int zmienna;
plik >> zmienna;
```

spowoduje, że z pliku wczytana zostanie wszystko do napotkania **białego znaku** (tabulator, enter, spacja).

Możemy również użyć funkcji `.fail()` do sprawdzenia czy plik nie został otworzony. Jeżeli się nie otworzy to wyświetli tekst **BLAD** oraz zakończy program.

```cpp
if(plik.fail()){
    cout << "BLAD" << endl;
    return 0;
}
cout<<"OK"<<endl;
```

Kod źródłowy: [readfile.cpp](readfile.cpp) (27 linia)

Możemy również odczytywac plik linia po linii wyorzystując funkcję `getline`. Pętla `for` wykonuje się póki plik nie osiągnie końca (`eof`) oraz zwiększa indeks zmiennej `i` od `0` do momentu zakkończenia działania pętli.

Funkcja `getline()` bobiera wiersz z zmiennej `plik` i zapisuje w nowym wierszu tablicy `dane[]`. W pętli od razu zostają wyświetlone dane wiersz po wierszu.

Na koniec działania programu, musimy zamknąć plik poleceniem `close()`.

```cpp
for(int i = 0; !plik.eof(); i++){
    getline(plik, dane[i]);     
    cout << dane[i] << endl;    // wyświetlenie danych 
} 
```

Kod źródłowy programu do otwarcia pliku i odczytania zawartości [openfile.cpp](openfile.cpp)


## Zapis danych do pliku

Zapisywanie danych za pomocą strumienia jest naprawdę banalne. Wszystko działa tak samo jak przy wypisywaniu informacji na ekranie tyle, że zamiast okna konsoli mamy tutaj plik:

```cpp
plik << imie << endl;
plik << nazwisko << endl;
plik << wiek << endl;
```

powyżej przedstawione linie kodu zapiszą w pliku zawartość 3 zmiennych (`imie`, `nazwisko`, `wiek`) w nowych liniach.

## Wczytywanie liczb do konkretych zmiennych

Wczytywanie zawartości plików tekstowych przy pomocy funkcji std::getline jest zazwyczaj satysfakcjonującym rozwiązaniem, jednak nie zawsze jest ono wygodne. Dane w pliku czasami są zapisane w postaci liczb, a te z kolei chcielibyśmy wczytywać od razu do zmiennych liczbowych, oszczędzając sobie tym samym problemów związanych z wyciąganiem ich ze zmiennej tekstowej.

Pętla `while()` zprawdza czy są jeszcze jakieś linie do zczytania, natomiast funkcja `getline()` zapisuje do zmiennej `linia` zawartość kolejnej linii z zmiennej `plik`. Następnie z wykorzystaniem instrukcji `switch` przełącza się do kolejnego wiersza aby zapisać każdy wiersz w innej zmiennej.

Funckja `atoi()` konwertuje `string` na `int`. \
Metoda `c_str()` konwertuje ciąg znaków zapisany w zmiennej typu `string` na ciąg który może być zapisany w tablicy znaków. Odwołujemy się do niej za pomocą operatora ".".

```cpp
while(getline(plik, linia)){
    switch (nr_linii)
    {
        case 0: imie = linia; break;
        case 1: nazwisko = linia; break;
        case 2: wiek = atoi(linia.c_str()); break;
    }
    nr_linii++;
}
```

Kod źródłowy [readfile.cpp](readfile.cpp) linia (44-52)
