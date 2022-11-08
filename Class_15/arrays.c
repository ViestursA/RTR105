// masīvi - secīgi novietotas vērtības atmiņā iegūstamas ar viena identifikatora palīdzību
// piemēram, a[0], a[1] , a[2]
// alternatīva - a0, a1 , a2 - sarežģītāk jo nav iespējama algoritmizācija, jo
// vērtībām ir manuāli jāmaina mainīgā vārds, bet masīviem maina tikai indeksus

// masīva pirmā elementa indekss ir 0
// masīvam arī ir adrese (masīva vārds ir norāde) - tā ir 0. elementa adrese

#include <stdio.h>

int main (){
 int i_array_1[10]; //int lieluma masīva deklarēšana (piesaukt drīkst, bet vērtības nav zināmas)

 int i_array_2[3] = {1,2,3}; //int lielumu masīva definēšana
 int i_array_3[5] = {4,5,6}; //masīva pēdējie divi elementi būs ar 0 vērtībām
 int i_array_with_zeros[5] = {0}; //masīva visas vērtības ir nulles

 int i_array_2D[2][3] = {{7,8,9},
                         {10,11,12}}; // [2 - rindu sk.] [3 - kolonnu sk.]
                                      // dimensijas var būt vairākas

 printf("masīva i_array_2 adrese: %p\n",i_array_2);

 printf("\nmasīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",*i_array_2);

 printf("\nmasīva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",*(i_array_2+1));

 printf("\nmasīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",*(i_array_2+2));

 printf("\n\nmasīva i_array_2D 0.2. elementa adrese: %p\n",&i_array_2D[0][2]);
 printf("masīva i_array_2D 0,2. elementa vērtība: %d\n",i_array_2D[0][2]);
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",*(*(i_array_2D+0)+2));

 printf("\nmasīva i_array_2D 1.0. elementa adrese: %p\n",&i_array_2D[1][0]);
 printf("masīva i_array_2D 1.0. elementa vērtība: %d\n",i_array_2D[1][0]);
 printf("masīva i_array_2D 1.0. elementa vērtība: %d\n",*(*(i_array_2D+1)+0));

 return 0;
}
