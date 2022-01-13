//
//  petla-for.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-2-petla-for\
//
//  Created by Jakub Piskorowski on 03/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania petli for
//
#include <iostream>
using namespace std;

int main(){

    cout << "-------------------------- \n";
    cout << "Pojedyncza petla" << endl;
    cout << "-------------------------- \n";

    for (int licznik=1; licznik < 5; licznik++){
        cout <<"Wykonuje petle po raz "<< licznik <<endl;
    }

    cout << "\n -------------------------- \n";
    cout << "Petla zagniezdzona" << endl;
    cout << "-------------------------- \n";

    for(int i=0; i < 3; i++){
        for(int j=0; j < 5; j++){
            cout << " i: " << i;
            cout << " j: " << j;
            cout << " | ";
        }
        cout << endl;
    }

    cout << "\n -------------------------- \n";
    cout << "Petla zagniezdzona - prostokat z znaku *" << endl;
    cout << "-------------------------- \n";

    for(int i=0; i < 3; i++){
        for(int j=0; j < 5; j++){
            cout << "*";
        }
        cout << endl;
    }
}