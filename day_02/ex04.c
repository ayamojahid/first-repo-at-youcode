#include <stdio.h>

int main () {
    int m, j, a;
    int m1, j1, a1;

    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &m, &j, &a);

    printf("Entrez la deuxieme date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &m1, &j1, &a1);

    if (a > a1 || (a == a1 && m > m1) || (a == a1 && m == m1 && j > j1)) {
        printf("%d/%d/%d est plus tard que %d/%d/%d\n", m, j, a, m1, j1, a1);
    } else if (a == a1 && m == m1 && j == j1) {
        printf("Les deux dates sont identiques : %d/%d/%d\n", m, j, a);
    } else {
        printf("%d/%d/%d est plus tôt que %d/%d/%d\n", m1, j1, a1, m, j, a);
    }

    return 0;
}
