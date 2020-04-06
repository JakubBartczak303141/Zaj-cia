#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float rand_float();
float rand_norm();

int main()
{
  srand(time(NULL));
  float liczby[100];
  for(int i=0;i<100;i++){
    liczby[i]=rand_norm();
  }
float max,min;
max=liczby[0];
min=max;
for(int i=0;i<100;i++){

    if(liczby[i]>max){
        max=liczby[i];
    }
    if(liczby[i]<min){
        min=liczby[i];
    }
}
    printf("Najwieksza liczba: %f\n",max);
    printf("Najmniejsza liczba: %f\n",min);
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