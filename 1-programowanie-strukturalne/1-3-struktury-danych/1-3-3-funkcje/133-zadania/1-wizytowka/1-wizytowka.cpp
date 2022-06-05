//
//  1-wizytowka.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-3-funkcje\133-zadania\
//
//  Created by Jakub Piskorowski on 03/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie funkcji typu void
//

#include <iostream>
using namespace std;

void Przywitanie(string a, string b);

int main()
{
    string imie, nazwisko;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    Przywitanie(imie, nazwisko);
}

void Przywitanie(string st, string nd) {
    cout << "Witaj "
        << st << " " << nd
        << ". Milego dnia! " << endl;
}



