#include<stdio.h>

int main(void){
 FILE *fp;
 fp = fopen("./numbers.dat","w+");

 if(fp == NULL){
   printf("Failu nav izdevies atvērt. \n");
   return 100;
   }

 double d[] = {1.84564867963644, 8.8955465454 , -6.745415787545};
 printf("%.10f\n %.10f\n %.10f (before fscanf)\n",d[0],d[1],d[2]);
 rewind(fp);
 fscanf(fp, "%lf%lf%lf",&d[0],&d[1],&d[2]);
 fclose(fp);

 printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (after fscanf) \n",d[0],d[1],d[2]);

 return 0;
}
