#include "function.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct mM // Definition pour chaque bateau
{
  int min;
  int max;
} mM;


struct mM min_max(char *tab_entree, int N)
{
  mM sortie;

  sortie.min = tab_entree[0];    //Valeur min
  sortie.max = tab_entree[0];    //Valeur max

  for (int i = 1; i < N; i++)
  {
    if (tab_entree[i] < sortie.min)sortie.min = tab_entree[i];
    if (tab_entree[i] > sortie.max)sortie.max = tab_entree[i];
  }
  return (sortie);
}

struct mM min_max_2(char *tab_entree, int N, int debut, int fin)
{
  mM sortie;
  sortie.min = 2;
  sortie.max = 4;

  return (sortie);
}