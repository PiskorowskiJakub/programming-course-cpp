//
//  zad6-tabliczka-v2.cpp
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

    //gorne cyfry plus linia
   for(int i=1; i <= 2; i++){
       cout << endl;
       if (i == 2) cout << "----";
        for(int j=1; j <= szerokosc; j++){
            if(i == 1){
                if(j == 1 ) cout << "  | ";
                    cout << j << "\t"; // gorne cyfry
            }
            else if (i == 2) cout << "--------";
        }
   }
    cout << endl;
    for(int i=1; i <= wysokosc; i++){
        cout << i << " | "; // lewa linia
        for(int j=1; j <= szerokosc; j++){
           cout << i*j << "\t";
        }
        cout << " |"<< endl;    // prawa linia
    }

    // Dolna linia
    for(int j=1; j <= szerokosc; j++){
        if(j == 1 ) cout << "----";
            cout << "--------";
    }
    
}