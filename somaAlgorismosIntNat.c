#include <stdio.h>

int main(void) {
  int n, i, restoAtual, somaAlg = 0;
  
  printf("Insira um número natural:\n");
  scanf("%d", &n);
  i = n;
  
  if(i == 0){
    somaAlg = 1;
  }
  else {
    while(i != 0){
      restoAtual = i % 10;
      i = i/10;
      somaAlg = somaAlg + restoAtual;
    }
  }

  printf("A soma dos algorismos é %d", somaAlg);
  return 0;
}
