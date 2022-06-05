//
//  zad6-wsk-funkcje.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\135-zadania\
//
//  Created by Jakub Piskorowski on 17/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie zmiennej wskaznikowej w funkcjach
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool Sprawdz(int *liczba, int tab1[], int *wskRoz);

int main(){
    int rozmiar, rStart, rEnd;
    int liczba;
    int *wsk = &liczba;
    int licznik = 0;
    srand(time(NULL));

    cout << "Ile liczb chcesz wylosowac: ";
    cin >> rozmiar;
    int *tab = new int[rozmiar];

    cout << "Z jakiego przedzialu liczb chcesz wylosowac?\n";
    cout << "Wartosc poczatkowa: ";
    cin >> rStart;
    cout << "Wartosc koncowa: ";
    cin >> rEnd;

    for (int i = 0; i < rozmiar; i++) {
		tab[i] = (rand() % (rEnd-rStart)) + rStart;
        cout << tab[i] << ", ";
	}
    cout << endl;
    
    do{
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if( Sprawdz(&liczba, tab, &rozmiar) ) {cout << "Zgadles!\n";}
    else cout << "Nie zgadles\n";

    licznik++;
    }while( !(Sprawdz(&liczba, tab, &rozmiar)) );

    cout << "Zgadles za " << licznik << " razem." << endl;

    delete [] tab;
}

bool Sprawdz(int *liczba, int tab1[], int *wskRoz){
    for (int i = 0; i < *wskRoz; i++) {
        if(tab1[i] == *liczba) return true;
    }
    return false;
}
