//
//  decimal-to-binary.cpp
//  2-algorytmika/2-7-algorytmy-iteracyjne/2-7-03-dec-to-bin/
//
//  Created by Jakub Piskorowski on 30/08/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu konwersji liczby dziesietnej na binarna
//
#include <iostream>
using namespace std;

void DecToBin(int liczba);

int main()
{
	int liczba;

	cout << "Podaj liczbe dziesietna: ";
	cin >> liczba;

	cout << "Liczba " << liczba << " po zamianie na postac binarna: ";
	DecToBin(liczba);
	cout << endl;

	return 0;
}

void DecToBin(int liczba)
{
	int i=0, tab[31];

	while(liczba){ //dopoki liczba jest rozna od zera
		tab[i++]=liczba%2;
		liczba/=2;
	}

	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
}