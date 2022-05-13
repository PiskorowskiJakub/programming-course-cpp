# Programming-course-cpp

`Jakub Piskorowski on 24/01/2022 wersja: 1.0`

## Temat: Struktury danych

Przedstawienie czym są struktury danych oraz jak ich używać.

Kod źródłowy:
[struktury.cpp](struktury.cpp) \
[tablice-struktur.cpp](tablice-struktur.cpp)

&#x1F4D5; Poziom 3

Lista zadań: [136-zadania](136-zadania/README.md)

Zagadnienia: \
&emsp;[1. Organizacja danych](#1-organizacja-danych) \
&emsp;[2. Wykorzystanie strukktury w praktyce](#2-wykorzystanie-struktury-w-praktyce) \
&emsp;[3. Analizia kodu](#3-analiza-kodu) \
&emsp;[4. Tablice struktur](#4-tablice-struktur)

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Objaśnienie

### 1 Organizacja danych

Jeśli próbowałeś już pisać jakąś bazę danych, np. przechowującą kontakty telefoniczne do różnych osób to zauważyłeś pewnie, że szukanie nazw tablic i posługiwanie się wieloma tablicami dla jednej osoby nie jest wygodne. Z pomocą przychodzą tu **struktury**, które pozwalają na zorganizowanie danych w wygodniejszy sposób. Struktury **potrafią przechowywać różne typy danych.** Deklaracja struktury wygląda następująco:

```cpp
//struktura dla użytkowników forum
struct Uzytkownicy_DDT //deklaracja struktury
{ //opis struktury
    string nick;
    string haslo;
    short data_zalozenia_konta;
    string status;
};
```

Elementy charakteryzujące ten typ danych to:

- słowo kluczowe `struct`, które informuje kompilator, że będzie definiowana struktura,
- **opis struktury** opisujący zawartość struktury,
- jest to najprostsza postać klasy.

### 2 Wykorzystanie struktury w praktyce

```cpp
//struktura dla uzytkownikow forum
#include <iostream>

using namespace std;

//struktura dla uzytkownikow forum
struct Uzytkownicy_DDT //deklaracja struktury
{
    //opis struktur
    string nick;
    string haslo;
    short lp;
    string status;
    string rodzaj_konta;
};

int main()
{
    //Tworzenie obiektu struktury i wypelnianie
    Uzytkownicy_DDT PiotrSzawdynski =
    {
        "PiotrSzawdynski",
        "!@#$%%^",
        1,
        "Aktywny",
        "Admin"
    };
    /*WAZNE dla niektórych kompilatorów należy
    użyć zapisu static Uzytkownicy_DDT PiotrSzawdynski =*/
    Uzytkownicy_DDT Pietrzuch =
    {
        "Pietrzuch",
        "@m@m$@#@",
        24,
        "Aktywny",
        "Moderator"
    };
    /*inny sposób wprowadzania danych do
        obiektu*/
    //tworzenie obiektu
    Uzytkownicy_DDT Piotrus_Pan;
    /*wypełnianie obiektu wartościami dla
        poszczególnych typów danych*/
    Piotrus_Pan.haslo = "PanPiotr";
    Piotrus_Pan.lp = 927;
    Piotrus_Pan.nick = "Piotrus_Pan";
    Piotrus_Pan.rodzaj_konta = "Uzytkownik";
    Piotrus_Pan.status = "zablokowany";
   
    //wyświetlenie obiektów
    cout << "Oto lista uzytkownikow forum DDT"
    << endl << "Nick " << PiotrSzawdynski.nick
    << endl << "Haslo " << PiotrSzawdynski.haslo
    << endl << "Nr usera " << PiotrSzawdynski.lp
    << endl << "Status " << PiotrSzawdynski.status
    << endl << "Rodzaj Konta "
    << PiotrSzawdynski.rodzaj_konta
    << endl
    << endl << "Nick " << Pietrzuch.nick
    << endl << "Haslo " << Pietrzuch.haslo
    << endl << "Nr usera " << Pietrzuch.lp
    << endl << "Status " << Pietrzuch.status
    << endl << "Rodzaj Konta "
    << Pietrzuch.rodzaj_konta
    << endl
    << endl << "Nick " << Piotrus_Pan.nick
    << endl << "Haslo " << Piotrus_Pan.haslo
    << endl << "Nr usera " << Piotrus_Pan.lp
    << endl << "Status " << Piotrus_Pan.status
    << endl << "Rodzaj Konta "
    << Piotrus_Pan.rodzaj_konta;
   
    cin.get();
    return( 0 );
}
```

Kod źródłowy: [struktury.cpp](struktury.cpp)

Wynik działania programu:

```text
Oto lista uzytkownikow forum DDT
Nick PiotrSzawdynski
Haslo !@#$%%^
Nr usera 1
Status Aktywny
Rodzaj Konta Admin

Nick Pietrzuch
Haslo @m@m$@#@
Nr usera 24
Status Aktywny
Rodzaj Konta Moderator

Nick Piotrus_Pan
Haslo PanPiotr
Nr usera 927
Status zablokowany
Rodzaj Konta Uzytkownik
```

### 3 Analiza kodu

Jak pewnie się zorientowałeś **strukturę** można wypełnić podobnie jak tablicę, gdy oczywiście przed uruchomieniem programu znamy wartości jakie ma zawierać. Co warte podkreślenia **struktura Uzytkownicy_DDT** posiada trzy obiekty `PiotrSzawdynski`,  `Pietrzuch`,  `Piotrus_Pan`. By wprowadzić bądź wyświetlić wartości danego obiektu, musimy użyć **kropki( . )**!!! `nazwa_obiektu.nazwa_zmiennej = wartosc_wprowadzana` Większość kompilatorów po wprowadzeniu kropki z klawiatury **wyświetla podpowiedz dla danego obiektu** (typy danych dla tego obiektu(struktury)).

**WAŻNE !!!** dla niektórych kompilatorów należy użyć słowa kluczowego `static Uzytkownicy_DDT PiotrSzawdynski`.

```cpp
static Uzytkownicy_DDT PiotrSzawdynski =
{
    "PiotrSzawdynski",
    "!@#$%%^",
    1,
    "Aktywny",
    "Admin"
};
```

### 4 Tablice struktur

```cpp
#include <iostream>
using namespace std;
//struktura dla użytkowników forum
struct DDT //deklaracja struktury
{
    //opis struktury
    string nick;
    string haslo;
    string status;
    string rodzaj_konta;
};

int main()
{
    //Tworzenie obiektu struktury
    DDT Uzytkownicy[ 3 ];
    cout << "Wprowadz dane.\n";
    //wprowadzenie 3 uzytkowników
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Podaj nick: ";
        cin >> Uzytkownicy[ licz ].nick;
        cout << "Podaj haslo: ";
        cin >> Uzytkownicy[ licz ].haslo;
    }
    //wyswietlanie wprowadzonych danych
    cout << endl
    << "Oto rezultat wprowadzonych danych:"
    << endl;
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Uzytkownik " << licz + 1
        << "\tNick: " << Uzytkownicy[ licz ].nick
        << "\tHaslo: " << Uzytkownicy[ licz ].haslo
        << endl;
    }
   
    cin.get();
    return(0);
}
```

Kod źródłowy: [tablice-struktur.cpp](tablice-struktur.cpp)

Wynik działania programu:

```text
Wprowadz dane.
Podaj nick: Nick1
Podaj haslo: Haslo1
Podaj nick: Nick2
Podaj haslo: Haslo2
Podaj nick: Nick3
Podaj haslo: Haslo3

Oto rezultat wprowadzonych danych:
Uzytkownik 1    Nick: Nick1     Haslo: Haslo1
Uzytkownik 2    Nick: Nick2     Haslo: Haslo2
Uzytkownik 3    Nick: Nick3     Haslo: Haslo3
```

Właściwie nie ma różnić między użyciem tablicy zmiennych a tablicy struktur. Oczywiście możemy też wypełnić tablice w ten sposób:

```cpp
DDT Uzytkownicy[ 3 ] =
{
    //Użytkownik[0]
    { "PiotrSzawdynski", "!@#$%%^" },
    //Użytkownik[1]
    { "Pietrzuch", "@m@m$@#@" },
    //Użytkownik[2]
    { "Piotrus_Pan", "PanPiotr" }
};
```

Źródło: [cpp0x.pl](https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Struktury-danych/303)
