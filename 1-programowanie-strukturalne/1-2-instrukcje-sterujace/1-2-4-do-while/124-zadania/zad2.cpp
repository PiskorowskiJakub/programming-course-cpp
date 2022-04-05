//  zad2.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-4-do-while\124-zadania
//
//  Created by Jakub Piskorowski on 12/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania petli do while
//
#include <iostream>
using namespace std;
int main()
{
    int ile;
   
    cout << "Ile razy wypisac napis? ";
    cin >> ile;
    int pozycja = 1;
    if( ile > 0 )
    do
    {
        cout << "Napis nr" << pozycja << endl;
        pozycja++;
        ile--;
    } while( ile > 0 );
   
    return 0;
}