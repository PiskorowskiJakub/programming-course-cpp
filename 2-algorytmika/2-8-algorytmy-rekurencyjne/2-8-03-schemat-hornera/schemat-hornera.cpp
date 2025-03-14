//
//  schemar-hornera.cpp
//  2-algorytmika/2-8-algorytmy-rekurencyjne/2-8-03-schemat-hornera/
//
//  Created by Jakub Piskorowski on 26/10/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu do szybkiego obliczania wartosci wielomianu.
//
#include<iostream>
using namespace std;

int horner(int wsp[],int st, int x);

int main()
{
	int *wspolczynniki;
	int stopien, argument;
	
	cout << "Podaj stopien wielomianu: ";
	cin >> stopien;
	
	wspolczynniki = new int [stopien+1]; // dynamiczna tablica
	
	//wczytanie współczynników
	for(int i=0; i<=stopien; i++)
	{
		cout << "Podaj wspolczynnik stojacy przy potedze " << stopien-i << ": ";
		cin >> wspolczynniki[i];
	}
	
	cout << "Podaj argument: ";
	cin >> argument;
	
	cout << "W( " << argument << " ) = " << horner(wspolczynniki,stopien,argument) << endl;
	
	delete [] wspolczynniki;

	return 0;
}

int horner(int wsp[],int st, int x){
	if(st==0)
		return wsp[0];
	
	return x*horner(wsp,st-1,x) + wsp[st];
}