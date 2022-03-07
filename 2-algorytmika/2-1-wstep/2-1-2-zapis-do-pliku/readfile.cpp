//
//  readfile.cpp
//  2-algorytmika\2-1-wstep\2-1-2-zapis-do-pliku\
//
//  Created by Jakub Piskorowski on 03/03/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania funkcji operacji na plikach
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string imie, nazwisko, linia;
    short wiek;
    string nazwaPliku = "testplik";
    nazwaPliku += ".txt";
    short nr_linii =0;
    
    fstream plik(nazwaPliku);
    if(plik.fail()){
        plik.open(nazwaPliku, fstream::out);
        cout << "Brak takkiego pliku, stworzono nowy" << endl;
    
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj wiek: ";
        cin >> wiek;

        plik << imie << endl;
        plik << nazwisko << endl;
        plik << wiek << endl;
    }
    else cout << "Plik isnieje, oto dane z pliu";

    while(getline(plik, linia)){
        switch (nr_linii)
        {
            case 0: imie = linia; break;
            case 1: nazwisko = linia; break;
            case 2: wiek = atoi(linia.c_str()); break;
        }
        nr_linii++;
    }

    plik.close();   // zamniecie pliku

    cout << "\nDane zczytane z zmiennych: " << endl;
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << wiek << endl;
    return 0;
}