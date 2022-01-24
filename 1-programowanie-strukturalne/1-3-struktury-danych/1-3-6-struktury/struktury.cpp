//
//  struktury.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-6-struktury\
//
//  Created by Jakub Piskorowski on 24/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie czym sa struktury danych oraz jak ich uzywac
//

//struktura dla uzytkownikow forum
#include <iostream>

using namespace std;

//struktura dla uzytkownikow forum
struct Uzytkownicy_DDT //deklaracja struktury
{
    //opis struktur
    string nick;
    string haslo;
    short lp;
    string status;
    string rodzaj_konta;
};

int main()
{
    //Tworzenie obiektu struktury i wypelnianie
    Uzytkownicy_DDT PiotrSzawdynski =
    {
        "PiotrSzawdynski",
        "!@#$%%^",
        1,
        "Aktywny",
        "Admin"
    };
    /*WAZNE dla niektorych kompilatorow nalezy
    uzyc zapisu static Uzytkownicy_DDT PiotrSzawdynski =*/
    Uzytkownicy_DDT Pietrzuch =
    {
        "Pietrzuch",
        "@m@m$@#@",
        24,
        "Aktywny",
        "Moderator"
    };
    // inny sposob wprowadzania danych do obiektu 
    // tworzenie obiektu
    Uzytkownicy_DDT Piotrus_Pan;
    // wypelnianie obiektu wartosciami dla poszczegolnych typow danych
    Piotrus_Pan.haslo = "PanPiotr";
    Piotrus_Pan.lp = 927;
    Piotrus_Pan.nick = "Piotrus_Pan";
    Piotrus_Pan.rodzaj_konta = "Uzytkownik";
    Piotrus_Pan.status = "zablokowany";
   
    //wyswietlenie obiektow
    cout << "Oto lista uzytkownikow forum DDT"
    << endl << "Nick " << PiotrSzawdynski.nick
    << endl << "Haslo " << PiotrSzawdynski.haslo
    << endl << "Nr usera " << PiotrSzawdynski.lp
    << endl << "Status " << PiotrSzawdynski.status
    << endl << "Rodzaj Konta "
    << PiotrSzawdynski.rodzaj_konta
    << endl
    << endl << "Nick " << Pietrzuch.nick
    << endl << "Haslo " << Pietrzuch.haslo
    << endl << "Nr usera " << Pietrzuch.lp
    << endl << "Status " << Pietrzuch.status
    << endl << "Rodzaj Konta "
    << Pietrzuch.rodzaj_konta
    << endl
    << endl << "Nick " << Piotrus_Pan.nick
    << endl << "Haslo " << Piotrus_Pan.haslo
    << endl << "Nr usera " << Piotrus_Pan.lp
    << endl << "Status " << Piotrus_Pan.status
    << endl << "Rodzaj Konta "
    << Piotrus_Pan.rodzaj_konta;
   
    cin.get();
    return( 0 );
}