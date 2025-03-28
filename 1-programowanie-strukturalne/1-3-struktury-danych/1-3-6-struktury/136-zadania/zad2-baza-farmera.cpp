//
//  zad2-baza-farmera.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-6-struktury\136-zadania\
//
//  Created by Jakub Piskorowski on 24/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie dzialania struktur danych
//

#include <iostream>
using namespace std;

struct Ksiegarnia 
{
    string tytul;
    string autor;
    short rok;
    string wydawnictwo;
    float cena;
};

void KsiazkiRok(Ksiegarnia ksiazki1[], short *rok1);
void KsiazkiCena(Ksiegarnia ksiazki1[], float *cena1);
void KsiazkiWydawnictwo(Ksiegarnia ksiazki1[], string *wydawnictwo1);

int main()
{
    Ksiegarnia ksiazki[ 7 ] =
    {
        { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
        { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
        { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
        { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
        { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
        { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
        { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
    };
   
    short wybor, rok;
    float cena;
    string wydawnictwo;
    cout << "Witaj w ksiegarnii"<< endl;
    do{
        cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:\n";
        cout << "1. Rok wydania \n2. Cena \n3. Wydawnictwo\n0. Wyjscie\n";
        cin >> wybor;

        switch (wybor){
        case 1:
            cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
            cin >> rok;
            cout << "Znalezione ksiazki:\n";
            KsiazkiRok(ksiazki, &rok);
            break;
        case 2:
            cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
            cin >> cena;
            cout << "Znalezione ksiazki:\n";
            KsiazkiCena(ksiazki, &cena);
            break;
        case 3:
            cout << "Podaj od jakiego wydawnictwa chcesz zobaczyc ksiazki: ";
            cin >> wydawnictwo;
            cout << "Znalezione ksiazki:\n";
            KsiazkiWydawnictwo(ksiazki, &wydawnictwo);
            break;
        default:
            break;
        }
        cout << endl << endl;
    }while(wybor != 0);

    cin.get();
    return(0);
}

void KsiazkiRok(Ksiegarnia ksiazki1[], short *rok1){
    bool checkRok = false;
    for( short i = 0; i < 7; i++ ) {
        if(ksiazki1[i].rok >= *rok1){
            cout << "Tytul:" << ksiazki1[i].tytul;
            cout << "\tAutor:" << ksiazki1[i].autor;
            cout << "\tRok:" << ksiazki1[i].rok;
            cout << "\tWydawnictwo:" << ksiazki1[i].wydawnictwo;
            cout << "\tCena:" << ksiazki1[i].cena;
            cout << endl; 
            checkRok = true;
        }
    }
    if(checkRok == false)
        cout << "Brak ksiazki";
}

void KsiazkiCena(Ksiegarnia ksiazki1[], float *cena1){
    bool checkCena = false;
    for( short i = 0; i < 7; i++ ) {
        if(ksiazki1[i].cena >= *cena1){
            cout << "Tytul:" << ksiazki1[i].tytul;
            cout << "\tAutor:" << ksiazki1[i].autor;
            cout << "\tRok:" << ksiazki1[i].rok;
            cout << "\tWydawnictwo:" << ksiazki1[i].wydawnictwo;
            cout << "\tCena:" << ksiazki1[i].cena;
            cout << endl;
            checkCena = true;
        }
    }
    if (checkCena == false)
        cout << "Brak ksiazki";
}

void KsiazkiWydawnictwo(Ksiegarnia ksiazki1[], string *wydawnictwo1){
    bool checkWydawnictwo;
    for( short i = 0; i < 7; i++ ) {
        if(ksiazki1[i].wydawnictwo == *wydawnictwo1){
            cout << "Tytul:" << ksiazki1[i].tytul;
            cout << "\tAutor:" << ksiazki1[i].autor;
            cout << "\tRok:" << ksiazki1[i].rok;
            cout << "\tWydawnictwo:" << ksiazki1[i].wydawnictwo;
            cout << "\tCena:" << ksiazki1[i].cena;
            cout << endl;
            checkWydawnictwo = true;
        }
    }
    if (checkWydawnictwo == false)
        cout << "Brak ksiazki";
}