//
//  losowanie.cpp
//  1-programowanie-strukturalne\1-4-dodatkowe\1-4-1-losowanie
//
//  Created by Jakub Piskorowski on 11/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania funkcji losujacej
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	// 50 - ile liczb w przedziale
	// 7 - startowa liczba
	int wylosowana_liczba = (rand() % 50) + 7; // zapisanie wyniku losowania do zmiennej
	for (int i = 0; i <= 10; i++) {
		cout << (rand() % 50) + 7 << endl;
	}
}