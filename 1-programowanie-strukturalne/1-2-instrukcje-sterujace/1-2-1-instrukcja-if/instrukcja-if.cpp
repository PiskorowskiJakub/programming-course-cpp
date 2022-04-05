//
//  instrukcja-if.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-1-instrukcja-if\
//
//  Created by Jakub Piskorowski on 10/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania instrukcji sterującej if
//

#include <iostream>

using namespace std;

int main(){

    //-------------------------
    // Badanie znaku liczby
    //-------------------------
    int a;

    cin >> a;
    if(a > 0) cout << "Dodatnia\n";
    else if (a == 0) cout << "Zero\n";
    else cout << "Ujemna\n";

    //-------------------------
    // Funkcje logiczne
    //-------------------------

    bool q = true;
    bool w = true;

    if (q || w) cout << "tak" << endl;
    else cout << "nie" << endl;

    //-------------------------
    // Porownanie liczb zmiennoprzecinkowych
    //-------------------------
    
    double x;

    x = 0.1;
    if(x * 10 == 1) cout << "Sa rowne \n";
    else cout << "Nie sa rowne \n";
    
}
