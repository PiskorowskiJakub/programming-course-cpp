//
//  wyszukiwanie-naturalne.cpp
//  2-algorytmika/2-2-podstawowe-algorytmy/2-3-1-wyszukiwanie-naturalne/
//
//  Created by Jakub Piskorowski on 14/03/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu wyszukiwania naturalnego
//
#include <iostream>

using namespace std;

int main()
{
    int tab[25] ={2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int liczby[25];
    short szukana;
    short index = 0;

    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;

    for(int i=0; i< sizeof(tab); i++){
        if(tab[i] == szukana){
            liczby[index] = i;
            index++;
        }
    }

    cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int i =0; i < index; i++){
        cout << liczby[i] << ", ";
    }
}
