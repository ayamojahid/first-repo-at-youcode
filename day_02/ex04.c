#include <stdio.h>

int main() {
    int m1, j1, a1, m2, j2, a2;

    printf("Entrez la première date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &m1, &j1, &a1);

    printf("Entrez la deuxième date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &m2, &j2, &a2);

    if (a1 < a2 || (a1 == a2 && (m1 < m2 || (m1 == m2 && j1 < j2))))
        printf("%d/%d/%02d est plus tôt que %d/%d/%02d\n", m1, j1, a1, m2, j2, a2);
    else if (a1 == a2 && m1 == m2 && j1 == j2)
        printf("Les deux dates sont identiques.\n");
    else
        printf("%d/%d/%02d est plus tôt que %d/%d/%02d\n", m2, j2, a2, m1, j1, a1);

    return 0;
}
