#include<stdio.h>
#include<string.h>

int main() {
    // ==================== DÉCLARATION DES CHAÎNES ====================
    
    // Méthode 1 : Tableau de caractères (modifiable)
    char chaine1[6] = {'H','e','l','l','o','\0'};
    char chaine2[] = "Hello";  // Le \0 est ajouté automatiquement
    
    // Méthode 2 : Pointeur vers constante (NON modifiable)
    char *chaine3 = "Hello";   // Stocké en mémoire read-only
    
    
    // ==================== AFFICHAGE ====================
    
    printf("=== AFFICHAGE ===\n");
    printf("chaine1: %s\n", chaine1);
    printf("chaine2: %s\n", chaine2);
    
    // Affichage caractère par caractère
    printf("3eme caractère de chaine2: %c\n", chaine2[2]);
    
    
    // ==================== SAISIE UTILISATEUR ====================
    
    char nom[50];
    
    printf("\n=== SAISIE ===\n");
    printf("Entrez votre nom (avec scanf): ");
    scanf("%s", nom);  // ❌ Problème : s'arrête au premier espace
    printf("scanf a lu: %s\n", nom);
    
    // Vider le buffer d'entrée
    while(getchar() != '\n');
    
    printf("Entrez votre nom complet (avec fgets): ");
    fgets(nom, 50, stdin);  // ✅ Meilleure méthode
    printf("fgets a lu: %s", nom);
    
    
    // ==================== MODIFICATION ====================
    
    printf("\n=== MODIFICATION ===\n");
    // Avec tableau : MODIFIABLE
    chaine1[0] = 'h';  // ✅ OK
    printf("chaine1 modifiee: %s\n", chaine1);
    
    // Avec pointeur : NON MODIFIABLE
    // chaine3[0] = 'h';  // ❌ ERREUR! Segmentation fault
    
    
    // ==================== FONCTIONS UTILES ====================
    
    printf("\n=== FONCTIONS STRING.H ===\n");
    char src[] = "World";
    char dest[50];
    
    // Copie
    strcpy(dest, "Hello ");
    printf("strcpy: %s\n", dest);
    
    // Concatenation
    strcat(dest, src);
    printf("strcat: %s\n", dest);
    
    // Longueur
    printf("Longueur: %lu\n", strlen(dest));
    
    // Comparaison
    if(strcmp("Hello", "Hello") == 0) {
        printf("Les chaines sont egales\n");
    }
    
    
    // ==================== AVEC PUTS/GETS (DANGEREUX) ====================
    
    printf("\n=== PUTS/GETS (DEPRECIE) ===\n");
    char prenom[20];
    
    printf("Entrez votre prenom (avec gets): ");
    // gets(prenom);  // ❌ DANGEREUX! Déprécié - risque de buffer overflow
    
    printf("Votre prenom est: ");
    puts(prenom);  // ✅ Affiche avec \n automatique
    
    return 0;
}

/*📚 EXPLICATIONS IMPORTANTES :
1. Différence fondamentale :
char chaine[] = "Hello" → Modifiable ✅

char *chaine = "Hello" → Constante ❌

2. Saisie sécurisée :
scanf("%s", nom) → ❌ S'arrête aux espaces

fgets(nom, taille, stdin) → ✅ Lit tout (espaces inclus)

3. Fonctions essentielles :
strcpy(dest, src) → Copie

strcat(dest, src) → Concatène

strlen(chaine) → Longueur

strcmp(ch1, ch2) → Compare

4. Sécurité :
gets() → ❌ DANGEREUX (déprécié)

fgets() → ✅ SÉCURISÉ

 */