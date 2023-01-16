#include <stdio.h>

// Bez argumentiem un bez return
void funkcija_1() {
    printf("Koda daļa bez argumentiem un bez return\n");
}

// Ar argumentiem un bez return
void funkcija_2(char name[]) {
    printf("Otrā funkcija: %s\n", name);
}

// Bez argumentiem un ar return
int funkcija_3() {
    int a = 1, b = 2;
    return a + b;
}

// Ar argumentiem un ar return
int funkcija_4(int a, int b) {
    return a * b;
}

// Main daļa, kurā izmantotas iepriekšējās funkcijas
int main() {
    funkcija_1();
    funkcija_2("Ar argumentiem un bez return");
    printf("Summa: %d\n", funkcija_3());
    printf("Reizinājums: %d\n", funkcija_4(50, 4));
    return 0;
}
