//
//  5-malo-duzo.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-3-funkcje\133-zadania\
//
//  Created by Jakub Piskorowski on 04/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie funkcji 
//
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool CheckLiczba(int a, int liczbaRand);
void DuzaMala(int a, int liczbaRand);

int main(){
    srand(time(NULL));
	int wylosowanaLiczba = (rand() % 99) + 1;
    cout << "Wylosowana: " << wylosowanaLiczba;
    int liczba;
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba;

        DuzaMala(liczba, wylosowanaLiczba);

    }while( !(CheckLiczba(liczba, wylosowanaLiczba)) );
}

bool CheckLiczba(int a, int liczbaRand){
    if( a == liczbaRand)
        return true;
    else
        return false;
}

void DuzaMala(int a, int liczbaRand){
    if (a < liczbaRand)
        cout << "Za mala liczba " << endl;
    else if (a > liczbaRand)
        cout << "Za duza liczba " << endl;
    else if (a == liczbaRand)
        cout << "Zgadles" << endl;
}