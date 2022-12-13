#include<stdio.h>
#include<math.h>

void main(){
 float a, b, eps, h, integr1=0, integr2;
 int k, n=2;

 printf("Ievadiet intervāla sākuma vērtību a = ");
 scanf("%f\n",&a);

 printf("Ievadiet intervāla beigu vērtību b = ");
 scanf("%f\n",&b);

 printf("Ievadiet funkcijas precizitāti eps = ");
 scanf("%f\n",&eps);

 integr2 = (b-a)*(atan(a)+atan(b))/n;
 while(fabs(integr2-integr1)>eps){
  n*=2;
  h=(b-a)/n;
  integr1=integr2;
  integr2=0.;
  for(k=0;k<n;k++)
   integr2+=h*atan(a+(k+0.5)*h);
 }
 printf("Integrāļa vērtība: %.2f\n", integr2);
}
