#include<stdio.h>
#include<math.h>
#include

void main(){
 FILE * pFile;
 pFile = fopen ("data.txt","w");
 if(pFile==NULL) {fputs ("File error", stderr); exit(1);}

 float a,b,x,delta_x;

 printf("Ievadiet sākuma vērtību a = ");
 scanf("%f",&a);

 printf("Ievadiet beigu vērtību b = ");
 scanf("%f",&a);

 printf("Kāda ir precizitāte dotajai funkcijai? delta_x = ");
 scanf("%f",&delta_x);

 fprintf("\tx\t\tatan(x)\t\tatan\'(x)\n");
 x = a;
 while(x<b){
  fprintf("%10.2f\t%10.2f\t%10.2f\n",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);
  x += delta_x;
 }
 fClose(pFile);
}
