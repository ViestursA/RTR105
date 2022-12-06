#include<stdio.h>
#include<math.h>

void main(){
 float a=0.,b=2*M_PI,x,delta_x=1.e-2;

 printf("\tx\t\tatan(x)\t\tatan\'(x)\n");
 x = a;
 while(x<b){
  printf("%10.2f\t%10.2f\t%10.2f\n",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);
  x += delta_x;
 }
}
