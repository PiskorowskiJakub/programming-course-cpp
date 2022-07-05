//
//  sortowanie-wstawianie.cpp
//  2-algorytmika/2-4-algorytmy-sortowania/2-4-4-sortowanie-przez-wstawianie/
//
//  Created by Jakub Piskorowski on 05/06/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu sortowania przez wstawianie
//

#include<iostream>
// Rand
#include <ctime>
#include <cstdlib>
using namespace std;

void SortowaniePrzezWstawianie(int* tab,int n);
void PrintTab(int* tab, int n);

int main()
{
	srand(time(NULL));
	int *tab, n;
	
	cout<<"Wprowadz liczbe elementow do posortowania: ";
	cin>>n;
	
	tab = new int[n];
	for (int i = 0; i < n; i++) {
		tab[i] = (rand() % 99) + 1;
	}
	
	cout << endl << "Tablica przed posortowaniem:" << endl;
	PrintTab(tab, n);

	cout << endl << "Rozpoczecie sortowania" << endl;
	SortowaniePrzezWstawianie(tab, n);

	cout << endl << "Tablica po sortowaniu:" << endl;
	PrintTab(tab, n);
 
	delete[] tab;
	system("pause");
	return 0;
}

void PrintTab(int* tab, int n) {
	for (int x = 0; x < n; x++) {
		cout << tab[x] << " | ";
	}
	cout << endl;
}

void SortowaniePrzezWstawianie(int* tab,int n)
{
	int pom, j;
	for(int i = 1; i < n; i++){
		//wstawienie elementu w odpowiednie miejsce
		pom = tab[i]; //ten element będzie wstawiony w odpowiednie miejsce
		j = i-1;
		
		//przesuwanie elementów większych od pom
		while(j>=0 && tab[j]>pom) 
		{
				tab[j+1] = tab[j]; //przesuwanie elementów
				--j;
		}
		tab[j+1] = pom; //wstawienie pom w odpowiednie miejsce
	}     
}