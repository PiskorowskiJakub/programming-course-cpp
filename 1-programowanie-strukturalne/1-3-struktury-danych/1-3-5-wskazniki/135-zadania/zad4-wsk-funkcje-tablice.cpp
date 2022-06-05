//
//  zad4-wskk-funkcje-tablice.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\135-zadania\
//
//  Created by Jakub Piskorowski on 17/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie zmiennej wskaznikowej w funkcjach i tablicach
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int SumTab(int tab1[]);

int main(){
    int tab[5];

    cout << "Podaj 5 liczb, ktore nalezy zsumowac: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
	}
    
    cout << "Suma liczb: " << SumTab(tab) << " " << endl;    
}

int SumTab(int tab1[]){
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += tab1[i];
    }
    return suma;
}
