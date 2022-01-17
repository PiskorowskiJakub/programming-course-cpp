//
//  p1-przeciazenie.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-4-przeciazenie-funkkcji\
//
//  Created by Jakub Piskorowski on 17/01/2022 wersja: 1.0
//  Copyright © 2021 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie na czym polega przeciazenie nazwy funkcji
//

#include <iostream>
using namespace std;

int suma(int a, int b){
  return a + b;
}

double suma(double a, double b){
  return a + b;
}

int main() {
  int a = 3, b = 2;
  cout << suma(a, b) << endl;
  double c = 1.5, d = 3.5;
  cout << suma(c, d) << endl;
  system("pause");
  return 0;
}