//
//  set-precision.cpp
//  2-algorytmika/2-8-algorytmy-rekurencyjne/2-8-04-polowienie-przedzialow/
//
//  Created by Jakub Piskorowski on 31/10/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Ustalenie dokladnosci miejsc po przecinku.
//
#include <iostream>     // fixed
#include <iomanip>      // setprecision
using namespace std;

int main(){
	double f =3.14159;

	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
	cout << fixed;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';

	system("pause");
	return 0;
}
