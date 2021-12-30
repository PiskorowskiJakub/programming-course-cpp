//
//  struktura-programu.cpp
//  1-programowanie-strukturalne\1.1-podstawy-programowania\1.1.1-struktura-prostego-programu-cpp\
//
//  Created by Jakub Piskorowski on 29/12/2021 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie podstawowej struktury programu C++
//

#include <iostream>

using namespace std;

int main(){

    cout << "Wyswietlany tekst"; // wyswietlanie tekstu
    cout << endl; // znak konca linii
    cout << "znak konca linii: \n"; // znak konca linii w tekscie
    cout << "Znak tabulatora: \t"; // znak tabulatora w tekscie
    
    cout << "Podaj liczbe: ";
    int x;
    cin >> x;   // pobranie z konsoli wartosci i przypisanie jej do zmiennej
    
    cout << "Wartosc: " << x << " " << endl; // wyswietlenie wartosci zmiennej miedzy tekstem
    cout << x << endl; // wyswietlenie wartosci zmiennej

    cout << "--------------------\n";
    cout << "operatory arytmetyczne" << endl;
    cout << "--------------------\n";
    int a = 10, b = 3, wynik1;
    wynik1 = a / b; 
    cout << "wynik1: " << wynik1 << endl;
    wynik1 = a % b; 
    cout << "wynik1: " << wynik1 << endl;

    wynik1 = b% a;
    cout << "wynik1: " << wynik1 << endl;
    float c = 10, d = 3, wynik2;
    wynik2 = c / d; 
    cout << "wynik2: " << wynik2 << endl;


    cout << "--------------------\n";
    cout << "operatory logiczne" << endl;
    cout << "--------------------\n";

    int n = 5; int k = 7;
    bool warunek = n > 3 || k > 10; 
    cout << "warunek: " << warunek << endl;

    n = 5; k = 7;
    warunek = n > 3 && k > 10;
    cout << "warunek: " << warunek << endl;

    n = 5; k = 7;
    warunek = !(n > 3 && k > 10);
    cout << "warunek: " << warunek << endl;

    cout << "--------------------\n";
    cout << "operatory relacyjne" << endl;
    cout << "--------------------\n";

    a = 8; b = 7;
    if(a == b) 
        cout<<"a jest rowne b"; 
    else
        cout<<"a nie jest rowne b";

    cout << "\n--------------------\n";
    cout << "operator przypisania" << endl;
    cout << "--------------------\n";

    int q = 45; 
    cout << "q: " << q << endl;
    int w = q; 
    cout << "w: " << w << endl;
    int e = w * (q - w);
    cout << "z: " << e << endl;

    cout << "--------------------\n";
    cout << "inkrementacja i dekrementacja" << endl;
    cout << "--------------------\n";

    c = 1;
    c = c + 1;
    cout << "c = c + 1; c=" << c << endl;
    c += 1;
    cout << "c += 1; c=" << c << endl;
    c++;
    cout << "c++; c=" << c << endl;
    c--;
    cout << "c--; c=" << c << endl;


    a = 1;
    b = a ++;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    a = 1;
    b = ++a;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}