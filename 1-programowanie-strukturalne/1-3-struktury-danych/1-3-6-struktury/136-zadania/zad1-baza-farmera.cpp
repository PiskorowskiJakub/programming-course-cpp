//
//  zad1-baza-farmera.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-6-struktury\136-zadania\
//
//  Created by Jakub Piskorowski on 24/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania struktur danych
//

#include <iostream>
using namespace std;

struct Zwierzeta 
{
    string nazwa;
    float waga;
    short wiek;
};

int main()
{
    Zwierzeta Farmer[ 5 ];
    cout << "Wprowadz dane zwierzat:\n";
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Nazwa: ";
        cin >> Farmer[ licz ].nazwa;
        cout << "Waga (gram): ";
        cin >> Farmer[ licz ].waga;
        cout << "Wiek (tygodnie): ";
        cin >> Farmer[ licz ].wiek;
    }
   
    //wyswietlanie wprowadzonych danych
    cout << endl
    << "Wprowadzone zwierzeta: "
    << endl;
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Zwierze nr " << licz + 1
        << "\tNazwa: " << Farmer[ licz ].nazwa
        << "\tWaga: " << Farmer[ licz ].waga
        << "\tWiek: " << Farmer[ licz ].wiek
        << endl;
    }
   
    cin.get();
   
    cin.get();
    return( 0 );
}