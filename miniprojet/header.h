#ifndef HEADER_H
#define HEADER_H

// Structure Date
typedef struct {
    int jour, mois, annee;
} Date;

// Structure Avion
typedef struct {
    int idAvion;
    char modele[50];
    int capacite;
    char statut[20];
    Date dateEntree;
} Avion;


// Prototypes des fonctions
void MainMenu(void);
void ajouterAvion(void);
void modifierAvion(void);
void supprimerAvion(void);
void afficherAvions(void);
void rechercherAvion(void);
void trierAvions(void);

#endif
