//
//  tablice-struktur.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-6-struktury\
//
//  Created by Jakub Piskorowski on 24/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie czym sa struktury danych oraz jak ich uzywac
//

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