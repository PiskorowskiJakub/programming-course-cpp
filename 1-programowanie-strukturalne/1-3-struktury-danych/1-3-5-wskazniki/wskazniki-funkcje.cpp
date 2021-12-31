//
//  wskazniki-funkcje.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\
//
//  Created by Jakub Piskorowski on 31/12/2021 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie wskaznikow w funkcjach
//

#include <iostream>

using namespace std;

// funkcja przyjmuje jako argument wskaznik
void zwieksz_liczbe (int *liczba)
{
    *liczba+= 5;
}

int main()
{
    int numerek = 5;
    int *wsk = &numerek;
    cout << "Numerek: " << numerek << endl;

    zwieksz_liczbe(wsk); //przekazujemy wskaznik (bez operatorów)
    
    cout << "Zwiekszony numerek: " << numerek << endl;
    
    zwieksz_liczbe(&numerek); //przekazujemy bezposrednio adres zmiennej (operator &)
    
    cout << "Zwiekszony numerek: " << numerek << endl;
    
    return 0;
}