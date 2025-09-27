#include <stdio.h>
#include<stdlib.h>

void search(); 

void MainMenu(){

    int choix=-1;

    do
    {
        printf("1- Ajouter un avion\n");
    printf("2- Modifier un avion\n");
    printf("3- Supprimer un avion\n");
    printf("4- Afficher un avion\n");
    printf("5- Rechercher un avion\n");
    printf("0- Quitter\n");
    scanf("%d",&choix);
system("cls");   


    switch (choix)
    {
    case 1:
        // AfficherAvion();
        printf("Ajouter un avion\n");
        break;
        
    case 2:
        printf("Modifier un avion\n");
        break;
    case 3:
        printf("Supprimer un avion\n");
        break; 
    case 4:
        printf("Afficher les avions\n");
        break;
    case 5:
        search();
        break;
    case 0:
        printf("Quitter\n");
        return;
        
    default:
        printf("Unsupported choice\n");
        break;
    }
    } while (1);
    
}



void search(){
        int searchChoice;    

    printf("51- Rechercher par id\n");
        printf("52- Rechercher par model\n");
        printf("59- Retour au menu précédent\n ");
        scanf("%d",&searchChoice);
        switch (searchChoice)
        {
        case 51:
            /* code */
            break;
        case 52:
            /* code */
            break;
        case 53:
            system("cls");
            break;
        
        default:
            break;
        }
}