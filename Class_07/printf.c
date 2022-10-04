/* printf example */
#include <stdio.h>

int main()
{
   printf ("Characters(as symbols): %c %c \n", 'a', 65); // 'a' vai 97 vai 0x61 vai 0141 -> 0110 0001
   printf ("Characters(as dec): %d %d \n", 97 , 65); // 'a' vai 97 vai 0x61 -> 0110 0001
   // printf ("Characters(as oct): %o %o \n", 141 , 101); // 'a' vai 97 vai 0x61 -> 0110 0001
   // printf ("Characters(as hex): %x %x \n", 61 , 41); // 'a' vai 97 vai 0x61 -> 0110 0001
   printf ("Characters: %#o %#o \n", 0141 , 65); // 'a' vai 97 vai 0x61 -> 0110 0001
   printf ("Characters: %#x %#x \n", 0141 , 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}

//https://cplusplus.com/reference/cstdio/printf/
