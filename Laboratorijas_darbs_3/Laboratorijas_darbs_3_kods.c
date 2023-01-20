#include<stdio.h>
#include<math.h>

void main(){
 FILE * file;
 file = fopen ("data.txt","w");
 if(file==NULL) {fputs ("File error", stderr);}

 float a,b,x,delta_x;

 printf("Ievadiet sākuma vērtību a = ");
 scanf("%f",&a);

 printf("Ievadiet beigu vērtību b = ");
 scanf("%f",&a);

 printf("Kāda ir precizitāte dotajai funkcijai? delta_x = ");
 scanf("%f",&delta_x);

 float dx_analitiskais = 1 / (1+x*x);
 float d2x_analitiskais = -2*x/(1+x*x)/(1+x*x);
 float dx_skaitliskais = ((atan(x+delta_x)-atan(x))/delta_x);
 float d2x_skaitliskais = (((atan(x+delta_x)-atan(x))/delta_x)/delta_x);

 fprintf(file,"\tx\t\tatan(x)\t\tatan'(x)(analītiskā formula)\t\tatan'(x)(skaitliskā forma)\t\tatan''(x)(analītiskā formula)\t\tatan''(x)(skaitliskā forma)\n");
 x = a;
 while(x<b){
  fprintf(file,"%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,atan(x),dx_analitiskais,dx_skaitliskais,d2x_analitiskais,d2x_skaitliskais);
  x += delta_x;
 }
 fclose(file);
}
