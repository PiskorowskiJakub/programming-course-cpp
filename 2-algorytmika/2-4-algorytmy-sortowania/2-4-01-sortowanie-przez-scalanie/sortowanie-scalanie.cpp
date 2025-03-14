//
//  sortowanie-scalanie.cpp
//  2-algorytmika/2-4-algorytmy-sortowania/2-4-1-sortowanie-przez-scalanie/
//
//  Created by Jakub Piskorowski on 19/04/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu sortowania przez scalanie
//
#include <iostream>
// Rand
#include <ctime>
#include <cstdlib>
using namespace std;
 
void MergeSort(int* tab, int l, int r);
void Merge(int* tab, int l, int m, int r);
void PrintTab(int* tab, int n);

int main()
{
	srand(time(NULL));
	int n;
	cout << "Wprowadz liczbe elementow do posortowania: ";
	cin >> n;
	
	int* tab = new int[n];
	for (int i = 0; i < n; i++) {
		tab[i] = (rand() % 99) + 1;
	}

	cout << endl << "Tablica przed posortowaniem:" << endl;
	PrintTab(tab, n);
 
	cout << endl << "Rozpoczecie sortowania" << endl;
	MergeSort(tab, 0, n-1);
 
	cout << endl << "Tablica po sortowaniu:" << endl;
	PrintTab(tab, n);
 
	delete[] tab;
	system("pause");
	return 0;
 
}

void MergeSort(int* tab, int l, int r) {
	if (r > l) {
		int m = (l + r) / 2;
		MergeSort(tab, l, m);
		MergeSort(tab, m + 1, r);
		Merge(tab, l, m, r);
	}
}

void Merge(int* tab, int l, int m, int r)
{
	int lSize = m - l + 1;
	int rSize = r - m;
 
	//Tablice pomocnicze
	int* tabL = new int[lSize];
	int* tabR = new int[rSize];
 
	// Kopiowanie danych do tablic pomocniczych
	for (int x = 0; x < lSize; x++)
		tabL[x] = tab[l + x];
	for (int y = 0; y < rSize; y++)
		tabR[y] = tab[m + 1 + y];
 
	int indexL = 0;
	int indexR = 0;
	int currIndex = l;
 
	//Łączenie tablic R i L
	while(indexL < lSize && indexR < rSize)
	{
		if (tabL[indexL] <= tabR[indexR])
			tab[currIndex] = tabL[indexL++];
		else
			tab[currIndex] = tabR[indexR++];
		currIndex++;
	}
 
	///opiujemy pozostale elementy
	while (indexL < lSize)
		tab[currIndex++] = tabL[indexL++];
 
	while (indexR < rSize)
		tab[currIndex++] = tabR[indexR++];
 
	delete[] tabL;
	delete[] tabR;
}

void PrintTab(int* tab, int n) {
	for (int x = 0; x < n; x++) {
		cout << tab[x] << " | ";
	}
	cout << endl;
}