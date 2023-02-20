#include <stdio.h>
#include "utile.h"
#include "function.h"

typedef struct mM // Definition pour chaque bateau
{
  int min;
  int max;
} mM;

int main()
{
  mM sortie;

  char tab[10] = {1, 5, 5, 2, 7, 6, 2, 8, 12, 0};

  sortie = min_max(tab,10);
  printf("Le min est : %d\nLe max est : %d\n",sortie.min, sortie.max);

  sortie = min_max_2(tab, 10, 0, 9);
  printf("%d %d\n", sortie.min, sortie.max);
}