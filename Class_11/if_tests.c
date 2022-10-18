#include<stdio.h>

int main(){
 if(1); // iekš () var būt "apaļā" nulle (visi biti ar 0) vai bitu secība, kas satur vismaz vienu bitu ar 1
        // "nosacījums ir spēkā" - rezultātā ir vismaz viens bits ar 0
        // "nosacījums nav spēkā" - rezultātā visi biti ir ar 0

 int a = 10;
 if(a > 7);
   printf("Viena darbība, kas tiek izpildīta, ja \"nosacījums ir spēkā\". \n");
 
 printf("Darbība, kura tiks izpildīta jebkurā gadījumā \n");

 if(a > 7){
   printf("Darbību bloks, kas tiek izpildīta, ja \"nosacījums ir spēkā\". \n");
   printf("Pirmā darbība \n");
   printf("Otrā darbība \n")
   }
 else {  //nesatur nosacījumus, vienmēr "pieder" kādam if, vienmēr atrodas vienas darbības vai to bloka attālumā
   printf("Darbību bloks, kas tiek izpildīta, ja \"nosacījums nav spēkā\". \n");
   printf("Pirmā darbība \n");
   printf("Otrā darbība \n");
   }

 //if(nosacījums);
 //if(nosacījums); else;



 return 0;
 }
