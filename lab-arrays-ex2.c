#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float rand_float();
float rand_norm();

int main()
{
  
  srand(time(NULL));

  float liczby[100];
  
  for(int a=0;a<100;a++){
    liczby[i]=rand_norm(); 

  float suma=0;
  for(int a=0;a<100;a++){
    suma+=liczby[i];
  }
  float srednia,wariancja;
  srednia=suma/100.0;

  suma=0.0; 
  for(int a=0;a<100;a++){
    suma+=pow((liczby[i]-srednia),2.0);
  }
  wariancja=suma/100.0;

  
  printf("Srednia wynosi: %f\n",srednia);
  printf("Wariancja wynosi: %f\n",wariancja);

  return 0;
}

float rand_float() {
   return rand()/(float)RAND_MAX;
}

float rand_norm(){
  float wynik;
  while(1){

    wynik=(cos(2*3.14*rand_float())*sqrt(-2.*log(rand_float())));
    return wynik;
  }
}