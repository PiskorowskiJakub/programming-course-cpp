//
//  p1-dowhile.cpp
//  1-programowanie-strukturalne\1-2-instrukcje-sterujace\1-2-4-do-while\
//
//  Created by Jakub Piskorowski on 12/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania petli do while
//
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }while (i < 5);

    return 0;
}