#include <stdio.h>

int main(void) {
  char faktorials_char = 1, a_char, a_test1, faktorials_1 = 1;
  int faktorials_int = 1, tips, a_int, a_test2, faktorials_2 = 1;
  long long faktorials_long = 1, a_long, a_test3, faktorials_3 = 1;
  
  printf("Ievadiet datu tipu(char - 1; int - 2; long long - 3):");
  scanf("%d",&tips);

  //char
  if(tips == 1){
    printf("Ievadiet char datu tipa decimālo skaitli:");
    scanf(" %c",&a_char);

    if(a_char == 0)
      printf("Faktoriāla vērtība ir 0!");

    for(char i = 1; i <= a_char; i++){
      faktorials_char = faktorials_char * i;
    }
    printf("%c faktoriāls ir %c",a_char,faktorials_char);
  }

  //int
  if(tips == 2){
    printf("Ievadiet int datu tipa decimālo skaitli:");
    scanf(" %d",&a_int);

    if(a_int == 0)
      printf("Faktoriāla vērtība ir 0");

    for(int b = 1; b <= a_int; b++){
      faktorials_int = faktorials_int * b;
    }
    printf("%d faktoriāls ir %d \n",a_int,faktorials_int);
  }

  //long long
  if(tips == 3){
    printf("Ievadiet long long datu tipa decimālo skaitli:");
    scanf(" %lld",&a_long);

    if(a_int == 0)
      printf("Faktoriāla vērtība ir 0");

    for(long long c = 1; c <= a_long; c++){
      faktorials_long = faktorials_long * c;
    }
    printf("%lld faktoriāls ir %lld \n",a_long,faktorials_long);
  }
  
  return 0;
}
