#include <stdio.h>
int main()
{
    int A[4][6], T[6][4];
    int i, j;

    // SAISIE de A
    printf("Veuillez entrer les nombres de la matrice A : \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);  // ✅ Sans \t
        }
    }

    // TRANSFERT de A vers T (transposition)
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            T[j][i] = A[i][j];  // ✅ Transposition
        }
    }

    // AFFICHAGE de T
    printf("\nMatrice transposee T : \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", T[i][j]);
        }
        printf("\n");  // ✅ Retour à la ligne
    }
    
    return 0;  // ✅ À la fin du main
}