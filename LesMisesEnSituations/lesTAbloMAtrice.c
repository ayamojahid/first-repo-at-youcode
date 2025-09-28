
#include<stdio.h>

int main() {
float note[2][4];


for (int i=0 ;i<2 ; i++){
    for (int j=0 ; j<4 ; j++){
         printf("Veuillez entrer la valeur note[%d][%d]: ", i, j);
        scanf("%f" , &note[i][j]);
      
    }
}
printf("les valeur de tableau sont : \n");
for (int i=0 ;i<2 ; i++){
    for (int j=0 ; j<4 ; j++){ 
        printf("note[%d][%d] = %.2f\n", i, j, note[i][j]);
    }


}
return 0;   
}






/*
#include<stdio.h>

int main() {
    // ==================== DÉCLARATION ====================
    
    // Tableau 2D : 3 lignes × 4 colonnes
    int matrice[3][4];
    
    // Initialisation directe
    int matrice2[2][3] = {
        {1, 2, 3},   // Ligne 0
        {4, 5, 6}    // Ligne 1
    };
    
    // ==================== ACCÈS AUX ÉLÉMENTS ====================
    
    printf("=== ACCÈS AUX ÉLÉMENTS ===\n");
    printf("matrice2[0][0] = %d\n", matrice2[0][0]);  // 1
    printf("matrice2[1][2] = %d\n", matrice2[1][2]);  // 6
    
    // ==================== REMPLISSAGE AVEC BOUCLES ====================
    
    printf("\n=== REMPLISSAGE ===\n");
    for(int i = 0; i < 3; i++) {          // Lignes
        for(int j = 0; j < 4; j++) {      // Colonnes
            matrice[i][j] = i + j;        // Valeur = ligne + colonne
        }
    }
    
    // ==================== AFFICHAGE ====================
    
    printf("\n=== MATRICE 3x4 ===\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");  // Nouvelle ligne après chaque ligne
    }
    
    // ==================== TABLEAU 3D ====================
    
    printf("\n=== TABLEAU 3D ===\n");
    int cube[2][3][2] = {
        {   // Plan 0
            {1, 2},   // Ligne 0
            {3, 4},   // Ligne 1  
            {5, 6}    // Ligne 2
        },
        {   // Plan 1
            {7, 8},   // Ligne 0
            {9, 10},  // Ligne 1
            {11, 12}  // Ligne 2
        }
    };
    
    // Affichage 3D
    for(int plan = 0; plan < 2; plan++) {
        printf("Plan %d:\n", plan);
        for(int ligne = 0; ligne < 3; ligne++) {
            for(int colonne = 0; colonne < 2; colonne++) {
                printf("%2d ", cube[plan][ligne][colonne]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    // ==================== EXEMPLE PRATIQUE : NOTES ÉLÈVES ====================
    
    printf("=== NOTES ÉLÈVES ===\n");
    float notes[3][4] = {   // 3 élèves, 4 matières
        {15.5, 12.0, 18.5, 14.0},  // Élève 0
        {10.0, 16.5, 13.0, 17.5},  // Élève 1
        {19.0, 11.5, 15.0, 16.5}   // Élève 2
    };
    
    // Calcul moyenne par élève
    for(int eleve = 0; eleve < 3; eleve++) {
        float somme = 0;
        for(int matiere = 0; matiere < 4; matiere++) {
            somme += notes[eleve][matiere];
        }
        printf("Moyenne élève %d: %.2f\n", eleve, somme/4);
    }
    
    // ==================== MODIFICATION ====================
    
    printf("\n=== MODIFICATION ===\n");
    notes[1][2] = 20.0;  // Modifier note élève 1, matière 2
    printf("Nouvelle note: %.1f\n", notes[1][2]);
    
    // ==================== TAILLE MÉMOIRE ====================
    
    printf("\n=== TAILLE MÉMOIRE ===\n");
    printf("Taille matrice: %lu octets\n", sizeof(matrice));
    printf("Taille d'un élément: %lu octets\n", sizeof(matrice[0][0]));
    printf("Nombre d'éléments: %lu\n", sizeof(matrice)/sizeof(matrice[0][0]));
    
    return 0;
}  */