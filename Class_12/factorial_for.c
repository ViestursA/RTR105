// 5! = 1 * 2 * 3 * 4 * 5 = (5-0)*(5-1)*(5-2)*(5-3)*(5-4) =
//    = !4 * 5
// 5! / 5 = 4!
// !0 = 1

#include<stdio.h>

int main(){
 int n,i,fact;
 printf("Izvēlieties datu tipu (char, int vai long long) \n");


 printf("Ievadiet veselu skaitli! \n");
 scanf("%d",&n);

 i = 0;
 fact = 1;

 for(i=1; i<=n; i++){
 fact = fact * i;
 printf("%3d! = %15d \n", i , fact);
 }

 return 0;
}
