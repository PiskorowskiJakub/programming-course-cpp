//
//  zad4-bez-powtorzen.cpp
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

    int counter=0;
    for(int i=1; i < 10; i++){
        for(int j=0; j < 10; j++){
            for(int k=0; k < 10; k++){
                    if(i!=j && j!=k && k!=i){
                    cout<< i << j << k << endl;
                    counter++;
                    }
            }
        }
    }
    cout <<"Liczb bez powtarzajacych sie cyfr: "<< counter << endl;

    
}