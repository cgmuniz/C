#include <stdio.h>

int main(void) {
  double lado1, lado2, lado3;
  int triangulo;
  printf("Insira três valores de lado para um triângulo:\n");
  scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
  if(lado1 + lado2 > lado3){
    if(lado1 + lado3 > lado2){
      if(lado2 + lado3 > lado1){
        triangulo = 1;
      }
    }
  }
  else{
    triangulo = 0;
    printf("Esses valores não compõem um triângulo válido");
  }

  if(triangulo == 1){
    if(lado1 == lado2 == lado3){
      printf("Esses valores compõem um triãngulo equilátero");
    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
      printf("Esses valores compõem um triãngulo isóceles");
    }
    else{
      printf("Esses valores compõem um triãngulo escaleno");
    }
  }
  
  return 0;
}
