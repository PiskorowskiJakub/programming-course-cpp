//
//  zad1-suma-liczb.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-4-przeciazenie-funkkcji\
//
//  Created by Jakub Piskorowski on 05/02/2024 wersja: 1.0
//  Copyright © 2024 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
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
  int a, b;
  double x, y;

  cout << "Podaj dwie liczby calkowite: ";
  cin >> a >> b;

  cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
  cin >> x >> y;

  cout << "\nSuma liczb calkowitych: " << suma(a, b) << endl;
  cout << "Suma liczb zmiennoprzecinkowych: " << suma(x, y) << endl;

}