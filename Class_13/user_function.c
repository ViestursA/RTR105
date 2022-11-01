#include<stdio.h>

char dialogs(); //funkcijas deklarēšana
char dialogs_i(int i_dialogs_arg);
//char dialogs_i(int i_dialogs_arg); argumenti var būt vairāki
//piemēram:
void test1(int a,int b,int c); // atslēgas void nozīmē, ka return nebūs
void test2(int a, double b); //datu tips jāpiemin katram argumentam

//funkcijas definēšana:
//          *var būt uzreiz bez deklarēšanas;
//          *definēšana var būt ievietota pēc main apraksta;
//          *deklarēšanai vai definēšanai ir jābūt pirms funkcijas izmantošanas.)
//funkcijas datu tipam ir jāsaskan ar atgriežama lieluma (pie return) datu tipu

int main(){
 char c_main_local;
 c_main_local = 10;
/*
 printf("Ievadiet vienu naturālu skaitli: ");
 scanf("%hhd", &c);
 printf("Ir ievadīts skaitlis: %d\n",c);
*/

 /*{ .... } */

/*
 printf("Ievadiet vienu naturālu skaitli: ");
 scanf("%hhd", &c);
 printf("Ir ievadīts skaitlis: %d\n",c);
*/

 c_main_local = dialogs();
 printf("Ir ievadīts skaitlis (izdruka no main funkcijas): %d\n",c_main_local);

 dialogs();

 int i_main = 1;
 dialogs_i(i_main);
 i_main++;
 dialogs_i(i_main);

 return 0;
 }

char dialogs(){

 char c_dialogs_local;

 printf("Ievadiet vienu naturālu skaitli: ");
 scanf("%hhd", &c_dialogs_local);
 printf("Ir ievadīts skaitlis (izdruka no dialogs funkcijas): %d\n",c_dialogs_local);

 return c_dialogs_local;
 }

char dialogs_i(int i_dialogs_arg){

 char c_dialogs_local;

 printf("\nFunkcijas dialogs_i tiek izpildīta %d. reizi: \n", i_dialogs_arg);
 printf("Ievadiet vienu naturālu skaitli: ");
 scanf("%hhd", &c_dialogs_local);
 printf("Ir ievadīts skaitlis (izdruka no dialogs funkcijas): %d\n",c_dialogs_local);

 return c_dialogs_local;
 }
