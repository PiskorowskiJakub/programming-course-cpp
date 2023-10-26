//
//  ciag-fibonacciego.cpp
//  2-algorytmika/2-8-algorytmy-rekurencyjne/2-8-2-ciag-fibonacciego/
//
//  Created by Jakub Piskorowski on 09/02/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu wyznaczania ciagu fibonacciego
//
#include <iostream>

using namespace std;

int main()
{
    unsigned long long f, f0, f1;
    int i, n;

    f0 = 0;
    f1 = 1;
    cout << "Ile wyrazow ciagu wypisac: ";
    cin >> n;
    for( i = 0; i <= n; i++ ){
        if( i > 1 )
        {
            f  = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else f = i;
        cout << f << endl;
    }

return(0);
}
