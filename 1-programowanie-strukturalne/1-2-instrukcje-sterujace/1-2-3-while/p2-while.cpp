//
//  p2-while.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-3-while\
//
//  Created by Jakub Piskorowski on 20/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania petli while
//
#include <iostream>
using namespace std;

int main()
{
    int iStart;

    iStart = -100;
    while( iStart >= 0 )
    {
        cout << iStart << ", ";
        --iStart;
    } //while
    cout << "Booom! :)" << endl;

    return 0;
}