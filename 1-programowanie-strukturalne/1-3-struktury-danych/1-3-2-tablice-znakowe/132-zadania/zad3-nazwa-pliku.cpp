//
//  zad3-nazwa-pliku.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-2-tablice-znakowe\132-zadania\
//
//  Created by Jakub Piskorowski on 15/02/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie tablicy znakowej
//

#include <iostream>
using namespace std;

int main()
{
    char nazwa[100];
    cout << "Poszukiwana nazwa pliku w tekscie: ";
    cin.getline(nazwa, 100);

    // rozmiar tablicy
    int pozKonca;
    for (int i = 0; i < sizeof(nazwa); i++)
        if (nazwa[i] == '\0'){
            pozKonca = i-1;
			break;
		}
    cout << "Pozycja konca: " << pozKonca << endl;

    //znajdz pozycje kropki w tekscie
    int pozKropki;
    for (int i = 0; i < pozKonca; i++)
        if (nazwa[i] == '.' && nazwa[i+1] != ' ')
            pozKropki = i;
    cout <<"Pozycja kropki: " << pozKropki << endl;

    // pozycja poczatku nazwy pliku
    int pozycjaPliku;
    for (int i = pozKropki; i >= 0; i--)
        if (nazwa[i] == ' ') {
            pozycjaPliku = i + 1;
            break;
        }
    cout << "Pozycja poczatku nazwy pliku: " << pozycjaPliku << endl;
    
    // zapisanie nazwy pliku
    string nazwaPliku;
    for (int i = pozycjaPliku; i < pozKropki; i++) {
        nazwaPliku += nazwa[i];
    }
    cout << "Nazwa pliku: " << nazwaPliku << endl;

	// zapisanie rozszerzenia pliku
    string rozszerzeniePliku;
    for (int i = pozKropki; i < pozKonca; i++){
        if (nazwa[i] == ' ')
            break;
		rozszerzeniePliku += nazwa[i];
	}
    cout << "Rozszerzenie pliku: " << rozszerzeniePliku << endl;

}