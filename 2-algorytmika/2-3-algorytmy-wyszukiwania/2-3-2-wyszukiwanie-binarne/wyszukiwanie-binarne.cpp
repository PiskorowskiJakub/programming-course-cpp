//
//  wyszukiwanie-binarne.cpp
//  2-algorytmika/2-2-podstawowe-algorytmy/2-3-2-wyszukiwanie-binarne/
//
//  Created by Jakub Piskorowski on 07/04/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu wyszukiwania binarnego
//
#include<iostream>
using namespace std;

int Szukaj(int szukana, int tab[]);

int main()
{
    int szukana, pozycja;
    int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;
 
	pozycja = Szukaj(szukana, tab);
 
	if(pozycja == -1)
		cout << "Liczba "<< szukana << " nie wystepuje w zbiorze" << endl;
	else

		cout << "Liczba "<< szukana << " wystepuje w zbiorze w komorce o indeksie " << pozycja << endl;
    
	return 0;
}

int Szukaj(int szukana, int tab[]) 
{
    short l = 0;
    int p = 15;
	short sr = (l + p)/2;

	while(l <= p){
		if(tab[sr] == szukana)
			return sr;
			
		if(tab[sr] > szukana)
			p = sr - 1;
		else
			l = sr + 1;

		sr = (l + p)/2;
    }

	return -1; 
}
