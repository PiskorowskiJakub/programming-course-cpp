//
//  tablice.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-1-tablice\
//
//  Created by Jakub Piskorowski on 19/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania tablic
//
#include <iostream>
using namespace std;

int main(){
    int liczby[ 3 ];
    cout << "Podaj liczbe 1:";
    cin >> liczby[ 0 ];
    cout << "Podaj liczbe 2:";
    cin >> liczby[ 1 ];
    liczby[ 2 ] = 567;
    cout << "liczby[2] wynosi " << liczby[ 2 ] << endl;
    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
    cout << "Suma trzech liczb wynosi:" << suma << endl;

    cout << "--------------------------------------------------------\n";
    cout << "Uzupelnienie tablicy jednowymiarowej i wysiwetlenie jej" << endl;
    cout << "--------------------------------------------------------\n";

    int liczba[ 5 ];
    cout << "Podaj 5 liczb: " << endl;
    for(int i=0; i <5; i++)
    {
        cin >> liczba[ i ];
    }

    cout << "Podales nastepujace liczby: ";
    for(int i=0; i <5; i++)
    {
        cout << liczba[ i ] << ", ";
    }

    cout << "\n--------------------------------------------------------\n";
    cout << "Uzupelnienie tablicy dwuwymiarowej i wysiwetlenie jej" << endl;
    cout << "--------------------------------------------------------\n";

    int tab[3][4]; 
    cout << "Podaj 12 liczb: " << endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cin >> tab[i][j] ;  
        }
    }

    cout << "Podales nastepujace liczby: " << endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout << tab[i][j];  
        }
        cout << endl;
    }
}