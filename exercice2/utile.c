#include "utile.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Initialisation de tab entre Bmin et Bmax aléatoirement
void init_tab(int *tab, int taille, int Bmin, int Bmax)
{
  srand(time(NULL));
  for (int i = 0; i < taille; i++)
  {
    tab[i] = rand()%(Bmax-Bmin+1)+Bmin;
  }
}

//Affichage de tab
void affiche_tab(int *tab, int taille)
{
  for (int i = 0; i < taille; i++)printf("%d ", tab[i]);
  printf("\nFin de l'affichage\n");
}

int max(int a, int b)
{
  if (a > b)return (a);
  else return (b);
}

int maxSommeTraversant(int *tab, int debut, int millieu, int fin)
{
  int somme_gauche = 0, somme_max_gauche = 0;
  for (int i = millieu; i >= debut; i--)
  {
    somme_gauche += tab[i];
    if (somme_gauche > somme_max_gauche)somme_max_gauche = somme_gauche;
  }
  int somme_droite = 0, somme_max_droite = 0;
  for (int i = millieu +1; i <= fin; i++)
  {
    somme_droite += tab[i];
    if (somme_droite > somme_max_droite)somme_max_droite = somme_droite;
  }
  return(somme_max_gauche + somme_max_droite);
}
