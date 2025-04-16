//
//  zad4-male-na-duze.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-2-tablice-znakowe\132-zadania\
//
//  Created by Jakub Piskorowski on 21/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie tablicy znakowej
//

#include<iostream>
using namespace std;

int main()
{
	int k;
	char zdanie[3][100];
	for(int i=0; i<3; i++){
		cout<<"Podaj "<< i+1 << " zdanie: ";
		cin.getline(zdanie[i],100);
	}
	
	for(int i=2;i>=0;i--) //pętla odpowiedzialna za wypisanie w odwrotnej kolejności 
	{
		int k = 0; //ustawienie na czytanie pierwszegj komórki tablicy
		while(zdanie[i][k]) //dopóki nie napotkamy znak końca linii, pętla będzie sie wykonywać
		{
			if(zdanie[i][k] >= 97 && zdanie[i][k] <= 122) //sprawdzenie czy znak jest małą literą
				cout<<char(zdanie[i][k]-32); 	//jeśli tak to przesuwamy ją do dużej litery
			else	
				cout<<char(zdanie[i][k]);
			++k;	//przeskoczenie do następnej komórki tablicy
		}
		cout<<endl;
	}
	
	return 0;
}




