//
//  zad2-wsk.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-5-wskazniki\135-zadania\
//
//  Created by Jakub Piskorowski on 10/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie zmiennej wskaznikowej
//

#include <iostream>
using namespace std;

int main(){

    int n = 3;
    int *wsk = &n;

    cout << "Zawartosc wskaznika wsk: " << *wsk << endl;
    cout << "Adres zmiennej n: " << wsk << endl;
    cout << "Adres zmiennej n: " << &n << endl;
}