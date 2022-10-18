#include <stdio.h>

// operācijas:        operands_1  operācija  operands_2       | operācija operants |
//                   (datu tips)             (datu tips)
//                                  ||
//                                  \/
//                           operācijas_rezultāts
//                               (datu tips)
//             parasti operācijas rezultāta datu tips ir "lielākais", kas izmantots operandos
// matemātiskās: + - * / % ++ --
// attiecību: < , <= , >= , > , == , !=
// loģiskās: && || !
// loģiskās pa bitiem: & | ^ ~
// bitu: >> <<
// Ko pētīt šodien: kā strādā operācija? 
//                 vai operācija strādā ar jebkuru datu tipu? 
//                 operāciju izpildīšanas secība (to nosaka prioritāte: secības kontrolei var izmantot () )
// / (int/int vai char/char), % , & , | , ^ , ! , && , || , << , >>

int main() {
 char c = 'A';
 int i = 2000, a = 256;
 float f = 2.3;
 double d = -5.6e4;
 
 printf("%d (%ld bytes) * %d (%ld bytes) = %d (%ld bytes) \n \n",c,sizeof(c),i,sizeof(i),c*i,sizeof(c*i));
 
 int q = 56 , w = 10; 
 printf("Dalīšanas piemērs (int/int): \n");
 printf("%d / %d = %d \n \n", q , w , q/w);
 
// % operāciju nevar izmantot reāliem skaitļiem (c valodā ...)
 printf("Dalīšanas atlikuma piemērs: \n");
 printf("%d %% %d = %d \n \n" , q , w, q%w);

 printf("Piemērs ar >: \n");
 printf("%d > %d = %d \n \n" , q , w, q>w);

 printf("Piemērs ar &: \n");
 printf("%d & %d = %d \n \n" , q , w, q&w);

 printf("Piemērs ar |: \n");
 printf("%d | %d = %d \n \n" , q , w, q|w);

 printf("Piemērs ar ^: \n");
 printf("%d ^ %d = %d \n \n" , q , w, q^w);

 printf("Piemērs ar !(loģiskais NE): \n");
 printf("%d -> !%d = %d \n \n" , q , q , !q);

 char c2 = 2;
 char c1 = 1;
 printf("Piemērs ar &&: \n");
 printf("%d && %d = %d \n \n" , c1 , c2, c1&&c2);

 printf("Piemērs ar &&: \n");
 printf("%d && %d = %d \n \n" , c2 , c1, c2&&c1);

 printf("Piemērs ar ||: \n");
 printf("%d || %d = %d \n \n" , q , w, q||w);

//bitu nobīdes pa labi (>>) un pa kreisi (<<)
 unsigned char uc1 = 1; // 0000 0001
 char  c1 = 0;
 printf("Piemērs ar <<: \n");
 printf("%d << %d = %d \n \n" ,uc1,c1,uc1<<c1); // 0000 0001
 
 c1 = 2;                                             
 printf("Piemērs ar >>: \n");
 printf("%d >> %d = %d \n ", uc1,c1,uc1>>c1);

 c1 = 4;
 printf("Piemērs ar <<: \n");
 printf("%d << %d = %d \n ", uc1,c1,uc1<<c1);

 uc1 = 120;  // 0111 1100
 c1 = 1;
 printf("Piemērs ar >>: \n");
 printf("%d >> %d = %d \n ", uc1,c1,uc1>>c1); // 0011 1000 (60 dec)

 c1 = 2;
 printf("Piemērs ar >>: \n");
 printf("%d >> %d = %d \n ", uc1,c1,uc1>>c1); // 0001 1100 (30 dec)

 /*
 78 dec -> 0100 1110 bin
 7. bita saturs - 0 (0)100 1110 lai ir 0 - 0000 000(0)
      (unsgined char)( << 0) vai >> 7
 6. bita saturs - 1 0(1)00 1110 lai ir 1 - 0000 000(1)
                     ( << 1) vai >> 7 
 5. bita saturs - 0 01(0)0 1110 lai ir 0 - 0000 000(0)
                     ( << 2) vai >> 7
 4. bita saturs - 0 010(0) 1110 lai ir 0 - 0000 000(0)
                     ( << 3) vai >> 7
 3. bita saturs - 1 0100 (1)110 lai ir 1 - 0000 000(1)
                     ( << 4) vai >> 7
 2. bita saturs - 1 0100 1(1)10 lai ir 1 - 0000 000(1)
                     ( << 5) vai >> 7
 1. bita saturs - 1 0100 11(1)0 lai ir 1 - 0000 000(1)
                     ( << 6) vai >> 7
 0. bita saturs - 0 0100 111(0) lai ir 0 - 0000 000(0)
                     ( << 6) vai >> 7

 "fokusēšanos" var realizēt ar &
 (0)100 1110
&(1)000 0000 (128 dec = 2^7)
 (0)000 0000 >> 7

 0(1)00 1110
&0(1)00 0000 (64 dec = 2^6)
 0(1)00 0000 >> 6

 */

 return 0;
}
