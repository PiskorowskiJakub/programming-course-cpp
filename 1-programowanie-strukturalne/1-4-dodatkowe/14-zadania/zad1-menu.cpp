//
//  zad1-menu.cpp
//  1-programowanie-strukturalne\1-4-dodatkowe\14-zadania
//
//  Created by Jakub Piskorowski on 14/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Rozwiazanie zadania z menu
//

#include <iostream>
using namespace std;

int main()
{
	int wybor, suma = 0;

	cout << "Menu \n";
	cout << "1. Myszka 73zl \n";
	cout << "2. Klawiatura 85zl \n";
	cout << "3. Podklada 34zl \n";
	cout << "0. wyjscie \n";

	do{
	cin >> wybor;
	switch(wybor){
		case 1:
			suma += 73;
			cout << "Wybrales myszke, dodano 73 zl do koszyka \n";
			break;
		case 2:
			suma += 85;
			cout << "Wybrales klawiature, dodano 85 zl do koszykka \n";
			break;
		case 3:
			suma += 34;
			cout << "Wybrales podkladke, dodano 34 zl do koszyka\n";
			break;
	}
	}while(wybor != 0);

	cout << "Do zaplaty: " << suma << " zl";
}