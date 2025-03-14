//
//  wydawanie-reszty.cpp
//  2-algorytmika/2-5-inne-algorytmy/2-9-2-wydawanie-reszty/
//
//  Created by Jakub Piskorowski on 14/04/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu wydającego reszte
//
#include <iostream>
using namespace std;
 
int main()
{
    //tablica dostepnych nominalow
	int nominaly[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
	int kwota,ile, i=0;
	
	cout << "Podaj reszte do wyplacenia: ";
	cin >> kwota;
	
	while (kwota>0)       //dopoki nie wydano calej reszty
	{
		if (kwota >= nominaly[i])  //sprawdz czy mozna wydac danym nominalem
		{
			ile=kwota / nominaly[i];   //ile razy wydac dany nominal
			kwota=kwota-(nominaly[i]*ile); //zmniejsz reszte o wydany nominal
			cout << nominaly[i] << " x " << ile << endl; //wypisz nominal i ile razy
		}
	i++;            //rozpatrz kolejny nominal
	}
	
	return 0;
}
