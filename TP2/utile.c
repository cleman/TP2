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
  for (int i = 0; i < taille; i++)printf("%d\n", tab[i]);
  printf("Fin de l'affichage\n");
}