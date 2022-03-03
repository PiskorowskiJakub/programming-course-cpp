# Programming-course-cpp

`Jakub Piskorowski on 02/03/2022 wersja: 1.0`

## Temat: Zapis do pliku

Przedstawienie działania, zapisu i odczytu daych z pliku.

Kod źródłowy: [openfile.cpp](openfile.cpp)

![#FDF364](https://via.placeholder.com/15/FDF364/000000?text=+) `Poziom 1`

Powrót do [Wstęp](/2-algorytmika/2-1-wstep/README.md)

---

## Objaśnienie

Zanim rozpoczniemy wykonywać jakiekolwiek działania na pliku, należy go uprzednio otworzyć. Plik w trybie do odczytu można otworzyć następująco:

```cpp
fstream plik("testplik.txt");
```

Jeżeli otwarcie pliku zakończyło się powodzeniem, to możemy odczytywać już z niego interesujące nas dane. Dane z pliku można odczytywać na wiele sposobów, jednak aktualnie zajmiemy się operatorem `>>`. Operator `>>` umożliwia wczytywanie danych do zmiennych w taki sam sposób, w jaki wczytywaliśmy dane wprowadzane przy pomocy klawiatury. Tym samym napisanie:

```cpp
int zmienna;
plik >> zmienna;
```

spowoduje, że z pliku wczytana zostanie wszystko do napotkania **białego znaku** (tabulator, enter, spacja).

Możemy również użyć funkcji `good()` dosprawdzenia czy plik został poprawnie otworzony. Jeżeli się nie otworzy to wyświetli tekst **BLAD** oraz zakończy program.

```cpp
if(!plik.good()){
    cout << "BLAD" << endl;
    return 0;
}
cout<<"OK"<<endl;
```

Możemy również odczytywac plik linia po linii wyorzystując funkcję `getline`. Pętla `for` wykonuje się póki plik nie osiągnie końca (`eof`) oraz zwiększa indeks zmiennej `i` od `0` do momentu zakkończenia działania pętli.

Funkcja `getline()` bobiera wiersz z zmiennej `plik` i zapisuje w nowym wierszu tablicy `dane[]`. W pętli od razu zostają wyświetlone dane wiersz po wierszu.

```cpp
for(int i = 0; !plik.eof(); i++){
    getline(plik, dane[i]);     
    cout << dane[i] << endl;    // wyświetlenie danych 
} 
```

Na koniec działania programu, musimy zamknąć plik poleceniem `close()`.

Kod źródłowy programu do otwarcia pliku i odczytania zawartości [openfile.cpp](openfile.cpp)

---
