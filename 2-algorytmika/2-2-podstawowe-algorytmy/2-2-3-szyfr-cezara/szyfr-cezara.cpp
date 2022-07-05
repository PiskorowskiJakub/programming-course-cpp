//
//  szyfr-cezara.cpp
//  2-algorytmika/2-2-podstawowe-algorytmy/2-2-3-szyfr-cezara/
//
//  Created by Jakub Piskorowski on 22/02/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie szyfry Cezara
//

#include <iostream>
#include <cstring> // do strlen()

using namespace std;

void szyfruj(short klucz, char tab[]);

int main()
{
	char tab[200]; 
	short klucz;
	
	cout<<"Podaj wyraz skladajacy sie z malych liter: ";
	cin>>tab;
	
	cout<<"Podaj klucz z przedzialu [-26..26]: ";
	cin>>klucz;
	
	szyfruj(klucz,tab); //szyfrowanie
	
	cout<<"Po zaszyfrowaniu: "<<tab<<endl;
	
	szyfruj(-klucz,tab); //deszyfrowanie
	
	cout<<"Po rozszyfrowaniu: "<<tab<<endl;

	return 0;
} 

void szyfruj(short klucz, char tab[])
{
	int dl = strlen(tab); 
	if(!(klucz >= -26 && klucz <= 26)) return;
	
	if(klucz >= 0){
		for(int i=0;i<dl;i++){
		if(tab[i] + klucz <= 'z')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz - 26; 
        }
    }
	else{
		for(int i=0;i<dl;i++){
		if(tab[i] + klucz >= 'a')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz + 26;
        }
    }
}
