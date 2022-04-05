//  zad1-kalkulator.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-5-switch\125-zadania
//
//  Created by Jakub Piskorowski on 19/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania instrukcji switch
//
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char dzialanie;

    cout << "Podaj liczbe a: " << endl;
    cin >> a;
    cout << "Podaj liczbe b: " << endl;
    cin >> b;
    cout << "Wybierz dzialanie (+, -, *, /):" << endl;
    cin >> dzialanie;

    switch(dzialanie){
        case '+':
            cout << "wynik dodawania: " << a + b << endl;
            break;
        case '-':
            cout << "wynik dodawania: " << a - b << endl;
            break;
        case '*':
            cout << "wynik dodawania: " << a * b << endl;
            break;
        case '/':
            cout << "wynik dodawania: " << a / b << endl;
            break;
    }
   
    return 0;
}