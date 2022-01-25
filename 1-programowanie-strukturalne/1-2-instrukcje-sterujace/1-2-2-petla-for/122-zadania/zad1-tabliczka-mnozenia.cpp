//
//  zad1-tabliczka-mnozenia.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-2-petla-for\122-zadania\
//
//  Created by Jakub Piskorowski on 25/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania petli for w zadaniach
//
#include <iostream>
using namespace std;

int main(){

   
    for(int i=1; i <= 10; i++){
        for(int j=1; j <= 10; j++){
            cout <<i << " * " << j << " = " << i*j << endl;
        }
        cout << endl;
    }

    
}