//
//  rozklad-liczby.cpp
//  2-algorytmika/2-7-algorytmy-iteracyjne/2-7-01-rozklad-liczby/
//
//  Created by Jakub Piskorowski on 10/10/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu rozkładu liczb na czynniki pierwsze.
//
#include <iostream>
using namespace std;

int main()
{
	int n;
        
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Czynniki pierwsze liczby " << n << ": ";
	
	int k=2; //ustawiamy k na pierwszą liczbę pierwszą

	//rozkład liczby na czynniki pierwsze
	while(n>1)
	{
			while(n%k==0) //dopóki liczba jest podzielna przez k
			{
					cout << k << " ";
					n/=k;
			}
			++k;
	}
	
	return 0;
}
