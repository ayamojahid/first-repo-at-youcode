#include <stdio.h>

int main() {
    printf("Taille de int : %d octets\n", (int)sizeof(int));
    printf("Taille de short : %d octets\n", (int)sizeof(short));
    printf("Taille de long : %d octets\n", (int)sizeof(long));
    printf("Taille de float : %d octets\n", (int)sizeof(float));
    printf("Taille de double : %d octets\n", (int)sizeof(double));
    printf("Taille de long double : %d octets\n", (int)sizeof(long double));

    return 0;
}
