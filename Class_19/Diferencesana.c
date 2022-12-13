#include<stdio.h>
#include<math.h>

void main(){
 float a,b,x,delta_x;

 printf("Ievadiet sākuma vērtību a = ");
 scanf("%f\n",&a);

 printf("Ievadiet beigu vērtību b = ");
 scanf("%f\n",&a);

 printf("Kāda ir precizitāte dotajai funkcijai? delta_x = ");
 scanf("%f\n",&delta_x);

 printf("\tx\t\tatan(x)\t\tatan\'(x)\n");
 x = a;
 while(x<b){
  printf("%10.2f\t%10.2f\t%10.2f\n",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);
  x += delta_x;
 }
}
