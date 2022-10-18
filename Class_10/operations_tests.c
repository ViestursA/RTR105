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

 printf("Piemērs ar &&: \n");
 printf("%d && %d = %d \n \n" , q , w, q&&w);

 printf("Piemērs ar ||: \n");
 printf("%d || %d = %d \n \n" , q , w, q||w);

 printf("Piemērs ar <<: \n");
 printf("%d << %d = %d \n \n" , q , w, q<<w);

 printf("Piemērs ar >>: \n");
 printf("%d >> %d = %d \n \n" , q , w, q>>w);

 return 0;
}
