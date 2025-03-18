//
//  iteracyjnie-szybkie-potegowanie.cpp
//  2-algorytmika/2-7-algorytmy-iteracyjne/2-7-02-potegowanie-szybkie/
//
//  Created by Jakub Piskorowski on 30/08/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu szybkiego potegowania iteracyjnie
//
#include <iostream>

using namespace std;

long long PotegowanieSzybkie(long long a, unsigned int n);

int main()
{
	unsigned int n;
	long long a;
	
	cout<<"Podaj podstawe: ";
	cin>>a;
	cout<<"Podaj wykladnik: ";
	cin>>n;
	
	cout<<a<<" do potegi "<<n<<" wynosi: "<<PotegowanieSzybkie(a, n);

	return 0;
}

long long PotegowanieSzybkie(long long a, unsigned int n)
{
	long long w = 1;
	
	while(n>0)
	{
		if (n%2 == 1){
			w *= a;
			cout << "w: " << w << endl;}
			
		a*= a;
		cout << "a: " << a << endl;
		n/=2;
		cout << "n: " << n << endl; 
		cout << "-------" << endl;
	}
	return w;
}