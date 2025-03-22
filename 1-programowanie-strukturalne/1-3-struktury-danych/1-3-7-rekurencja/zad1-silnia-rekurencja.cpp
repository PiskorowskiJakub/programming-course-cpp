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

long long silnia(int n);

int main()
{
    int n;
 
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << n << "! = " << silnia(n) << endl;

	return 0;
}

long long silnia(int n){
 	if(n<2)
        return 1; //silnia z 0 i 1 wynosi 1

	return n*silnia(n-1); //wywołanie funkcji przez samą siebie ze zmniejszonym argumentem
}