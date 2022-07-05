//
//  nww.cpp
//  2-algorytmika/2-2-podstawowe-algorytmy/2-2-2-nww-nwd/
//
//  Created by Jakub Piskorowski on 22/02/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu do obliczenia NWW
//

#include <iostream>

using namespace std;

int main()
{
    int a, b, iloczyn;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    iloczyn = a * b;

    while(a != b)
    {
        if(a > b) {
        a = a - b;
        } else {
            b = b - a;
        }
    }

    cout << "Najmniejsza wspolna wielokrotnosc: " << iloczyn/a << endl;

    return 0;
}
