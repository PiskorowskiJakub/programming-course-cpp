//
//  zad5-analiza-ciagu-znakow.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-2-tablice-znakowe\132-zadania\
//
//  Created by Jakub Piskorowski on 29/01/2024 wersja: 1.0
//  Copyright © 2024 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie tablicy znakowej
//

#include<iostream>
using namespace std;

int main()
{
	char tablica[100];

    cout<<"Podaj ciag znakow (maks. 100 znakow): "; 
    cin.getline(tablica,100); 

	// rozmiar tablicy
    int pozKonca;
    for (int i = 0; i < sizeof(tablica); i++)
        if (tablica[i] == '\0'){
            pozKonca = i;
			break;
		}
    cout << "Dlugosc ciagu: " << pozKonca << endl;

	// Ciag w odwrotnej kolejnosci
	cout << "Ciag w odwrotnej kolejnosci: ";
	for (int i = pozKonca; i >=0 ; i--) {
		cout << tablica[i];
	}

	// wystapienie litery a
	char szukana;
	short wystapien = 0;
	cout << "\nPodaj szukana litere w wyrazie: ";
	cin >> szukana;
	for (int i = 0; i < pozKonca ; i++) {
		if(tablica[i] == szukana)
			wystapien++;
	}
	cout << "Wystapien litery '" << szukana << "': " << wystapien;
	
	return 0;
}




