//
//  sortowanie-wybieranie.cpp
//  2-algorytmika/2-4-algorytmy-sortowania/2-4-2-sortowanie-przez-wybieranie/
//
//  Created by Jakub Piskorowski on 05/05/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu sortowania przez wybieranie
//
#include <iostream>
// Rand
#include <ctime>
#include <cstdlib>
using namespace std;
 
void SelectionSort(int* tab,int n);
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
	SelectionSort(tab, n);
 
	cout << endl << "Tablica po sortowaniu:" << endl;
	PrintTab(tab, n);
 
	delete[] tab;
	system("pause");
	return 0;
 
}

void SelectionSort(int* tab,int n){
	int index;
	int val;
	for(int i=0;i<n-1;i++){
		index = i;
		for(int j=i+1;j<n;j++)
			if(tab[j]<tab[index])
				index = j;

		
		val = tab[i];
		tab[i] = tab[index];
		tab[index] = val;
		//swap(tab[i], tab[index]);
	}
}



void PrintTab(int* tab, int n) {
	for (int x = 0; x < n; x++) {
		cout << tab[x] << " | ";
	}
	cout << endl;
}