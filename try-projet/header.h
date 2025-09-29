
#ifndef HEADER_H
#define HEADER_H

typedef struct 
{
  int Jour,Mois,Anne
}Date;


typedef struct 
{
  int idAvion;
  char modele[50];
  int capacite;
  char statue[20];
  Date dateEntree;
}Avion;

#endif