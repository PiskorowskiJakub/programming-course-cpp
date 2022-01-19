//
//  ins-switch.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-5-switch\
//
//  Created by Jakub Piskorowski on 19/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania instrukcji sterującej switch
//

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    switch( liczba )
    {
    case 2:
        cout << "dwa" << endl;
        break;
    case 1:
        cout << "jeden" << endl;
        break;
    case 3:
        cout << "trzy" << endl;
        break;
    default:
        cout << "ani jeden, ani dwa, ani trzy" << std::endl;
        break;
    }
    return 0;
}
