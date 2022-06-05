//
//  zad3-wsk-funkcje.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\135-zadania\
//
//  Created by Jakub Piskorowski on 10/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie zmiennej wskaznikowej w funkcjach
//

#include <iostream>
using namespace std;

void Funkcja(float *x, float *y, float *z);

int main(){
    float a = 1, b = 1, c = 1;
    float *a1 = &a;
    float *b1 = &b;
    float *c1 = &c;

    cout << "wartosci zmiennych" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    

    Funkcja(&a, &b, &c);

    cout << "wartosci zmiennych po modyfiacji" << endl;
    cout << "a: " << *a1 << endl;
    cout << "b: " << *b1 << endl;
    cout << "c: " << *c1 << endl;
    
}

void Funkcja(float *x, float *y, float *z){
    *x += 1;
    *y += 2;
    *z += 3;
}