//
//  zad5-wsk-funkcje.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\135-zadania\
//
//  Created by Jakub Piskorowski on 11/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie zmiennej wskaznikowej w funkcjach
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool Sprawdz(int *liczba, int tab1[]);

int main(){
    int tab[10];
    int liczba;
    int *wsk = &liczba;
    int licznik = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
		tab[i] = (rand() % 50) + 0;
        cout << tab[i] << ", ";
	}
    cout << endl;
    
    do{
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if( Sprawdz(&liczba, tab) ) {cout << "Zgadles!\n";}
    else cout << "Nie zgadles\n";

    licznik++;
    }while( !(Sprawdz(&liczba, tab)) );

    cout << "Zgadles za " << licznik << " razem." << endl;    
}

bool Sprawdz(int *liczba, int tab1[]){
    for (int i = 0; i < 10; i++) {
        if(tab1[i] == *liczba) return true;
    }
    return false;
}
