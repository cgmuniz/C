#include <stdio.h>

int main(void) {
  int n[3], maior;
  printf("Insira três números  (cada um separado por espaço ou enter)\n");
  scanf("%d %d %d", &n[0], &n[1], &n[2]);
  maior = n[0];
  for(int i = 1; i < 3; i ++){
    if(maior < n[i]){
      maior = n[i];
    }
  }
  printf("O maior número é %d", maior);
    
  return 0;
}
