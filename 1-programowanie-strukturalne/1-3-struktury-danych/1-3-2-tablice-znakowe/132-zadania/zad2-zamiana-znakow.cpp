//
//  zad1-poszukiwanie-pozycji.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-2-tablice-znakowe\132-zadania\
//
//  Created by Jakub Piskorowski on 28/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie tablicy znakowej
//

#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char tablica[200];

    cout<<"Podaj tekst o maksymalnej dlugosci 200 znakow: "; 
    cin.getline(tablica,200); 

	for (int i = 0; i < sizeof(tablica); i++) {
		if(tablica[i] == ' ' || tablica[i] == '.')
			tablica[i] = '-';
		if(tablica[i] == '\0')
			break;	
	}
	cout << "\nZmodyfikowany wyraz: " << tablica << endl;

    return 0;
}




