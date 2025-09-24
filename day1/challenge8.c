#include <stdio.h>

int main() {
    float m, t, p, tm, s;

    printf("Montant: ");
    scanf("%f", &m);

    printf("Taux: ");
    scanf("%f", &t);

    printf("Paiement: ");
    scanf("%f", &p);

    tm = t / 100.0f / 12.0f;
    s = m;

    s = s + s * tm - p;
    printf("Solde apres 1er paiement: %.2f\n", s);

    s = s + s * tm - p;
    printf("Solde apres 2eme paiement: %.2f\n", s);

    s = s + s * tm - p;
    printf("Solde apres 3eme paiement: %.2f\n", s);

    printf("\nAppuyez sur Entrer pour quitter...");
  
    return 0;
}

