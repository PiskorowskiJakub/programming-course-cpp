//
//  n-wyraz-ciagu.cpp
//  2-algorytmika/2-8-algorytmy-rekurencyjne/2-8-01-ciagi/
//
//  Created by Jakub Piskorowski on 26/10/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu szybkiego potegowania iteracyjnie
//
#include<iostream>
using namespace std;

long double ciag(int n);

int main()
{
	int n;
	
	cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
	cin >> n;
	cout << n << " wyraz ciagu ma wartosc " << ciag(n) << endl;

	return 0;
}

long double ciag(int n){
	if(n==1) 
		return 1;
	if(n==2) 
		return 0.5;

return -ciag(n-1)*ciag(n-2);
}