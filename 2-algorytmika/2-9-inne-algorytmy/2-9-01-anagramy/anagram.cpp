//
//  anagram.cpp
//  2-algorytmika/2-5-inne-algorytmy/2-9-1-anagramy/
//
//  Created by Jakub Piskorowski on 31/03/2022 wersja: 1.0
//  Copyright © 2022 Jakub Piskorowski. All rights reserved.
//	GitHub: https://github.com/PiskorowskiJakub/programming-course-cpp
//	
//  Przedstawienie algorytmu sprawdzajacego anagramy
//
#include <iostream>
#include <cstring>
using namespace std;
 
bool anagram(char *wyraz1, char *wyraz2);
 
int main()
{
 
   char wyraz1[101], wyraz2[101]; 
   cout<<"Podaj pierwszy wyraz: ";
   cin>>wyraz1;
   cout<<"Podaj drugi wyraz: ";
   cin>>wyraz2;
 
   if(anagram(wyraz1,wyraz2))
     cout<<"Podane wyrazy sa anagramami\n";
   else
     cout<<"Podane wyrazy nie sa anagramami\n";
 

    return 0;
}

bool anagram(char *wyraz1, char *wyraz2)
{
  int dl1 = strlen(wyraz1); 
  int dl2 = strlen(wyraz2);
	if(dl1 != dl2) return false;
  
  	int licz[127]={};
  	for(int i=0;i<dl1;i++)
  		licz[wyraz1[i]]++;

  	for(int i=0;i<dl1;i++)
  		licz[wyraz2[i]]--;
  		
  	for(int i=0;i<127;i++)
  		if(licz[i]!=0) 
			  return false; 
		
  return true; 
} 
