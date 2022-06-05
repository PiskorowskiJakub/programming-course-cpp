//
//  zad3.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-1-tablice\131-tablice\
//
//  Created by Jakub Piskorowski on 14/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie tablicy jednowymiarowej
//

#include <iostream>
using namespace std;

int main()
{
    int calkowite[5];
    cout << "Wprowadz 5 liczb dodanich i ujemnych: " << endl;
   for(int i=0; i < 5; i++){
      cin >> calkowite[i];
   }

   cout << "Liczby ujemne zamienione na 0: ";
   for(int i=0; i < 5; i++){
      if (calkowite[i] <= 0){
         calkowite[i] = 0;
         cout << calkowite[i] << ", ";
      }
      else {
         cout << calkowite[i] << ", ";
      }
   }
}




