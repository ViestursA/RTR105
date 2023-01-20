#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main(){
 float a, b, eps, h1, h2, h3, integr1=0, integr2, integr3, integr4;
 int k, n1=2, i, n2=6, n3=10;
 double x, summa1=0, summa2=0;
 //priekš gnuplot algoritma
 char cmd[100];

 printf("Ievadiet intervāla sākuma vērtību a = ");
 scanf("%f",&a);

 printf("Ievadiet intervāla beigu vērtību b = ");
 scanf("%f",&b);

 printf("Ievadiet funkcijas precizitāti eps = ");
 scanf("%f",&eps);
 
 sprintf(cmd,"gnuplot -e \"set xrange [a=%f:b=%f];\" laukums.gp",a,b);
 system(cmd);
 
//taisnstūru metode
 integr2 = (b-a)*(atan(a)+atan(b))/n1;
 while(fabs(integr2-integr1)>eps){
  n1*=2;
  h1=(b-a)/n1;
  integr1=integr2;
  integr2=0.;
  for(k=0;k<n1;k++)
   integr2+=h1*atan(a+(k+0.5)*h1);
 }
 printf("Integrāļa vērtība (taisnstūru metode): %.4f\n", integr2);

//trapeces metode
 h3=fabs(b-a)/n3;
  for(i=1;i<n3;i++){
    x=a+i*h3;
    summa1=summa1+atan(x);
  }
  integr4=(h3/2)*(atan(a)+atan(b)+2*summa1);
  printf("Integrāļa vērtība (trapeces metode): %.4f\n", integr4);

//Simpsona metode (1/3) (izmantojot piemēru no https://www.bragitoff.com/2017/08/simpsons-13-rule-c-program/)
  h2=fabs(b-a)/n2;
  for(i=1;i<n2;i++){
    x=a+i*h2;
    if(i%2==0){
      summa2=summa2+2*atan(x);
    }
    else{
      summa2=summa2+4*atan(x);
    }
  }
  integr3=(h2/3)*(atan(a)+atan(b)+summa2);
  printf("Integrāļa vērtība (Simpsona 1/3 metode): %.4f\n", integr3);
  
  system("gnuplot -p laukums.gp");
}
