#include <stdio.h>
#include <time.h>
#include <math.h>
#include "utile.h"
#include "function.h"

#define MIN -10
#define MAX 10

void main()
{
   int N = 10;
//   test_exercice_2(N, MIN, MAX);

  int tab[N];
  init_tab(tab, N, MIN, MAX);
  affiche_tab(tab, N);

  printf("f1 : %d\n", ss_tab_max(tab, N));
  printf("f2 : %d\n", ss_tab_max_2(tab, N));
  printf("f3 : %d\n", ss_tab_max_3(tab, 0, N-1));
  int out = ss_tab_max_4(tab, 0, N-1);
  printf("f4 : %d\n", out);
//  affiche_tab(tab, N);
}
