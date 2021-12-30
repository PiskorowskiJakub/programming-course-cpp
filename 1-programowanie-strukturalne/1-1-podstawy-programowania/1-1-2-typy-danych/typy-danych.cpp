//
//  struktura-programu.cpp
//  1-programowanie-strukturalne\1.1-podstawy-programowania\1.1.1-struktura-prostego-programu-cpp\
//
//  Created by Jakub Piskorowski on 29/12/2021 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie podstawowej struktury programu C++
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // Typy całkowite
    short a = 32767;
    int b = 2147483647;
    long c = 2147483647;
    long long d = 9223372036854775807;
    cout << "short " << a << endl;
    cout << "int " << b << endl;
    cout << "long " << c << endl;
    cout << "long long " << d << endl;


    unsigned short e = 65535;
    unsigned int f = 4294967295;
    unsigned long g = 4294967295;
    unsigned long long h = 18446744073709551615;
    cout << "short " << e << endl;
    cout << "int " << f << endl;
    cout << "long " << g << endl;
    cout << "long long " << h << endl;

    // Typy rzeczywiste
    float i = 1.123456;
    double j = 1.12345678912345;
    long double k = 1.123456789123456;
    cout << "float "<<fixed << setprecision(6) << i << endl;
    cout << "double "<< fixed << setprecision(14) << j << endl;
    cout << "long double "<< fixed << setprecision(15) << k << endl;

    // Typ znakowy
    char l = '$';
    cout << "char " << l << endl;

    // Typ logiczny
    bool m = true;
    bool n = false;
    cout << "bool true " << m << endl;
    cout << "bool false " << n << endl;

    return 0;
}