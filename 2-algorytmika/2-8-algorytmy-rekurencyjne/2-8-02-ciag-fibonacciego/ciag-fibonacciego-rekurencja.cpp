//
//  ciag-fibonacciego.cpp
//  2-algorytmika/2-8-algorytmy-rekurencyjne/2-8-2-ciag-fibonacciego/
//
//  Created by Jakub Piskorowski on 09/02/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu wyznaczania ciagu fibonacciego
//
#include<iostream>
using namespace std;

long long fib(int n);

int main()
{
	int n;
	
	cout << "Podaj nr wyrazu ciagu: ";
	cin >> n;
	
	cout << n << " wyraz ciagu ma wartosc " << fib(n) << endl;

	return 0;
}

long long fib(int n){
	if(n<3)
		return 1;
	
	return fib(n-2) + fib(n-1);
}
