//
//  zad4.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-1-tablice\131-tablice\
//
//  Created by Jakub Piskorowski on 14/01/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Zastosowanie tablicy dwuwymiarowej
//

#include <iostream>
using namespace std;

int main()
{
   int tab[3][5];
    int id =1;
     for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            tab[i][j] = id;
            id+=1;
        }
    }

    for (int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}




