//
//  polowienie-przedzialow-rekurencyjnie.cpp
//  2-algorytmika/2-8-algorytmy-rekurencyjne/2-8-04-polowienie-przedzialow/
//
//  Created by Jakub Piskorowski on 31/10/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu znajdowania miejsca zerowego metoda polowienia przedzialow
//
#include<iostream>	// fixed
#include<iomanip>	// setprecision
using namespace std;

double F(double x);
double PolowieniePrzedzialow(double a, double b, double epsilon);

int main()
{
	double a = -10, b = 10, epsilon = 0.00001;
	
	cout << "Znalezione miejsce zerowe wynosi: ";
	cout << fixed << setprecision(5) << PolowieniePrzedzialow(a, b, epsilon);

	return 0;
}

double F(double x){
	//rozpatrujemy wielomian f(x) = x^3 - 3x^2 + 2x - 6 
	return x*(x*(x-3)+2)-6; //rozbijam schematem Hornera
}

double PolowieniePrzedzialow(double a, double b, double epsilon){
	if(F(a)==0.0)return a;
	if(F(b)==0.0)return b;
	
	double srodek = (a+b)/2;
	
	if(b-a <= epsilon) return srodek;
		
	if(F(a)*F(srodek)<0) 
		return PolowieniePrzedzialow(a, srodek, epsilon);
		
	return PolowieniePrzedzialow(srodek, b, epsilon);
}
