//
//  calkowanie-numeryczne.cpp
//  2-algorytmika/2-7-algorytmy-iteracyjne/2-7-04-calkowanie-numeryczne/
//
//  Created by Jakub Piskorowski on 03/11/2023 wersja: 1.0
//  Copyright © 2023 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu Calkowania numerycznego - metoda prostokatow
//
#include<iostream>	// fixed
#include<iomanip>	// setprecision
using namespace std;

double F(double x);
double Pole(int a, int b, int n); 
 
int main(){
  int a, b, n;
  cout << "Podaj przedzial [a, b] \na = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "Podaj liczbe trapezow: ";
  cin >> n;
 
  if(!(a<b))
    cout<<"To nie jest przedzial!";
  else
    cout<<"Pole figury wynosi: "<< fixed << setprecision(2) << Pole(a, b, n);  

  return 0;
}


double F(double x){
       //funkcja zawsze przyjmuje wartosci dodatnie
       //wiec mozna pominac wartosc bezwzgledna
       return x*x+x+2;
}
 
double Pole(int a, int b, int n){
  double x = (b-a)/(double)n; //pierwszy bok - kazdy prostokat ma taki sam
  double S = 0.0; //zmienna bedzie przechowywac sume pol trapezow
  double srodek = a+(b-a)/(2.0*n); //srodek pierwszego boku
 
  for(int i=0;i<n;i++){
      S += F(srodek); //obliczenie wysokosci prostokata
      srodek += x; //przejscie do nastepnego srodka    
  }
  return S*x;
}