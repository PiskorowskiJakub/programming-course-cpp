//
//  zad2-suma-roznych-liczb.cpp
//  1-programowanie-strukturalne\1-3-struktury-danych\1-3-4-przeciazenie-funkkcji\
//
//  Created by Jakub Piskorowski on 05/02/2024 wersja: 1.0
//  Copyright © 2024 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//

#include <iostream>
using namespace std;

float suma(int a, int b){
  return a + b;}
float suma(float a, float b){
  return a + b;}
float suma(int a, float b){
  return a + b;}
float suma(float a, int b){
  return a + b;}

int main() {
  float a, b;

  cout << "Podaj pierwsza liczbe: ";
  cin >> a;
  cout << "Podaj druga liczbe: ";
  cin >> b;

  cout << "\nSuma liczb: " << suma(a, b) << endl;
}