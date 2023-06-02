#include <stdio.h>

int main(void) {
  double cm, pol, pe, jar;
  printf("Insira um valor em cm para ser convertida em polegadas, pés e jardas\n");
  scanf("%lf", &cm);
  pol = cm / 2.54;
  pe = pol / 12;
  jar = pe / 3;
  printf("valor em cm: %lf\nvalor em polegadas: %lf\nvalor em pés: %lf\nvalor em jardas: %lf\n", cm, pol, pe, jar);
  return 0;
}
