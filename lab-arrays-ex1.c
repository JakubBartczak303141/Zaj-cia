void printtab(int n){
  static int tab[100*n]; //Rozmair tablicy musi być stały
  static int tab[100*n];
  /*
  lab-arrays-ex1.c:4:14: error: storage size of ‘tab’ isn’t constant
    4 |   static int tab[100*n]; 
  Rozmiar tablicy musi być stały
  */
}

int main(){
   int a[5] = {1,2,3,4,5};
   int b[] = {6,7,8,9,0};
   int c[5] = {0,2,3,4,5,6}  //Rozmiar tablicy ma 5 elementów a przóbujemy przyspisać ich 6
   int *ptr = a;  //brak średnika na końcu poprzedniej lini 

   a = b; //Powinniśmy użyć pętli aby przypisać wartości o odpowiadających sobie indeksach
   b = ptr; //Zamiast ptr powinno być *ptr , jest to zmienna wskaźnikowa 
   int c[5] = {0,2,3,4,5,6}  
   /*
   lab-arrays-ex1.c:10:26: warning: excess elements in array initializer
   10 |    int c[5] = {0,2,3,4,5,6} 

   Zbyt dużo elementów przypisanych do danej tablicy
   */

   int *ptr = a;  
  /*
  lab-arrays-ex1.c:19:4: error: expected ‘,’ or ‘;’ before ‘int’
   19 |    int *ptr = a; 

  brak średnika na końcu poprzedniej lini
  */


   a = b; 
   /*
  lab-arrays-ex1.c:21:6: error: assignment to expression with array type
   21 |    a = b; 
      |   
  w C nie isteniej taka operacja 
  */

   b = ptr; 
   /*
    lab-arrays-ex1.c:22:8: error: ‘ptr’ undeclared (first use in this function)
   22 |    b = ptr; 
  zamiast ptr powinno być *ptr bo ptr nie istnieje
   */
   return 0;
}