//
//  3-max-war.cpp
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

int MaxFun(int n[])
{
    int max = n[0];
    for (int i = 0; i < 5; i++)
        if (n[i] > max)
            max = n[i];
    return max;
}


int main()
{
    
    int liczby[5];
    cout << "Podaj 5 liczb: ";
    for(int i=0; i<5; i++)
        cin >> liczby[i];
    
    cout << "Najwieksza liczba: " << MaxFun(liczby) << endl;

    system("pause");
	return 0;
}