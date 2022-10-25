// cikla operatori
// while
// for
// do while

// while(izteiksme);
// while(izteiksme)
//  ;
// while(izteiksme){}
// aiz while iekavām esošā darbība vai darbības tiks pildītas līdz rezultāts ir "true"
// "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar nulles stāvokli

#include<stdio.h>

int main(){
 int a=10;
 while(a>=0){
   printf("a: %d\n",a);
   a--; // a = a - 1 , a -= 1
 }
 
 printf("a (pēc cikla): %d\n" ,a);

 return 0;
}

