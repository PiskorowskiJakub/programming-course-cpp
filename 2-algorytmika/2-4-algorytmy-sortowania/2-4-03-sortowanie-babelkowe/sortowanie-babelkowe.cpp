//
//  sortowanie-babelkowe.cpp
//  2-algorytmika/2-4-algorytmy-sortowania/2-4-3-sortowanie-babelkowe/
//
//  Created by Jakub Piskorowski on 05/06/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu sortowania bąbelkowego
//

#include<iostream>
// Rand
#include <ctime>
#include <cstdlib>
using namespace std;

void SortowanieBabelkowe(int tab[],int n);
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
	SortowanieBabelkowe(tab,n);

	cout << endl << "Tablica po sortowaniu:" << endl;
	PrintTab(tab, n);
 
	delete[] tab;
	system("pause");
	return 0;
}

void SortowanieBabelkowe(int tab[],int n){
	int temp =0;
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
			if(tab[j-1]>tab[j]){
				temp = tab[j-1];
				tab[j-1] = tab[j];
				tab[j] = temp;
			}
}

void PrintTab(int* tab, int n) {
	for (int x = 0; x < n; x++) {
		cout << tab[x] << " | ";
	}
	cout << endl;
}