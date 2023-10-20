//
//  rekurencja.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-7-rekurencja\
//
//  Created by Jakub Piskorowski on 19/10/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie działania rekurencji
//

#include <iostream>
using namespace std;

long long suma(int n);

int main()
{
    int n;
	
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Suma " << n << " kolejnych liczb naturalnych wynosi " << suma(n) << endl;

	return 0;
}

long long suma(int n){
	if(n<1) 
		return 0;
	
	return n+suma(n-1);
}