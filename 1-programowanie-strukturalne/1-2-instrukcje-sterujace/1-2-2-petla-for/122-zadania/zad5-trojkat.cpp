//
//  zad5-trojkat.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-2-petla-for\122-zadania\
//
//  Created by Jakub Piskorowski on 26/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania petli for w zadaniach
//
#include <iostream>
using namespace std;

int main(){

    int szerokosc, wysokosc;
   cout << "Podaj szerokosc: " << endl;
   cin >> szerokosc;
   cout << "Podaj wysokosc: " << endl;
   cin >> wysokosc;

    int margin =0;
    for(int i=0; i < wysokosc; i++){
        for(int j=0; j < szerokosc; j++){
            if(j >= margin && j <= szerokosc-margin-1)
                cout << "*";
            else
                cout << " ";
        }
        margin++;
        cout << endl;
    }

    
}