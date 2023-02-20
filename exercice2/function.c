#include "function.h"
#include "utile.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct sortie
{
  int stm;
} sortie;

int ss_tab_max(int *tab, int N)
{
  int max = tab[0], temp;
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      temp = 0;
      for (int k = i; k <= j; k++)
      {
        temp += tab[k];
      }
      if (temp > max)
      {
        max = temp;
      }
    }
  }
  return (max);
}

int ss_tab_max_2(int *tab, int N)
{
  int max = tab[0];

  for (int i = 0; i < N; i++)
  {
    int somme = 0;
    for (int j = i; j < N; j++)
    {
      somme += tab[j];
      if (somme > max)max = somme;
    }
  }
  return (max);
}

int ss_tab_max_3(int *tab, int debut, int fin)
{
  if (debut == fin)return(tab[debut]);
  int m = (debut+fin)/2;

  int somme_max_gauche = ss_tab_max_3(tab, debut, m);
  int somme_max_droite = ss_tab_max_3(tab, m+1, fin);
  int max_somme_m = tab[m];
  if (max_somme_m < tab[m+1])max_somme_m = tab[m+1];
  else if (max_somme_m < tab[m] + tab[m+1])max_somme_m = tab[m] + tab[m+1];
  return (max(somme_max_gauche, max(somme_max_droite, max_somme_m)));
}

int ss_tab_max_4(int *tab, int debut, int fin)
{
  if (debut == fin)return (tab[debut]);
  else
  {
    int millieu = (fin + debut)/2;

    int somme_max_gauche = ss_tab_max_4(tab, debut, millieu);
    int somme_max_droite = ss_tab_max_4(tab, millieu+1, fin);
    int somme_max_traversant = maxSommeTraversant(tab, debut, millieu, fin);

    return(max(somme_max_gauche, max(somme_max_droite, somme_max_traversant)));
  }
}

void test_exercice_2(int N, int Bmin, int Bmax)
{
  /*
  FILE *fp1 = fopen("resultat_3.txt","w");

  clock_t t1, t2;
  float time_1 = 0;

  for (int N_1 = 10; N_1 <= N; N_1 *= pow(10,0.2))
  {
    printf("%d\n",N_1);
    for (int  i = 0; i < 5; i++)
    {
      int tab[N_1];
      init_tab(tab, N_1, Bmin, Bmax);

      t1 = clock();
      int sortie = ss_tab_max_3(tab, N_1, 0, N_1);
      t2 = clock();
      time_1 += (t2-t1)*pow(10,-6);
  //    printf("Max : %d\n", sortie);
    }
    fprintf(fp1, "%d %f\n",N_1, time_1/20);
  }
  fclose(fp1);
  */
}
