//
//  4-paczkomat-skrytka.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-3-funkcje\133-zadania\
//
//  Created by Jakub Piskorowski on 17/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przekazanie tablicy do funcji
//

#include <iostream>
using namespace std;

void SprawdzWymiary(float szer, float wys);
bool MalaSkrytka(float width, float height);
bool DuzaSkrytka(float width, float height);

int main()
{
    float szerokosc, wysokosc;
    cout << "Podaj wymiary paczki " << endl;
    cout << "Szerokosc (cm): ";
    cin >> szerokosc;
    cout << "Wysokosc (cm): ";
    cin >> wysokosc;
    SprawdzWymiary(szerokosc, wysokosc);
}
void SprawdzWymiary(float szer, float wys) {
    if (MalaSkrytka(szer, wys))
        cout << "Paczka wejdzie do malej skrytki.";
    else if (DuzaSkrytka(szer, wys))
        cout << "Paczka wejdzie do duzej skrytki";
    else
        cout << "Paczka sie nie zmiesci do paczkomatu";
}
bool MalaSkrytka(float width, float height) {
    bool paczka;
    if (width < 20.6 && height < 7.3)
        return paczka = true;
    else
        return paczka = false;
}
bool DuzaSkrytka(float width, float height) {
    bool paczka;
    if (width < 43.5 && height < 26.5)
        return paczka = true;
    else
        return paczka = false;
}