#include <stdio.h>

int main(void) {
  char faktorials_char = 1, a_char;
  int faktorials_int = 1, tips, a_int;
  long long faktorials_long = 1, a_long;
  
  printf("Ievadiet datu tipu(char - 1; int - 2; long long - 3):");
  scanf("%d",&tips);

  //char
  if(tips == 1){
    printf("Ievadiet char datu tipa decimālo skaitli:");
    scanf(" %c",&a_char);

    if(a_char == 0)
      printf("Faktoriāla vērtība ir 0!");

    while(a_char>0){
      faktorials_char = faktorials_char * a_char;
      a_char--;
    }
    printf("Faktoriāla vērtība ir %c",faktorials_char);
  }

  //int
  if(tips == 2){
    printf("Ievadiet int datu tipa decimālo skaitli:");
    scanf("%d",&a_int);

    if(a_int == 0)
      printf("Faktoriāla vērtība ir 0");

    while(a_int>0){
      faktorials_int = faktorials_int * a_int;
      a_int--;
    }
    printf("Faktoriāla vērtība ir %d \n",faktorials_int);
  }

  //long long
  if(tips == 3){
    printf("Ievadiet long long datu tipa decimālo skaitli:");
    scanf("%lld",&a_long);

    if(a_int == 0)
      printf("Faktoriāla vērtība ir 0");

    while(a_int>0){
      faktorials_long = faktorials_long * a_long;
      a_long--;
    }
    printf("Faktoriāla vērtība ir %lld \n",faktorials_long);
  }
  
  return 0;
}
