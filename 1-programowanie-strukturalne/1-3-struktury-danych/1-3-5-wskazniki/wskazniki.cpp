//
//  wskazniki.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\
//
//  Created by Jakub Piskorowski on 31/12/2021 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie czym są wskaźniki oraz jak ich używać.
//

#include <iostream>

using namespace std;

int main(){
    
    int telefon = 12345;    //zmienna liczbowa
    int* wsk = &telefon;    //wskaznik "wsk" zawiera adres zmiennej "telefon"

    cout << "*wsk - "<< *wsk << " - wyswietlenie wyluskanej wartosci wskaznika: " << endl;
    cout << "wsk - "<< wsk << " - wyswietlenie adresu zmiennej \"telefon\": " << endl;         //wyswietlenie adresu zmiennej "telefon"
    cout << "&wsk - "<< &wsk << " - wyswietlenie adresu wskaznika: " << endl;
    cout << "&telefon - "<< &telefon << " - wyswietlenie adresu zmiennej \"telefon\": " << endl;    //

    //-----------------------------------------------------------------------------
    //Wartosc wskaznika (zmiennej na ktora wskazuje) mozemy modyfikowac bez uzycia nazwy zmiennej
    cout << "-----------------" << endl;
    cout << "Modyfikacja wskaznika" << endl;
    cout << "-----------------" << endl;
    *wsk = 666;
    cout << *wsk << endl;

    return 0;
}