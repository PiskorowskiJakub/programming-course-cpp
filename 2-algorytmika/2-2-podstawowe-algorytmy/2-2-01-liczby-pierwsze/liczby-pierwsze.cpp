//
//  liczby-pierwsze.cpp
//  2-algorytmika/2-2-podstawowe-algorytmy/2-2-1-liczby-pierwsze/
//
//  Created by Jakub Piskorowski on 09/02/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu wyznaczania liczb pierwszych
//

#include <iostream>

using namespace std;

int main( )
{
  unsigned int n, lp, p, d;
  bool t;

  cout << "Ile liczb pierwszych chcesz wyswietlic: ";
  cin >> n;
  lp = 0;
  p  = 2;
  cout << "Liczby pierwsze: ";
  while( lp < n )
  {
    t = true;
    for( d = 2; d < p; d++ ){
      if( p % d == 0 )
      {
        t = false;
 
      }
    }
    if( t )
    {
        cout << p << ", ";
        lp++;
    }
    p++;
  }
  cout << endl;
  return 0;
} 
