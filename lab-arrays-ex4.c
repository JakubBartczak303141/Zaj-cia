#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define rozmiar_tab 1000

float rand_float();
float rand_norm();
void histogram(float tab[]);

int main()
{
    srand(time(NULL));
    float liczby[rozmiar_tab];
    for(int a=0;a<rozmiar_tab;a++){
    liczby[a]=rand_norm(); 
    }

    histogram(liczby);
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

void histogram(float tab[]){

    int przedzialy[19]={0};

    for(int a=0;a<rozmiar_tab;a++){

        if((tab[a]>=-2.0)&&(tab[a]<=-1.8)){
            przedzialy[0]++;
        }
            if((tab[a]>-1.8)&&(tab[a]<=-1.6)){
            przedzialy[1]++;
            }
        if((tab[a]>-1.6)&&(tab[a]<=-1.4)){
            przedzialy[2]++;
        }
            if((tab[a]>-1.4)&&(tab[a]<=-1.2)){
            przedzialy[3]++;
            }
        if((tab[a]>-1.2)&&(tab[a]<=-1.0)){
            przedzialy[4]++;
        }
            if((tab[a]>-1.0)&&(tab[a]<=-0.8)){
            przedzialy[5]++;
            }
        if((tab[a]>-0.8)&&(tab[a]<=-0.6)){
            przedzialy[6]++;
        }
            if((tab[a]>-0.6)&&(tab[a]<=-0.4)){
            przedzialy[7]++;
            }
        if((tab[a]>-0.4)&&(tab[a]<=-0.2)){
            przedzialy[8]++;
        }
            if((tab[a]>-0.2)&&(tab[a]<=0.0)){
            przedzialy[9]++;
            }
        if((tab[a]>0.0)&&(tab[a]<=0.2)){
            przedzialy[10]++;
        }
            if((tab[a]>0.2)&&(tab[a]<=0.4)){
            przedzialy[11]++;
            }
        if((tab[a]>0.4)&&(tab[a]<=0.6)){
            przedzialy[12]++;
        }
            if((tab[a]>0.6)&&(tab[a]<=0.8)){
            przedzialy[13]++;
            }
        if((tab[a]>0.8)&&(tab[a]<=1.0)){
            przedzialy[14]++;
        }
            if((tab[a]>1.0)&&(tab[a]<=1.2)){
            przedzialy[15]++;
            }
        if((tab[a]>1.2)&&(tab[a]<=1.4)){
            przedzialy[16]++;
        }
            if((tab[a]>1.4)&&(tab[a]<=1.6)){
            przedzialy[17]++;
            }
        if((tab[a]>1.6)&&(tab[a]<=1.8)){
            przedzialy[18]++;
        }
            if((tab[a]>1.8)&&(tab[a]<=2.0)){
            przedzialy[19]++;
            }
    }

    for(int a=0;a<19;a++){ 
        for(int b=0;b<przedzialy[a];b++){ 
            printf("#");
        }
        printf("\n");
    }
}