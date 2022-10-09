#include <stdio.h>

int main (){
  unsigned long long int  a, b, reizinaajums;
  printf(" Ievadiet divus skaitļus! \n" );
  scanf("%llu %llu" , &a , &b);
  
  reizinaajums = a * b ;
  
  printf("Reizinājums = %llu \n ", reizinaajums );

  return 0;
}
