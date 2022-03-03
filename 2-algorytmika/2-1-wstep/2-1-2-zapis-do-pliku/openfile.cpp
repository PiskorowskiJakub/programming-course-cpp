//
//  openfile.cpp
//  2-algorytmika\2-1-wstep\2-1-2-zlozonosc-obliczeniowa\
//
//  Created by Jakub Piskorowski on 03/03/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania funkcji operacji na plikach
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik("testplik.txt");
    string dane[10];

    if(!plik.good())
    {
        cout << "BLAD" << endl;
        return 0;
    }
    cout<<"OK"<<endl;

    for(int i = 0; !plik.eof(); i++){
        getline(plik, dane[i]);
        cout << dane[i] << endl;    
    } 
    
    plik.close();
    return 0;
}