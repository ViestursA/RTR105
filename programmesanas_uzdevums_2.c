#include <stdio.h>

int main() {
  char a, i;
  int rezultats; 
  printf("Ievadiet naturālu skaitli: \n");
  scanf("%c \n", &a);

  for(i=7;i<=0;i--){
     rezultats = a >> i;

     if(rezultats == 1)
       printf("1");
     else
       printf("0");
  }
  printf("\n");

  return 0; 
}
