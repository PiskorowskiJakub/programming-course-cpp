//
//  czas.cpp
//  1-programowanie-strukturalne\1-4-dodatkowe\1-4-2-czas
//
//  Created by Jakub Piskorowski on 30/03/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania funkcji losujacej
//

#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main() {
	chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

	int sum=0; int add = 1;
	int iterations = 1000*100*50;
	float wynik;
	cout << "iteration: " << iterations << endl;
	
	for (int i=0; i<=iterations; i++) {
		if(i % 1000 == 0){
			wynik =(i*100)/iterations;
			system("cls");
			cout<< "Progres: "<< wynik<< " % ";	
		}
    }
	chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

	elapsed_seconds += end - start;	// obliczenie czasu
	cout << "\nCzas: " << endl;
	// wyswietlenie czasu w roznych jednostkach
	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count()<< "\t milliseconds\n";
	cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count()<< "\t seconds\n";
	//cout <<  elapsed_seconds.count() << " second" << endl;
	cout << std::chrono::duration_cast<std::chrono::minutes>(elapsed_seconds).count()<< "\t minutes\n";
	
	

}