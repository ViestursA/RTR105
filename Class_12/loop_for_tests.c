// cikla operatori
// while
// for
// do while

#include<stdio.h>

int main(){
 int a;
 for(a=10; a>=0; a--)
// darbības pirms pirmā ; tiek izpildītas tikai vienu reizi cikla sākumā
// tālāk izteiksmes rezultāta aprēķins (nosacījums pārbaude)
// cikla ķermeņa darbību pildīšana
// cikla mainīgo izmaiņa - aprakstīta aiz otrā ;
// turpinājumā cikla izteiksmes aprēķins utt...
   {
   printf("a: %d\n",a);
   }

 printf("a (pēc cikla): %d\n" ,a);

 return 0;
}

