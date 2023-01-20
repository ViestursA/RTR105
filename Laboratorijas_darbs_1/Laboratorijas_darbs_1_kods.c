#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double mans_arctan(double x) {
  double a, S;
  int k=0;

  printf("      x\t\t     a\t\t\t         S\n");
  
  a = (x/(sqrt(1+pow(x,2))) * 1/(1*1*1) * 1);
  S = a;
  printf("  %.2f\t    %8.2f\t    %8.2f\n" ,x , a , S);
  
  while(k<1000){
    k++;
    a = a * ((2*k)*pow((2*k-1),2)/(pow(k,2)*4*(2*k+1)) * (x*x/(1+x*x)));
    S = S + a;
    if(k>=999){
      printf("a(%d) = %.2f\t%8.10f\tS(%d) = %8.10f\n",k ,x , a ,k, S);
      }
  }
  
  return S;
}

void main(){
  double x, y, yy;

  printf("Ievadiet funkcijas vērtību arctan(x) = ");
  scanf("%lf", &x);

  y = atan(x);
  printf("Standarta funkcija: y = atan(%.5f) = %.10f\n",x,y);

  yy = mans_arctan(x);
  printf("Lietotāja funkcija: y = atan(%.5f) = %.10f\n\n",x,yy);

  //Teilora rindas izteiksme
  printf("                        1000                                      \n");
  printf("                        ____                       /         \\   \n");
  printf("                        \\                          |    2    |k  \n");
  printf("                 x       \\         (2*k)!          |   x     |   \n");
  printf(" atan(%.2f) = _________  * > ____________________*|_________|   \n", x);
  printf("                ______   /      2    k             |       2 |   \n");
  printf("            _  /     2  /   (k!)  * 4  * (2*k+1)   |  1 + x  |   \n");
  printf("             V 1 + x   /____                       \\         /     \n");
  printf("                        k=0                                       \n");

  //Rekurences reizinātājs
  printf("                                       2       2       \n");
  printf("                            2*k*(2*k-1)       x        \n");
  printf("Rekurences reizinātājs = ________________ * _____      \n");
  printf("                          2                  2         \n");
  printf("                         k  * 4 * (2*k+1)   x + 1      \n\n");
  
  system("gnuplot -p arctan.gp");
}
