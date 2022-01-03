//
//  funkcje.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-3-funkcje\
//
//  Created by Jakub Piskorowski on 03/01/2021 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie czym sa funkcje oraz jak ich uzywac
//
#include <iostream>
using namespace std;

int Funkcja1(int a, int b);     
void Funkcja2();
void Funkcja3(float a);

int main() {
    int wynik = Funkcja1(4, 6);
    cout << "Wynik: " << wynik << endl;
    cout << "Ten sam wynik" << Funkcja1(4, 6) << endl;

    Funkcja2();

    Funkcja3(4.7);
}

int Funkcja1(int A, int B) {
    int wynik;
    wynik = A + B;
    return wynik;
}

void Funkcja2() {
    cout << "Funkkcja pusta" << endl;
}

void Funkcja3(float liczba) {
    liczba += 10;
    cout << "Wpisales liczbe: " << liczba;
}